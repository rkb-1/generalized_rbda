#pragma once

#include "GeneralizedJoint.h"

namespace grbda
{

    namespace LoopConstraint
    {
        struct Free : Base
        {
            Free();

            int numSpanningPos() const override { return 7; }
            int numIndependentPos() const override { return 7; }

            std::shared_ptr<Base> clone() const override;

            void updateConstraintFromJointPos(const JointCoordinate &joint_pos) override {}
            void updateConstraintFromJointState(const JointState &joint_state) override {}

            DVec<double> gamma(const JointCoordinate &joint_pos) const override;

        };

    }

    namespace GeneralizedJoints
    {

        class Free : public Base
        {
        public:
            Free(const Body &body);
            virtual ~Free() {}

            GeneralizedJointTypes type() const override { return GeneralizedJointTypes::Free; }

            int numUnactuatedVelocities() const override { return 6; }

            void updateKinematics(const JointState &joint_state) override;

            void computeSpatialTransformFromParentToCurrentCluster(
                GeneralizedSpatialTransform &Xup) const override;

            std::vector<std::tuple<Body, JointPtr, DMat<double>>>
            bodiesJointsAndReflectedInertias() const override;

            JointState randomJointState() const override;

        private:
            const Body body_;
        };

    }

} // namespace grbda
