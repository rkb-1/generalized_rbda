#pragma once

#include "GeneralizedJoint.h"
#include "3rd-parties/CasadiGen/header/CasadiGen.h"

namespace grbda
{

	namespace LoopConstraint
	{
		struct TelloDifferential : Base
		{
			TelloDifferential(const CasadiHelperFunctions &jacobian_helpers,
							  const CasadiHelperFunctions &bias_helpers,
                              const CasadiHelperFunctions &G_dot_helpers,
							  const CasadiHelperFunctions &IK_pos_helpers,
							  const CasadiHelperFunctions &IK_vel_helpers);

			std::shared_ptr<Base> clone() const override;

			DVec<double> gamma(const JointCoordinate &joint_pos) const override;

			void updateConstraintFromJointPos(const JointCoordinate &joint_pos) override;
			void updateConstraintFromJointState(const JointState &joint_state) override;

			const CasadiHelperFunctions jacobian_helpers_;
			const CasadiHelperFunctions bias_helpers_;
            const CasadiHelperFunctions G_dot_helpers_;
			const CasadiHelperFunctions IK_pos_helpers_;
			const CasadiHelperFunctions IK_vel_helpers_;
		};
	}

	namespace GeneralizedJoints
	{

		class TelloDifferential : public Base
		{
		public:
			TelloDifferential(Body &rotor_1, Body &rotor_2, Body &link_1, Body &link_2,
							  CoordinateAxis rotor_axis_1, CoordinateAxis rotor_axis_2,
							  CoordinateAxis joint_axis_1, CoordinateAxis joint_axis_2);
			virtual ~TelloDifferential() {}

			void updateKinematics(const JointState &joint_state) override;

			void computeSpatialTransformFromParentToCurrentCluster(
				GeneralizedSpatialTransform &Xup) const override;

			std::vector<std::tuple<Body, JointPtr, DMat<double>>>
			bodiesJointsAndReflectedInertias() const override;

			JointState randomJointState() const override;

		protected:
			std::shared_ptr<LoopConstraint::TelloDifferential> tello_constraint_;

		private:
			JointPtr rotor_1_joint_;
			JointPtr rotor_2_joint_;
			JointPtr link_1_joint_;
			JointPtr link_2_joint_;

			SpatialTransform X21_;

			const Body rotor_1_;
			const Body rotor_2_;
			const Body link_1_;
			const Body link_2_;
		};

	}

} // namespace grbda
