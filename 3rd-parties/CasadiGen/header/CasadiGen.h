#ifndef CASADIGEN_H
#define CASADIGEN_H

#define int_T long long int

#include "cppTypes.h"
#include <eigen3/Eigen/StdVector>

#include "rev_w_rotor_2dof_FD.h"
#include "rev_w_rotor_2dof_FD_ref_inertia.h"
#include "rev_w_rotor_2dof_FD_ref_inertia_diag.h"
#include "rev_w_rotor_4dof_FD.h"
#include "rev_w_rotor_4dof_FD_ref_inertia.h"
#include "rev_w_rotor_4dof_FD_ref_inertia_diag.h"

#include "rev_pair_w_rotor_2dof_FD.h"
#include "rev_pair_w_rotor_2dof_FD_ref_inertia.h"
#include "rev_pair_w_rotor_2dof_FD_ref_inertia_diag.h"
#include "rev_pair_w_rotor_4dof_FD.h"
#include "rev_pair_w_rotor_4dof_FD_ref_inertia.h"
#include "rev_pair_w_rotor_4dof_FD_ref_inertia_diag.h"

/*
  @brief: Get the numerical evaluation of a CasadiGen function and the output sparsity pattern
  @params:
          arg: T ptr to an array of pointers whose element points to an input variable
          res: T ptr to an array of pointers whose element points to an output variable
          max_sz_res: maximum size of output variables
*/
template <typename T>
void casadi_interface(std::vector<T *> ARG, std::vector<T *> RES, int max_sz_res,
                      int f(const T **, T **, int_T *, T *, int),
                      const int_T *f_sparse_out(int_T),
                      int f_work(int_T *, int_T *, int_T *, int_T *));

template <typename T>
void casadi_interface(std::vector<DVec<T>> &arg, DMat<T> &res,
                      int f(const T **, T **, int_T *, T *, int),
                      const int_T *f_sparse_out(int_T),
                      int f_work(int_T *, int_T *, int_T *, int_T *))
{
  std::vector<T *> ARG;
  for (size_t idx_arg = 0; idx_arg < arg.size(); idx_arg++)
  {
    ARG.push_back(arg[idx_arg].data());
  }

  std::vector<T *> RES = {res.data()};

  casadi_interface(ARG, RES, res.size(), f, f_sparse_out, f_work);
}

#endif // CASADIGEN_H
