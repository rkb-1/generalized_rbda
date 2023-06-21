#pragma once

#include <memory>

#include "Dynamics/Body.h"
#include "Dynamics/Joints/Joint.h"
#include "Utils/Utilities/SpatialTransforms.h"

namespace grbda
{

    using JointPtr = std::shared_ptr<Joints::Base>;

    enum class GeneralizedJointTypes
    {
        Free,
        Revolute,
        RevolutePair,
        RevolutePairWithRotor,
        RevoluteWithRotor,
        RevoluteWithMultipleRotorsJoint,
        Generic,
	TelloHipDifferential
    };

    namespace GeneralizedJoints
    {

        class Base
        {
        public:
            EIGEN_MAKE_ALIGNED_OPERATOR_NEW

            Base(int num_independent_positions, int num_independent_velocities, int num_bodies);
            virtual ~Base() {}

            virtual GeneralizedJointTypes type() const = 0;

            virtual void updateKinematics(const JointState &joint_state) = 0;

            virtual void computeSpatialTransformFromParentToCurrentCluster(
                GeneralizedSpatialTransform &Xup) const = 0;

            const std::vector<JointPtr> singleJoints() const { return single_joints_; };

            virtual std::vector<std::tuple<Body, JointPtr, DMat<double>>>
            bodiesJointsAndReflectedInertias() const
            {
                throw std::runtime_error("Reflected Inertia not setup for this generalized joint type");
            }

            int numIndependentPositions() const { return num_independent_positions_; }
            int numIndependentVelocities() const { return num_independent_velocities_; }
            virtual int numUnactuatedVelocities() const { return 0; }

            const DMat<double> &S() const { return S_; }
            const DMat<double> &S_ring() const { return S_ring_; }
            const DMat<double> &Psi() const { return Psi_; }
            const DVec<double> &vJ() const { return vJ_; }

            // TODO(@MatthewChignoli): Create unit tests where spannig_coordinates is true
            // I also don't like this function name because it does not imply what the argument is..
            virtual JointState randomJointState() const;
            virtual JointState randomSpanningJointState() const;

            // TODO(@MatthewChignoli): We should not need to static cast here
            const DVec<double> gamma(JointCoordinate<double> q) const
            {
                return gamma_(static_cast<DVec<double>>(q));
            }
            const DMat<double> &G() const { return G_; }
            const DVec<double> &g() const { return g_; }

            const DMat<double> &K() const { return K_; }
            const DVec<double> &k() const { return k_; }

            const DMat<double> &spanningTreeToIndependentCoordsConversion() const
            {
                return spanning_tree_to_independent_coords_conversion_;
            }

            JointState toSpanningTreeState(const JointState &joint_state)
            {
                JointState spanning_joint_state = joint_state;

                if (!joint_state.position.isSpanning() && !joint_state.velocity.isSpanning())
                {
                    updateConstraintKinematics(joint_state);
                    spanning_joint_state.position = gamma_(joint_state.position);
                    spanning_joint_state.velocity = G_ * joint_state.velocity;
                }
                else if (!joint_state.position.isSpanning())
                {
                    updateConstraintKinematics(joint_state);
                    spanning_joint_state.position = gamma_(joint_state.position);
                }
                else if (!joint_state.velocity.isSpanning())
                {
                    updateConstraintKinematics(joint_state);
                    spanning_joint_state.velocity = G_ * joint_state.velocity;
                }

                return spanning_joint_state;
            }

        protected:
            virtual void updateConstraintKinematics(const JointState &joint_state) {}

            const int num_bodies_;
            const int num_independent_positions_;
            const int num_independent_velocities_;

            DMat<double> S_;
            DMat<double> S_ring_;
            DMat<double> Psi_;
            DVec<double> vJ_;

            DVecFcn<double> gamma_;
            DMat<double> G_;
            DVec<double> g_;

            DVecFcn<double> phi_;
            DMat<double> K_;
            DVec<double> k_;

            DMat<double> spanning_tree_to_independent_coords_conversion_;

            std::vector<JointPtr> single_joints_;
        };

    }

} // namespace grbda
