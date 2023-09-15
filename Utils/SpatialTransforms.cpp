#include "SpatialTransforms.h"

namespace grbda
{

    namespace spatial
    {

        ////////////////////////////////////////////////////////////////////////////////////////////
        // SpatialTransform
        ////////////////////////////////////////////////////////////////////////////////////////////

        Transform::Transform(const Mat3<double> &E, const Vec3<double> &r) : E_(E), r_(r) {}

        void Transform::setIdentity()
        {
            E_.setIdentity();
            r_.setZero();
        }

        Mat6<double> Transform::toMatrix() const
        {
            Mat6<double> X = Mat6<double>::Zero();
            X.template topLeftCorner<3, 3>() = E_;
            X.template bottomRightCorner<3, 3>() = E_;
            X.template bottomLeftCorner<3, 3>() = -E_ * ori::vectorToSkewMat(r_);
            return X;
        }

        SVec<double> Transform::transformMotionVector(const SVec<double> &m_in) const
        {
            SVec<double> m_out;
            m_out.head<3>() = E_ * m_in.head<3>();
            m_out.tail<3>() = -E_ * ori::vectorToSkewMat(r_) * m_in.head<3>() + E_ * m_in.tail<3>();
            return m_out;
        }

        SVec<double> Transform::inverseTransformMotionVector(const SVec<double> &m_in) const
        {
            SVec<double> m_out;
            m_out.head<3>() = E_.transpose() * m_in.head<3>();
            m_out.tail<3>() = ori::vectorToSkewMat(r_) * E_.transpose() * m_in.head<3>() +
                              E_.transpose() * m_in.tail<3>();
            return m_out;
        }

        SVec<double> Transform::transformForceVector(const SVec<double> &f_in) const
        {
            SVec<double> f_out;
            f_out.head<3>() = E_ * f_in.head<3>() - E_ * ori::vectorToSkewMat(r_) * f_in.tail<3>();
            f_out.tail<3>() = E_ * f_in.tail<3>();
            return f_out;
        }

        SVec<double> Transform::inverseTransformForceVector(const SVec<double> &f_in) const
        {
            SVec<double> f_out;
            f_out.head<3>() = E_.transpose() * f_in.head<3>() +
                              ori::vectorToSkewMat(r_) * E_.transpose() * f_in.tail<3>();
            f_out.tail<3>() = E_.transpose() * f_in.tail<3>();
            return f_out;
        }

        D6Mat<double> Transform::transformMotionSubspace(const D6Mat<double> &S_in) const
        {
            D6Mat<double> S_out = D6Mat<double>::Zero(6, S_in.cols());
            for (int i = 0; i < S_in.cols(); i++)
                S_out.col(i) = transformMotionVector(S_in.col(i));
            return S_out;
        }

        D6Mat<double> Transform::inverseTransformMotionSubspace(const D6Mat<double> &S_in) const
        {
            D6Mat<double> S_out = D6Mat<double>::Zero(6, S_in.cols());
            for (int i = 0; i < S_in.cols(); i++)
                S_out.col(i) = inverseTransformMotionVector(S_in.col(i));
            return S_out;
        }

        D6Mat<double> Transform::inverseTransformForceSubspace(const D6Mat<double> &F_in) const
        {
            D6Mat<double> F_out = D6Mat<double>::Zero(6, F_in.cols());
            for (int i = 0; i < F_in.cols(); i++)
                F_out.col(i) = inverseTransformForceVector(F_in.col(i));
            return F_out;
        }

        Mat6<double> Transform::inverseTransformSpatialInertia(const Mat6<double> &I_in) const
        {
            Mat6<double> I_out;
            Mat3<double> E_trans = E_.transpose();
            Mat3<double> r_hat = ori::vectorToSkewMat(r_);

            I_out.topLeftCorner<3, 3>() = E_trans * I_in.topLeftCorner<3, 3>() * E_ +
                                          r_hat * E_trans * I_in.bottomLeftCorner<3, 3>() * E_ -
                                          E_trans * I_in.topRightCorner<3, 3>() * E_ * r_hat -
                                          r_hat * E_trans * I_in.bottomRightCorner<3, 3>() * E_ * r_hat;
            I_out.topRightCorner<3, 3>() = E_trans * I_in.topRightCorner<3, 3>() * E_ +
                                           r_hat * E_trans * I_in.bottomRightCorner<3, 3>() * E_;
            I_out.bottomLeftCorner<3, 3>() = E_trans * I_in.bottomLeftCorner<3, 3>() * E_ -
                                             E_trans * I_in.bottomRightCorner<3, 3>() * E_ * r_hat;
            I_out.bottomRightCorner<3, 3>() = E_trans * I_in.bottomRightCorner<3, 3>() * E_;

            return I_out;
        }

