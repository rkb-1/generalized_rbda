#include "TelloDifferential.h"

namespace grbda
{

	namespace LoopConstraint
	{

		template <typename Scalar>
		TelloDifferential<Scalar>::TelloDifferential(const CasadiHelperFunctions &jacobian_helpers,
													 const CasadiHelperFunctions &bias_helpers,
													 const CasadiHelperFunctions &IK_pos_helpers,
													 const CasadiHelperFunctions &IK_vel_helpers)
			: jacobian_helpers_(jacobian_helpers), bias_helpers_(bias_helpers),
			  IK_pos_helpers_(IK_pos_helpers), IK_vel_helpers_(IK_vel_helpers)
		{
			this->G_.setZero(4, 2);
			this->K_.setZero(2, 4);
			this->g_.setZero(4);
			this->k_.setZero(2);
		}

		template <typename Scalar>
		std::shared_ptr<Base<Scalar>> TelloDifferential<Scalar>::clone() const
		{
			return std::make_shared<TelloDifferential<Scalar>>(*this);
		}

		template <typename Scalar>
		DVec<double> TelloDifferential<Scalar>::gamma(const JointCoordinate<> &joint_pos) const
		{
			throw std::runtime_error("Tello loop constraint does not have a gamma function");
		}

		template <typename Scalar>
		void TelloDifferential<Scalar>::updateJacobians(const JointCoordinate<> &joint_pos)
		{
#ifdef DEBUG_MODE
			if (!joint_pos.isSpanning())
				throw std::runtime_error("[TelloDifferential] Position for updating constraint Jacobians must be spanning");
#endif
			std::vector<DVec<double>> arg = {joint_pos.head<2>(), joint_pos.tail<2>()};
			std::vector<Eigen::MatrixBase<DMat<double>> *> J = {&this->G_, &this->K_};
			casadi_interface(arg, J, jacobian_helpers_);
		}

		template <typename Scalar>
		void TelloDifferential<Scalar>::updateBiases(const JointState<> &joint_state)
		{
#ifdef DEBUG_MODE
			if (!joint_state.position.isSpanning() || !joint_state.velocity.isSpanning())
				throw std::runtime_error("[TelloDifferential] Position and velocity for updating constraint bias must be spanning");
#endif

			const DVec<double> &q = joint_state.position;
			const DVec<double> &q_dot = joint_state.velocity;

			std::vector<DVec<double>> arg = {q.head<2>(), q.tail<2>(),
											 q_dot.head<2>(), q_dot.tail<2>()};
			std::vector<Eigen::MatrixBase<DVec<double>> *> b = {&this->g_, &this->k_};
			casadi_interface(arg, b, bias_helpers_);
		}

		template class TelloDifferential<double>;

	}

	namespace ClusterJoints
	{

		template <typename Scalar>
		TelloDifferential<Scalar>::TelloDifferential(TelloDifferentialModule &module)
			: Base<Scalar>(4, 4, 2), rotor1_(module.rotor1_), rotor2_(module.rotor2_),
			  link1_(module.link1_), link2_(module.link2_), gear_ratio_(module.gear_ratio_)
		{
			rotor1_joint_ =
				this->single_joints_.emplace_back(new Joints::Revolute<>(module.rotor1_axis_));
			rotor2_joint_ =
				this->single_joints_.emplace_back(new Joints::Revolute<>(module.rotor2_axis_));
			link1_joint_ =
				this->single_joints_.emplace_back(new Joints::Revolute<>(module.link1_axis_));
			link2_joint_ =
				this->single_joints_.emplace_back(new Joints::Revolute<>(module.link2_axis_));

			this->spanning_tree_to_independent_coords_conversion_ = DMat<double>::Identity(2, 4);
			this->spanning_tree_to_independent_coords_conversion_ << 1., 0., 0., 0., 0., 1., 0., 0.;

			X_intra_S_span_ = DMat<double>::Zero(24, 4);
			X_intra_S_span_ring_ = DMat<double>::Zero(24, 4);

			X_intra_S_span_.block<6, 1>(0, 0) = rotor1_joint_->S();
			X_intra_S_span_.block<6, 1>(6, 1) = rotor2_joint_->S();
			X_intra_S_span_.block<6, 1>(12, 2) = link1_joint_->S();
			X_intra_S_span_.block<6, 1>(18, 3) = link2_joint_->S();

			this->S_.template block<6, 1>(0, 0) = gear_ratio_ * rotor1_joint_->S();
			this->S_.template block<6, 1>(6, 1) = gear_ratio_ * rotor2_joint_->S();
		}

