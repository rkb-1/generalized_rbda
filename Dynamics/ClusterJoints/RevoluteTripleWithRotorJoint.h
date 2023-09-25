#ifndef GRBDA_GENERALIZED_JOINTS_REVOLUTE_TRIPLE_WITH_ROTOR_JOINT_H
#define GRBDA_GENERALIZED_JOINTS_REVOLUTE_TRIPLE_WITH_ROTOR_JOINT_H

#include "ClusterJoint.h"

namespace grbda
{

    namespace ClusterJoints
    {

        template <typename Scalar = double>
        class RevoluteTripleWithRotor : public Base<Scalar>
        {
        public:
            RevoluteTripleWithRotor(const ParallelBeltTransmissionModule<Scalar>& module_1,
                                    const ParallelBeltTransmissionModule<Scalar>& module_2,
                                    const ParallelBeltTransmissionModule<Scalar>& module_3);
            virtual ~RevoluteTripleWithRotor() {}

            ClusterJointTypes type() const override
            {
                return ClusterJointTypes::RevoluteTripleWithRotor;
            }

            void updateKinematics(const JointState<> &joint_state) override;

            void computeSpatialTransformFromParentToCurrentCluster(
                spatial::GeneralizedTransform<> &Xup) const override;

            std::vector<std::tuple<Body<>, JointPtr<double>, DMat<double>>>
            bodiesJointsAndReflectedInertias() const override;

        private:
            JointPtr<Scalar> link_1_joint_;
            JointPtr<Scalar> link_2_joint_;
            JointPtr<Scalar> link_3_joint_;
            JointPtr<Scalar> rotor_1_joint_;
            JointPtr<Scalar> rotor_2_joint_;
            JointPtr<Scalar> rotor_3_joint_;

            spatial::Transform<> X21_;
            spatial::Transform<> X32_;
            spatial::Transform<> X31_;

            const Body<> link_1_;
            const Body<> link_2_;
            const Body<> link_3_;
            const Body<> rotor_1_;
            const Body<> rotor_2_;
            const Body<> rotor_3_;

            DMat<double> X_intra_S_span_;
            DMat<double> X_intra_S_span_ring_;
        };

    }

} // namespace grbda

#endif // GRBDA_GENERALIZED_JOINTS_REVOLUTE_TRIPLE_WITH_ROTOR_JOINT_H
