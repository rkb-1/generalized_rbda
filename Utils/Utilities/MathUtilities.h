/*! @file Mathutilities.h
 *  @brief Utility functions for math
 *
 */

#ifndef GRBDA_MATHUTILITIES_H
#define GRBDA_MATHUTILITIES_H

#include <eigen3/Eigen/Dense>

namespace grbda
{

  /*!
   * Square a number
   */
  template <typename T>
  T square(T a)
  {
    return a * a;
  }

  /*!
   * Are two eigen matrices almost equal?
   */
  template <typename T, typename T2>
  bool almostEqual(const Eigen::MatrixBase<T> &a, const Eigen::MatrixBase<T> &b,
                   T2 tol)
  {
    long x = T::RowsAtCompileTime;
    long y = T::ColsAtCompileTime;

    if (T::RowsAtCompileTime == Eigen::Dynamic ||
        T::ColsAtCompileTime == Eigen::Dynamic)
    {
      assert(a.rows() == b.rows());
      assert(a.cols() == b.cols());
      x = a.rows();
      y = a.cols();
    }

    for (long i = 0; i < x; i++)
    {
      for (long j = 0; j < y; j++)
      {
        T2 error = std::abs(a(i, j) - b(i, j));
        if (error >= tol)
          return false;
      }
    }
    return true;
  }

  template <typename T>
  bool isPositiveDefinite(const Eigen::MatrixBase<T> &A)
  {
    // Symmetry check
    if (!A.isApprox(A.transpose()))
    {
      return false;
    }

    // Positive eignvalue check
    Eigen::LLT<T> llt_of_A(A);
    if (llt_of_A.info() == Eigen::NumericalIssue)
    {
      return false;
    }

    return true;
  }

} // namespace grbda

#endif // GRBDA_MATHUTILITIES_H