		template <typename Scalar>
		void TelloDifferential<Scalar>::updateKinematics(const JointState<> &joint_state)
		{
			const JointState<> spanning_joint_state = this->toSpanningTreeState(joint_state);
			const DVec<double> &q = spanning_joint_state.position;
			const DVec<double> &q_dot = spanning_joint_state.velocity;

			rotor1_joint_->updateKinematics(q.segment<1>(0), q_dot.segment<1>(0));
			rotor2_joint_->updateKinematics(q.segment<1>(1), q_dot.segment<1>(1));
			link1_joint_->updateKinematics(q.segment<1>(2), q_dot.segment<1>(2));
			link2_joint_->updateKinematics(q.segment<1>(3), q_dot.segment<1>(3));

			X21_ = link2_joint_->XJ() * link2_.Xtree_;

			const DMat<double> &S1 = link1_joint_->S();
			const DMat<double> X21_S1 = X21_.transformMotionSubspace(S1);
			const DMat<double> &S2 = link2_joint_->S();
			const DVec<double> v2_relative = S2 * q_dot[3];
			const DMat<double> v2_rel_crm = spatial::generalMotionCrossMatrix(v2_relative);

			X_intra_S_span_.block<6, 1>(18, 2) = X21_S1;
			X_intra_S_span_ring_.block<6, 1>(18, 2) = -v2_rel_crm * X21_S1;

			const DMat<double> G = this->loop_constraint_->G();
			this->S_.template block<6, 1>(12, 0) = G(2, 0) * S1;
			this->S_.template block<6, 1>(12, 1) = G(2, 1) * S1;
			this->S_.template block<6, 1>(18, 0) = G(2, 0) * X21_S1 + G(3, 0) * S2;
			this->S_.template block<6, 1>(18, 1) = G(2, 1) * X21_S1 + G(3, 1) * S2;

			this->vJ_ = X_intra_S_span_ * q_dot;
			this->cJ_ = X_intra_S_span_ring_ * q_dot + X_intra_S_span_ * this->loop_constraint_->g();
		}

		template <typename Scalar>
		void TelloDifferential<Scalar>::computeSpatialTransformFromParentToCurrentCluster(
			spatial::GeneralizedTransform<> &Xup) const
		{
#ifdef DEBUG_MODE
			if (Xup.getNumOutputBodies() != 4)
				throw std::runtime_error("[TelloDifferential] Xup must have 24 rows");
#endif

			Xup[0] = rotor1_joint_->XJ() * rotor1_.Xtree_;
			Xup[1] = rotor2_joint_->XJ() * rotor2_.Xtree_;
			Xup[2] = link1_joint_->XJ() * link1_.Xtree_;
			Xup[3] = link2_joint_->XJ() * link2_.Xtree_ * Xup[2];
		}

		template <typename Scalar>
		JointState<> TelloDifferential<Scalar>::randomJointState() const
		{
			JointCoordinate<> joint_pos(DVec<double>::Zero(this->num_positions_), true);
			JointCoordinate<> joint_vel(DVec<double>::Zero(this->num_velocities_), false);
			JointState<> joint_state(joint_pos, joint_vel);

			// Position
			std::vector<DVec<double>> dependent_state = {DVec<double>::Random(2)};
			Vec2<double> minimal_pos = Vec2<double>::Zero(2);
			casadi_interface(dependent_state, minimal_pos, tello_constraint_->IK_pos_helpers_);
			Vec2<double> independent_pos = gear_ratio_ * minimal_pos;
			joint_state.position << independent_pos, dependent_state[0];

			// Velocity
			dependent_state.push_back(DVec<double>::Random(2));
			Vec2<double> minimal_vel = Vec2<double>::Zero(2);
			casadi_interface(dependent_state, minimal_vel, tello_constraint_->IK_vel_helpers_);
			joint_state.velocity << minimal_vel;

			return joint_state;
		}

		template <typename Scalar>
		std::vector<std::tuple<Body<>, JointPtr<double>, DMat<double>>>
		TelloDifferential<Scalar>::bodiesJointsAndReflectedInertias() const
		{
			std::vector<std::tuple<Body<>, JointPtr<double>, DMat<double>>> bodies_joints_and_ref_inertias_;
			const Mat2<double> Z = Mat2<double>::Zero();
			bodies_joints_and_ref_inertias_.push_back(std::make_tuple(link1_, link1_joint_, Z));
			bodies_joints_and_ref_inertias_.push_back(std::make_tuple(link2_, link2_joint_, Z));
			return bodies_joints_and_ref_inertias_;
		}

		template class TelloDifferential<double>;

	}

} // namespace grbda
