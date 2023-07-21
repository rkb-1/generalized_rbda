#include "RigidBodyTreeModel.h"

namespace grbda
{

    RigidBodyTreeModel::RigidBodyTreeModel(const ClusterTreeModel &cluster_tree_model,
                                           const FwdDynMethod fd_method)
    {
        forward_dynamics_method_ = fd_method;
        gravity_ = cluster_tree_model.getGravity();

        extractRigidBodiesAndJointsFromClusterModel(cluster_tree_model);
        extractLoopClosureFunctionsFromClusterModel(cluster_tree_model);
        extractContactPointsFromClusterModel(cluster_tree_model);

        if (forward_dynamics_method_ == FwdDynMethod::LagrangeMultiplierCustom)
        {
            for (const auto &node : rigid_body_nodes_)
            {
                if (node->joint_->numVelocities() > 1)
                {
                    // ISSUE #14
                    std::cout << "LagrangeMultiplierCustom is not supported for joints with more than 1 DOF. Switching to LagrangeMultiplierEigen." << std::endl;
                    forward_dynamics_method_ = FwdDynMethod::LagrangeMultiplierEigen;
                    break;
                }
            }
        }
    }

    void RigidBodyTreeModel::extractRigidBodiesAndJointsFromClusterModel(
        const ClusterTreeModel &cluster_tree_model)
    {
        int body_index = 0;
        for (const auto &cluster : cluster_tree_model.clusters())
        {
            for (const auto &body_and_joint : cluster->bodiesAndJoints())
            {
                const auto &body = body_and_joint.first;
                const auto &joint = body_and_joint.second;
                auto node = std::make_shared<RigidBodyTreeNode>(body, joint, position_index_,
                                                                velocity_index_);
                rigid_body_nodes_.push_back(node);
                nodes_.push_back(node);
                body_name_to_body_index_[body.name_] = body_index++;

                position_index_ += joint->numPositions();
                velocity_index_ += joint->numVelocities();
            }
        }
        H_ = DMat<double>::Zero(velocity_index_, velocity_index_);
        C_ = DVec<double>::Zero(velocity_index_);
    }

    void RigidBodyTreeModel::extractLoopClosureFunctionsFromClusterModel(
        const ClusterTreeModel &cluster_tree_model)
    {

        for (const auto &cluster : cluster_tree_model.clusters())
        {
            loop_constraints_.push_back(cluster->joint_->cloneLoopConstraint());
        }
    }

    void RigidBodyTreeModel::extractContactPointsFromClusterModel(
        const ClusterTreeModel &cluster_tree_model)
    {
        contact_name_to_contact_index_ = cluster_tree_model.contact_name_to_contact_index_;
        for (const auto &contact_point : cluster_tree_model.contactPoints())
            contact_points_.push_back(contact_point);
    }

    void RigidBodyTreeModel::initializeState(const DVec<double> &q, const DVec<double> &qd)
    {
        for (auto &node : rigid_body_nodes_)
        {
            node->joint_state_.position = q.segment(node->position_index_, node->num_positions_);
            node->joint_state_.velocity = qd.segment(node->velocity_index_, node->num_velocities_);
        }

        q_ = q;
        qd_ = qd;

        initializeExternalForces();
    }

    Vec3<double> RigidBodyTreeModel::getPosition(const string &body_name)
    {
        // TODO(@MatthewChignoli): Helper function that gets node given the name?
        const int &body_idx = body_name_to_body_index_.at(body_name);
        const TreeNodePtr rigid_body_node = getNodeContainingBody(body_idx);

        forwardKinematics();
        const SpatialTransform &Xa = rigid_body_node->Xa_[0];
        const Mat6<double> Xai = invertSXform(Xa.toMatrix().cast<double>());
        Vec3<double> link_pos = sXFormPoint(Xai, Vec3<double>::Zero());
        return link_pos;
    }

    Mat3<double> RigidBodyTreeModel::getOrientation(const string &body_name)
    {
        const int &body_idx = body_name_to_body_index_.at(body_name);
        const TreeNodePtr rigid_body_node = getNodeContainingBody(body_idx);

        forwardKinematics();
        const SpatialTransform &Xa = rigid_body_node->Xa_[0];
        Mat3<double> Rai = Xa.getRotation();
        Rai.transposeInPlace();
        return Rai;
    }

    Vec3<double> RigidBodyTreeModel::getLinearVelocity(const string &body_name)
    {
        const int &body_idx = body_name_to_body_index_.at(body_name);
        const TreeNodePtr rigid_body_node = getNodeContainingBody(body_idx);

        forwardKinematics();
        const Mat3<double> Rai = getOrientation(body_name);
        const SVec<double> v = rigid_body_node->v_.head<6>();
        return Rai * spatialToLinearVelocity(v, Vec3<double>::Zero());
    }

    Vec3<double> RigidBodyTreeModel::getAngularVelocity(const string &body_name)
    {
        const int &body_idx = body_name_to_body_index_.at(body_name);
        const TreeNodePtr rigid_body_node = getNodeContainingBody(body_idx);

        forwardKinematics();
        const Mat3<double> Rai = getOrientation(body_name);
        const SVec<double> v = rigid_body_node->v_.head<6>();
        return Rai * v.head<3>();
    }

    DMat<double> RigidBodyTreeModel::getMassMatrix()
    {
        updateLoopConstraints();
        compositeRigidBodyAlgorithm();
        return loop_constraints_.G_transpose() * H_ * loop_constraints_.G();
    }

    DVec<double> RigidBodyTreeModel::getBiasForceVector()
    {
        updateLoopConstraints();
        updateBiasForceVector();
        if (loop_constraints_.g().norm() > 1e-12)
        {
            compositeRigidBodyAlgorithm();
        }
        return loop_constraints_.G_transpose() * (C_ + H_ * loop_constraints_.g());
    }

} // namespace grbda
