#ifndef GRBDA_STATE_REPRESENTATION_H
#define GRBDA_STATE_REPRESENTATION_H

#include "cppTypes.h"

namespace grbda
{

    template <typename Scalar = double>
    class JointCoordinate : public DVec<Scalar>
    {
    public:
        JointCoordinate(const DVec<Scalar> &vec, bool is_spanning)
            : DVec<Scalar>(vec), _is_spanning(is_spanning) {}

        const bool &isSpanning() const { return _is_spanning; }

        // TODO(@MatthewChignoli): Should this be a copy constructor?
        // TODO(@MatthewChignoli): Regardless, it should deduce the scalar type, not assume it
        JointCoordinate(const JointCoordinate<> &other)
            : DVec<Scalar>(other), _is_spanning(other._is_spanning) {}

        JointCoordinate &operator=(const JointCoordinate<> &other)
        {
            this->DVec<Scalar>::operator=(other);
            _is_spanning = other._is_spanning;
            return *this;
        }

        template <typename Derived>
        JointCoordinate<> &operator=(const Eigen::DenseBase<Derived> &x)
        {
            this->DVec<Scalar>::operator=(x);
            return *this;
        }

    private:
        bool _is_spanning;
    };

    template <typename Scalar = double>
    struct JointState
    {
        JointState(const JointCoordinate<Scalar> &pos, const JointCoordinate<Scalar> &vel)
            : position(pos), velocity(vel) {}

        JointState(bool position_is_spanning, bool velocity_is_spanning)
            : position(JointCoordinate<>(DVec<Scalar>::Zero(0), position_is_spanning)),
              velocity(JointCoordinate<>(DVec<Scalar>::Zero(0), velocity_is_spanning)) {}

        JointState()
            : position(JointCoordinate<>(DVec<Scalar>::Zero(0), false)),
              velocity(JointCoordinate<>(DVec<Scalar>::Zero(0), false)) {}

        JointCoordinate<> position;
        JointCoordinate<> velocity;
    };

    template <typename Scalar = double>
    using ModelState = std::vector<JointState<Scalar>>;

    struct ExternalForceAndBodyIndexPair
    {
        ExternalForceAndBodyIndexPair(int index, const SVec<double> &force)
            : index_(index), force_(force) {}
        const int index_;
        const SVec<double> force_;
    };

    struct ContactPoint
    {
        ContactPoint(const int body_index, const Vec3<double> &local_offset, const std::string name,
                     const int num_jacobian_cols)
            : body_index_(body_index), local_offset_(local_offset), name_(name),
              is_end_effector_(false), end_effector_index_(-1),
              jacobian_(D6Mat<double>::Zero(6, num_jacobian_cols)) {}

        ContactPoint(const int body_index, const Vec3<double> &local_offset, const std::string name,
                     const int num_jacobian_cols, const int end_effector_index)
            : body_index_(body_index), local_offset_(local_offset), name_(name),
              is_end_effector_(true), end_effector_index_(end_effector_index),
              jacobian_(D6Mat<double>::Zero(6, num_jacobian_cols)) {}

        ContactPoint(const ContactPoint &other)
            : body_index_(other.body_index_), local_offset_(other.local_offset_),
              name_(other.name_), is_end_effector_(other.is_end_effector_),
              end_effector_index_(other.end_effector_index_), position_(other.position_),
              velocity_(other.velocity_), jacobian_(other.jacobian_),
              supporting_nodes_(other.supporting_nodes_), ChiUp_(other.ChiUp_) {}

        ContactPoint &operator=(const ContactPoint &contact_point) { return *this; }

        const int body_index_;
        const Vec3<double> local_offset_;
        const std::string name_;
        const bool is_end_effector_;
        const int end_effector_index_;

        Vec3<double> position_;
        Vec3<double> velocity_;
        D6Mat<double> jacobian_;

        std::vector<int> supporting_nodes_;
        std::vector<DMat<double>> ChiUp_;
    };

} // namespace grbda

#endif // GRBDA_STATE_REPRESENTATION_H
