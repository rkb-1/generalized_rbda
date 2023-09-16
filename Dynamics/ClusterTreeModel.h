#ifndef GRBDA_CLUSTER_TREE_MODEL_H
#define GRBDA_CLUSTER_TREE_MODEL_H

#include <string>
#include <vector>
#include <stdio.h>
#include <stdexcept>

#include "TreeModel.h"
#include "Dynamics/Nodes/ClusterTreeNode.h"

namespace grbda
{
    // TODO(@MatthewChignoli): Probably don't want to be using std
    using namespace std;
    using namespace ori;
    using namespace spatial;
    using ClusterTreeNodePtr = std::shared_ptr<ClusterTreeNode>;

    /*!
     * Class to represent a floating base rigid body model with rotors and ground
     * contacts. No concept of state.
     */
    class ClusterTreeModel : public TreeModel
    {
    public:
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW

        ClusterTreeModel()
        {
            body_name_to_body_index_["ground"] = -1;
            body_index_to_cluster_index_[-1] = -1;
        }
        ~ClusterTreeModel() {}

        // The standard process for appending a cluster to the tree is to register all the bodies 
        // in  given cluster and then append them as a cluster by specifying the type of cluster 
        // joint that connects them
        Body registerBody(const string name, const SpatialInertia<double> inertia,
                          const string parent_name, const SpatialTransform Xtree);

        template <typename T, typename... Args>
        void appendRegisteredBodiesAsCluster(const string name, Args&&... args)
        {
            auto cluster_joint = make_shared<T>(args...);
            appendRegisteredBodiesAsCluster(name, cluster_joint);
        }

        // Alternatively, this function can be used when appending individual bodies to the model
        template <typename T, typename... Args>
        void appendBody(const string name, const SpatialInertia<double> inertia,
                        const string parent_name, const SpatialTransform Xtree, Args&&... args)
        {
            Body body = registerBody(name, inertia, parent_name, Xtree);
            shared_ptr<GeneralizedJoints::Base> joint = make_shared<T>(body, args...);
            appendRegisteredBodiesAsCluster(name, joint);
        }

        void appendContactPoint(const string body_name, const Vec3<double> &local_offset,
                                const string contact_point_name, const bool is_end_eff = false);
        void appendContactBox(const string body_name, const Vec3<double> &box_dimensions);
        void appendEndEffector(const string body_name, const Vec3<double> &local_offset,
                               const string end_effector_name);

        void print() const;

        void setState(const ModelState &model_state);

        int getNumBodies() const override { return (int)bodies_.size(); }

        // NOTE: A body's "cluster ancestor" is the nearest member in the body's supporting tree
        // that belongs to a different cluster. This function is only intended to be run when
        // registering bodies. At all other times, a bodies cluster ancestor should be accesses via
        // body.cluster_ancestor_index_
        int getClusterAncestorIndexFromParent(const int body_index);

        int getSubIndexWithinClusterForBody(const Body &body) const;
        int getSubIndexWithinClusterForBody(const int body_index) const;
        int getSubIndexWithinClusterForBody(const string &body_name) const;

        int getNumBodiesInCluster(const ClusterTreeNodePtr cluster) const;
        int getNumBodiesInCluster(const int cluster_index) const;
        int getNumBodiesInCluster(const string &cluster_name) const;

        int getIndexOfClusterContainingBody(const Body &body);
        int getIndexOfClusterContainingBody(const int body_index);
        int getIndexOfClusterContainingBody(const string &body_name);

        ClusterTreeNodePtr getClusterContainingBody(const Body &body);
        ClusterTreeNodePtr getClusterContainingBody(const int body_index);
        ClusterTreeNodePtr getClusterContainingBody(const string &body_name);

        int getIndexOfParentClusterFromBodies(const vector<Body> &bodies);

        const Body &getBody(int index) const override { return bodies_[index]; }
        const TreeNodePtr getNodeContainingBody(int index) override
        {
            return nodes_[getIndexOfClusterContainingBody(index)];
        }

        const vector<Body> &bodies() const { return bodies_; }
        const vector<ClusterTreeNodePtr> &clusters() const { return cluster_nodes_; }

        const Body &body(const int body_index) const { return bodies_[body_index]; }
        const Body &body(const string body_name) const
        {
            return bodies_[body_name_to_body_index_.at(body_name)];
        }

        const ClusterTreeNodePtr cluster(const int cluster_index) const { return cluster_nodes_[cluster_index]; }
        const ClusterTreeNodePtr cluster(const string &cluster_name) const
        {
            return cluster_nodes_[cluster_name_to_cluster_index_.at(cluster_name)];
        }

        Vec3<double> getPosition(const string &body_name) override;
        Mat3<double> getOrientation(const string &body_name) override;
        Vec3<double> getLinearVelocity(const string &body_name) override;
        Vec3<double> getAngularVelocity(const string &body_name) override;

        D6Mat<double> contactJacobianBodyFrame(const std::string &cp_name) override;
        const D6Mat<double> &contactJacobianWorldFrame(const std::string &cp_name) override;

        DVec<double> inverseDynamics(const DVec<double> &qdd) override;
        DVec<double> forwardDynamics(const DVec<double> &tau) override;
        DMat<double> inverseOperationalSpaceInertiaMatrix() override;
        double applyTestForce(const string &contact_point_name,
                              const Vec3<double> &force, DVec<double> &dstate_out) override;

        DMat<double> getMassMatrix() override;
        DVec<double> getBiasForceVector() override;

    protected:
        void appendRegisteredBodiesAsCluster(const string name,
                                             shared_ptr<GeneralizedJoints::Base> joint);

        void checkValidParentClusterForBodiesInCluster(const ClusterTreeNodePtr cluster);
        void checkValidParentClusterForBodiesInCluster(const int cluster_index);
        void checkValidParentClusterForBodiesInCluster(const string &cluster_nam);
        optional<int> searchClustersForBody(const int body_index);

        void resizeSystemMatrices();
        void resetCache() override;

        void updateArticulatedBodies();
        void updateForcePropagators();
        void updateQddEffects();

        DVec<double> localCartesianForceAtPointToWorldPluckerForceOnCluster(
            const Vec3<double> &force, const ContactPoint &contact_point);

        vector<Body> bodies_;
        vector<ClusterTreeNodePtr> cluster_nodes_;

        vector<Body> bodies_in_current_cluster_;

        std::unordered_map<string, int> body_name_to_body_index_;
        std::unordered_map<string, int> cluster_name_to_cluster_index_;
        std::unordered_map<int, int> body_index_to_cluster_index_;

        bool articulated_bodies_updated_ = false;
        bool force_propagators_updated_ = false;
        bool qdd_effects_updated_ = false;

        friend class RigidBodyTreeModel;
        friend class ReflectedInertiaTreeModel;
    };

} // namespace grbda

#endif // GRBDA_CLUSTER_TREE_MODEL_H