        Vec3<double> Transform::transformPoint(const Vec3<double> &local_offset) const
        {
            return E_ * (local_offset - r_);
        }

        Vec3<double> Transform::inverseTransformPoint(const Vec3<double> &local_offset) const
        {
            return E_.transpose() * local_offset + r_;
        }

        Transform Transform::operator*(const Transform &X_in) const
        {
            const Mat3<double>& R_in = X_in.getRotation();
            Mat3<double> E_out = E_ * R_in;
            Mat3<double> r_out = E_out.transpose() * E_ * ori::vectorToSkewMat(r_) * R_in +
                                 X_in.getSkewTranslationMatrix();
            return Transform(E_out, ori::matToSkewVec(r_out));
        }

        Mat6<double> Transform::rightMultiplyMotionTransform(const Mat6<double> &M_in) const
        {
            Mat6<double> M_out;

            const Mat3<double> &M_TL = M_in.topLeftCorner<3, 3>();
            const Mat3<double> &M_TR = M_in.topRightCorner<3, 3>();
            const Mat3<double> &M_BL = M_in.bottomLeftCorner<3, 3>();
            const Mat3<double> &M_BR = M_in.bottomRightCorner<3, 3>();

            const Mat3<double> r_hat = ori::vectorToSkewMat(r_);

            M_out.topLeftCorner<3, 3>() = M_TL * E_ - M_TR * E_ * r_hat;
            M_out.topRightCorner<3, 3>() = M_TR * E_;
            M_out.bottomLeftCorner<3, 3>() = M_BL * E_ - M_BR * E_ * r_hat;
            M_out.bottomRightCorner<3, 3>() = M_BR * E_;

            return M_out;
        }

        Mat6<double> Transform::leftMultiplyForceTransform(const Mat6<double> &M_in) const
        {
            Mat6<double> M_out;
            const Mat3<double> &M_TL = M_in.topLeftCorner<3, 3>();
            const Mat3<double> &M_TR = M_in.topRightCorner<3, 3>();
            const Mat3<double> &M_BL = M_in.bottomLeftCorner<3, 3>();
            const Mat3<double> &M_BR = M_in.bottomRightCorner<3, 3>();

            const Mat3<double> E_trans = E_.transpose();
            const Mat3<double> r_hat = ori::vectorToSkewMat(r_);

            M_out.topLeftCorner<3, 3>() = E_trans * M_TL + r_hat * E_trans * M_BL;
            M_out.topRightCorner<3, 3>() = E_trans * M_TR + r_hat * E_trans * M_BR;
            M_out.bottomLeftCorner<3, 3>() = E_trans * M_BL;
            M_out.bottomRightCorner<3, 3>() = E_trans * M_BR;

            return M_out;
        }

        ////////////////////////////////////////////////////////////////////////////////////////////
        // GeneralizedAbsoluteTransform
        ////////////////////////////////////////////////////////////////////////////////////////////

        void GeneralizedAbsoluteTransform::appendTransform(const Transform &X)
        {
            transforms_.push_back(X);
            num_output_bodies_++;
        }

        const Transform &
        GeneralizedAbsoluteTransform::getTransformForOutputBody(int output_body_index) const
        {
            return transforms_[output_body_index];
        }

        DMat<double> GeneralizedAbsoluteTransform::toMatrix() const
        {
            DMat<double> X_mat = DMat<double>::Zero(6 * num_output_bodies_, 6);
            int output_body = 0;
            for (const auto &transform : transforms_)
            {
                X_mat.block<6, 6>(6 * output_body, 0) = transform.toMatrix();
                output_body++;
            }
            return X_mat;
        }

