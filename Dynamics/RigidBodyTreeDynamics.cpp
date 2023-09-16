#include "RigidBodyTreeModel.h"

namespace grbda
{

    const D6Mat<double> &RigidBodyTreeModel::contactJacobianWorldFrame(const std::string &cp_name)
    {
        forwardKinematics();
        updateLoopConstraints();

        D6Mat<double> J_spanning = D6Mat<double>::Zero(6, getNumDegreesOfFreedom());

        ContactPoint &cp = contact_points_[contact_name_to_contact_index_.at(cp_name)];
        const size_t &i = cp.body_index_;
        const auto node_i = getNodeContainingBody(i);
        const spatial::Transform Xa = node_i->Xa_[0];
        const Mat3<double> R_link_to_world = Xa.getRotation().transpose();
        Mat6<double> Xout = spatial::createSXform(R_link_to_world, cp.local_offset_);

        int j = (int)i;
        while (j > -1)
        {
            const auto node_j = getNodeContainingBody(j);
            const int &vel_idx = node_j->velocity_index_;
            const int &num_vel = node_j->num_velocities_;

            const D6Mat<double> &S = node_j->S();
            J_spanning.middleCols(vel_idx, num_vel) = Xout * S;

            const Mat6<double> Xup = node_j->Xup_[0].toMatrix();
            Xout = Xout * Xup;

            j = node_j->parent_index_;
        }

        cp.jacobian_ = J_spanning * loop_constraints_.G();
        return cp.jacobian_;
    }

    D6Mat<double> RigidBodyTreeModel::contactJacobianBodyFrame(const std::string &cp_name)
    {
        forwardKinematics();
        updateLoopConstraints();

        D6Mat<double> J_spanning = D6Mat<double>::Zero(6, getNumDegreesOfFreedom());

        ContactPoint &cp = contact_points_[contact_name_to_contact_index_.at(cp_name)];
        const size_t &i = cp.body_index_;
        const auto node_i = getNodeContainingBody(i);
        Mat6<double> Xout = spatial::createSXform(Mat3<double>::Identity(), cp.local_offset_);

        int j = (int)i;
        while (j > -1)
        {
            const auto node_j = getNodeContainingBody(j);
            const int &vel_idx = node_j->velocity_index_;
            const int &num_vel = node_j->num_velocities_;

            const D6Mat<double> &S = node_j->S();
            J_spanning.middleCols(vel_idx, num_vel) = Xout * S;

            const Mat6<double> Xup = node_j->Xup_[0].toMatrix();
            Xout = Xout * Xup;

            j = node_j->parent_index_;
        }

        return J_spanning * loop_constraints_.G();
    }

    DVec<double> RigidBodyTreeModel::forwardDynamics(const DVec<double> &tau)
    {
        forwardKinematics();
        updateLoopConstraints();
        compositeRigidBodyAlgorithm();
        updateBiasForceVector();

        switch (forward_dynamics_method_)
        {
        case FwdDynMethod::Projection:
        {
            // Based on Method 3 in Featherstone Ch 8.5
            const DMat<double> &G = loop_constraints_.G();
            const DMat<double> &G_transpose = loop_constraints_.G_transpose();
            const DVec<double> &g = loop_constraints_.g();

            const DMat<double> A = G_transpose * H_ * G;
            const DVec<double> b = tau - G_transpose * (C_ + H_ * g);
            const DVec<double> ydd = A.llt().solve(b);
            return G * ydd + g;
        }

        case FwdDynMethod::LagrangeMultiplierCustom:
        {
            // Based on Method 2 in Featherstone Ch 8.5 (using custom sparse factorization)

            // Factorize H into L^T*L
            factorization::LTL L(H_, expanded_tree_parent_indices_);

            // Calculate tau_prime
            DVec<double> tau_full = loop_constraints_.G_tranpose_pinv() * tau;
            DVec<double> tau_prime = tau_full - C_;

            // Calculate Y and z via back-subsition
            DMat<double> Y = L.inverseTransposeMatrixProduct(loop_constraints_.K_transpose());
            DVec<double> z = L.inverseTransposeProduct(tau_prime);

            // Calculate A and b
            DMat<double> A = Y.transpose() * Y;
            DVec<double> b = loop_constraints_.k() - Y.transpose() * z;

            // Solve Linear System A*lambda = b
            DVec<double> lambda = A.size() > 0 ? DVec<double>(A.colPivHouseholderQr().solve(b))
                                               : DVec<double>::Zero(0);

            // Solve for qdd using the factors from step 1
            return L.solve(tau_prime + loop_constraints_.K_transpose() * lambda);
        }

        case FwdDynMethod::LagrangeMultiplierEigen:
        {
            // Based on Method 2 in Featherstone Ch 8.5 (using Eigen factorization)

            auto lltOfH = H_.llt();
            DMat<double> A = loop_constraints_.K() * lltOfH.solve(loop_constraints_.K_transpose());
            DVec<double> tau_full = loop_constraints_.G_tranpose_pinv() * tau;
            DVec<double> tau_prime = tau_full - C_;
            DVec<double> b = loop_constraints_.k() -
                             loop_constraints_.K() * lltOfH.solve(tau_prime);
            DVec<double> lambda = A.size() > 0 ? DVec<double>(A.colPivHouseholderQr().solve(b))
                                               : DVec<double>::Zero(0);
            return lltOfH.solve(tau_prime + loop_constraints_.K_transpose() * lambda);
        }

        default:
            throw std::runtime_error("Invalid forward dynamics method specified.");
        }
    }

    DVec<double> RigidBodyTreeModel::inverseDynamics(const DVec<double> &ydd)
    {
        forwardKinematics();
        updateLoopConstraints();

        const DVec<double> qdd_spanning = loop_constraints_.G() * ydd + loop_constraints_.g();
        const DVec<double> tau_id = recursiveNewtonEulerAlgorithm(qdd_spanning);
        return loop_constraints_.G_transpose() * tau_id;
    }

    DMat<double> RigidBodyTreeModel::inverseOperationalSpaceInertiaMatrix()
    {
        const DMat<double> H = getMassMatrix();
        DMat<double> J_stacked = DMat<double>::Zero(6 * getNumEndEffectors(), H.rows());

        int ee_cnt = 0;
        for (int i = 0; i < (int)contact_points_.size(); i++)
        {
            const ContactPoint &cp = contact_points_[i];
            if (!cp.is_end_effector_)
                continue;
            J_stacked.middleRows<6>(6 * ee_cnt++) = contactJacobianBodyFrame(cp.name_);
        }
        return J_stacked * H.inverse() * J_stacked.transpose();
    }

    double RigidBodyTreeModel::applyTestForce(const std::string &contact_point_name,
                                              const Vec3<double> &force, DVec<double> &dstate_out)
    {
        const D3Mat<double> J = contactJacobianWorldFrame(contact_point_name).bottomRows<3>();
        const DMat<double> H = getMassMatrix();
        const DMat<double> H_inv = H.inverse();
        const DMat<double> inv_ops_inertia = J * H_inv * J.transpose();
        dstate_out = H_inv * (J.transpose() * force);
        return force.dot(inv_ops_inertia * force);
    }

} // namespace grbda
