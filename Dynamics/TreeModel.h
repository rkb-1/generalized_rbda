#pragma once

#include "Body.h"
#include "DynamicsUtilities.h"
#include "Nodes/TreeNode.h"
#include "Utils/Utilities/spatial.h"
#include "Utils/Utilities/SpatialTransforms.h"
#include "Utils/Utilities/utilities.h"

namespace grbda
{

    using TreeNodePtr = std::shared_ptr<TreeNode>;

    class TreeModel
    {
    public:
        TreeModel()
        {
            gravity_ << 0., 0., 0., 0., 0., -9.81;
        }
        virtual ~TreeModel() {}

        const int& getNumPositions() const { return position_index_; }
        const int& getNumDegreesOfFreedom() const { return velocity_index_; }
        int getNumActuatedDegreesOfFreedom() const { return velocity_index_ - unactuated_dofs_; }
        const int& getNumEndEffectors() const { return num_end_effectors_; }

        virtual DMat<double> getMassMatrix() = 0;
        virtual DVec<double> getBiasForceVector() = 0;

        virtual int getNumBodies() const = 0;

        virtual const Body &getBody(int index) const = 0;
        virtual const TreeNodePtr getNodeContainingBody(int index) = 0;

        void setGravity(const Vec3<double> &g) { gravity_.tail<3>() = g; }
        SVec<double> getGravity() const { return gravity_; }

        virtual void initializeExternalForces(
            const std::vector<ExternalForceAndBodyIndexPair> &force_and_body_index_pairs = {});

        void forwardKinematics();

        virtual D6Mat<double> bodyJacobian(const std::string &cp_name) = 0;
        virtual const D6Mat<double>& contactJacobian(const std::string &cp_name) = 0;
        void contactJacobians();

        virtual DVec<double> forwardDynamics(const DVec<double> &tau) = 0;
        virtual DVec<double> inverseDynamics(const DVec<double> &qdd) = 0;
        virtual DMat<double> inverseOperationalSpaceInertiaMatrix() = 0;
        virtual double applyLocalFrameTestForceAtContactPoint(const Vec3<double> &force,
                                                              const string &contact_point_name,
                                                              DVec<double> &dstate_out) = 0;

        const TreeNodePtr node(const int index) const { return nodes_[index]; }
        const std::vector<TreeNodePtr> &nodes() const { return nodes_; }

        const std::vector<ContactPoint> &contactPoints() const { return contact_points_; }
        const ContactPoint &contactPoint(const int index) const { return contact_points_[index]; }
        const ContactPoint &contactPoint(const std::string &name) const
        {
            return contact_points_[contact_name_to_contact_index_.at(name)];
        }

    protected:
        void contactPointForwardKinematics();
        void compositeRigidBodyAlgorithm();
        void updateBiasForceVector();
        DVec<double> recursiveNewtonEulerAlgorithm(const DVec<double> &qdd);

        virtual void resetCache();

        int getNearestSharedSupportingNode(const std::pair<int, int> &contact_pt_indices);
        bool vectorContainsIndex(const std::vector<int> vec, const int index);

        SVec<double> gravity_;

        DMat<double> H_;
        DVec<double> C_;

        int position_index_ = 0;
        int velocity_index_ = 0;
        int motion_subspace_index_ = 0;
        int unactuated_dofs_ = 0;
        int num_end_effectors_ = 0;

        std::vector<TreeNodePtr> nodes_;
        std::vector<int> indices_of_nodes_experiencing_external_forces_;

        std::vector<ContactPoint> contact_points_;
        std::unordered_map<std::string, int> contact_name_to_contact_index_;

        bool kinematics_updated_ = false;
        bool mass_matrix_updated_ = false;
        bool bias_force_updated_ = false;
        bool contact_jacobians_updated_ = false;
    };

} // namespace grbda