        DVec<double>
        GeneralizedAbsoluteTransform::transformExternalForceVector(const DVec<double> &f_in) const
        {
            if (f_in.rows() != 6 * num_output_bodies_)
                throw std::runtime_error("Invalid dimension for external force vector being transformed");

            DVec<double> f_out = DVec<double>::Zero(6 * num_output_bodies_);
            int output_body = 0;
            for (const auto &transform : transforms_)
            {
                f_out.segment<6>(6 * output_body) =
                    transform.transformForceVector(f_in.segment<6>(6 * output_body));
                output_body++;
            }
            return f_out;
        }

        Transform &GeneralizedAbsoluteTransform::operator[](int output_body_index)
        {
            return transforms_[output_body_index];
        }

        ///////////////////////////////////////////////////////////////////////////////////////////
        // GeneralizedTransform
        ///////////////////////////////////////////////////////////////////////////////////////////

        GeneralizedTransform::GeneralizedTransform(int num_parent_bodies)
            : num_parent_bodies_(num_parent_bodies) {}

        void GeneralizedTransform::appendTransformWithClusterAncestorSubIndex(
            const Transform &X, const int subindex)
        {
            if (subindex >= num_parent_bodies_)
                throw std::runtime_error("Parent subindex greater than the number of parent bodies");

            transforms_and_parent_subindices_.push_back(std::pair(X, subindex));
            num_output_bodies_++;
        }

        DMat<double> GeneralizedTransform::toMatrix() const
        {
            DMat<double> X_mat = DMat<double>::Zero(6 * num_output_bodies_, 6 * num_parent_bodies_);
            int output_body = 0;
            for (const auto &transform_and_parent_subindex : transforms_and_parent_subindices_)
            {
                const Transform &X = transform_and_parent_subindex.first;
                const int parent_subindex = transform_and_parent_subindex.second;
                X_mat.block<6, 6>(6 * output_body, 6 * parent_subindex) = X.toMatrix();
                output_body++;
            }
            return X_mat;
        }

        GeneralizedAbsoluteTransform GeneralizedTransform::toAbsolute() const
        {
            GeneralizedAbsoluteTransform Xa_out{};
            for (const auto &transform_and_parent_subindex : transforms_and_parent_subindices_)
                Xa_out.appendTransform(transform_and_parent_subindex.first);
            return Xa_out;
        }

        const std::pair<Transform, int> &
        GeneralizedTransform::transform_and_parent_subindex(int output_body_index) const
        {
            return transforms_and_parent_subindices_[output_body_index];
        }

        DVec<double> GeneralizedTransform::transformMotionVector(const DVec<double> &m_in) const
        {
            DVec<double> m_out = DVec<double>::Zero(6 * num_output_bodies_);
            int output_body = 0;
            for (const auto &transform_and_parent_subindex : transforms_and_parent_subindices_)
            {
                const Transform &X = transform_and_parent_subindex.first;
                const int parent_subindex = transform_and_parent_subindex.second;
                m_out.segment<6>(6 * output_body) =
                    X.transformMotionVector(m_in.segment<6>(6 * parent_subindex));
                output_body++;
            }
            return m_out;
        }

        DVec<double>
        GeneralizedTransform::inverseTransformForceVector(const DVec<double> &f_in) const
        {
            DVec<double> f_out = DVec<double>::Zero(6 * num_parent_bodies_);
            int output_body = 0;
            for (const auto &transform_and_parent_subindex : transforms_and_parent_subindices_)
            {
                const Transform &X = transform_and_parent_subindex.first;
                const int parent_subindex = transform_and_parent_subindex.second;
                f_out.segment<6>(6 * parent_subindex) +=
                    X.inverseTransformForceVector(f_in.segment<6>(6 * output_body));
                output_body++;
            }
            return f_out;
        }

        DMat<double>
        GeneralizedTransform::inverseTransformForceSubspace(const DMat<double> &F_in) const
        {
            const int num_cols = F_in.cols();
            DMat<double> F_out = DMat<double>::Zero(6 * num_parent_bodies_, num_cols);
            int output_body = 0;
            for (const auto &transform_and_parent_subindex : transforms_and_parent_subindices_)
            {
                const Transform &X = transform_and_parent_subindex.first;
                const int parent_subindex = transform_and_parent_subindex.second;
                F_out.block(6 * parent_subindex, 0, 6, num_cols) +=
                    X.inverseTransformForceSubspace(F_in.block(6 * output_body, 0, 6, num_cols));
                output_body++;
            }
            return F_out;
        }

        DMat<double> GeneralizedTransform::inverseTransformSpatialInertia(const DMat<double> &I_in) const
        {
            return leftMultiplyForceTransform(rightMultiplyMotionTransform(I_in));
        }

        Transform &GeneralizedTransform::operator[](int output_body_index)
        {
            return transforms_and_parent_subindices_[output_body_index].first;
        }

        GeneralizedTransform
        GeneralizedTransform::operator*(const GeneralizedTransform &X_in) const
        {
            GeneralizedTransform X_out = GeneralizedTransform(X_in.getNumParentBodies());

            for (const auto &transform_and_parent_subindex1 : transforms_and_parent_subindices_)
            {
                const Transform &X1 = transform_and_parent_subindex1.first;
                const int parent_subindex1 = transform_and_parent_subindex1.second;

                const auto &transform_and_parent_subindex2 =
                    X_in.transform_and_parent_subindex(parent_subindex1);
                const Transform &X2 = transform_and_parent_subindex2.first;
                const int parent_subindex2 = transform_and_parent_subindex2.second;

                X_out.appendTransformWithClusterAncestorSubIndex(X1 * X2, parent_subindex2);
            }

            return X_out;
        }

        GeneralizedAbsoluteTransform
        GeneralizedTransform::operator*(const GeneralizedAbsoluteTransform &X_in) const
        {
            GeneralizedAbsoluteTransform Xa_out = GeneralizedAbsoluteTransform();

            for (const auto &transform_and_parent_subindex1 : transforms_and_parent_subindices_)
            {
                const Transform &X1 = transform_and_parent_subindex1.first;
                const int parent_subindex1 = transform_and_parent_subindex1.second;
                Xa_out.appendTransform(X1 * X_in.getTransformForOutputBody(parent_subindex1));
            }

            return Xa_out;
        }

        DMat<double>
        GeneralizedTransform::rightMultiplyMotionTransform(const DMat<double> &M_in) const
        {
#ifdef DEBU_MODE
            if (M_in.rows() != 6 * num_output_bodies_ || M_in.cols() != 6 * num_output_bodies_)
            {
                throw std::runtime_error("ERROR: M_in must be 6num_output_bodies_ * 6num_output_bodies_");
            }
#endif

            DMat<double> M_out = DMat<double>::Zero(6 * num_output_bodies_,
                                                    6 * num_parent_bodies_);

            int output_body = 0;
            for (const auto &transform_and_parent_subindex : transforms_and_parent_subindices_)
            {
                const Transform &X = transform_and_parent_subindex.first;
                const int &parent_subindex = transform_and_parent_subindex.second;

                for (int i = 0; i < M_in.rows(); i += 6)
                {
                    M_out.block<6, 6>(i, 6 * parent_subindex) +=
                        X.rightMultiplyMotionTransform(M_in.block<6, 6>(i, 6 * output_body));
                }

                output_body++;
            }

            return M_out;
        }

        DMat<double>
        GeneralizedTransform::leftMultiplyForceTransform(const DMat<double> &M_in) const
        {
#ifdef DEBU_MODE
            if (M_in.rows() != 6 * num_output_bodies_ || M_in.cols() != 6 * num_parent_bodies_)
            {
                throw std::runtime_error("ERROR: M_in must be 6num_output_bodies_ * 6num_parent_bodies_");
            }
#endif

            DMat<double> M_out = DMat<double>::Zero(6 * num_parent_bodies_,
                                                    6 * num_parent_bodies_);

            int output_body = 0;
            for (const auto &transform_and_parent_subindex : transforms_and_parent_subindices_)
            {
                const Transform &X = transform_and_parent_subindex.first;
                const int &parent_subindex = transform_and_parent_subindex.second;

                for (int i = 0; i < M_in.cols(); i += 6)
                {
                    M_out.block<6, 6>(6 * parent_subindex, i) +=
                        X.leftMultiplyForceTransform(M_in.block<6, 6>(6 * output_body, i));
                }

                output_body++;
            }

            return M_out;
        }

    } // namespace spatial

} // namespace grbda
