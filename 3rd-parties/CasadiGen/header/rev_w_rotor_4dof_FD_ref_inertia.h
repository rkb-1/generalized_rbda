/* This file was automatically generated by CasADi 3.6.3.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

extern "C" int RevWithRotors4DofFwdDynReflectedInertia(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
extern "C" int RevWithRotors4DofFwdDynReflectedInertia_alloc_mem(void);
extern "C" int RevWithRotors4DofFwdDynReflectedInertia_init_mem(int mem);
extern "C" void RevWithRotors4DofFwdDynReflectedInertia_free_mem(int mem);
extern "C" int RevWithRotors4DofFwdDynReflectedInertia_checkout(void);
extern "C" void RevWithRotors4DofFwdDynReflectedInertia_release(int mem);
extern "C" void RevWithRotors4DofFwdDynReflectedInertia_incref(void);
extern "C" void RevWithRotors4DofFwdDynReflectedInertia_decref(void);
extern "C" casadi_int RevWithRotors4DofFwdDynReflectedInertia_n_in(void);
extern "C" casadi_int RevWithRotors4DofFwdDynReflectedInertia_n_out(void);
extern "C" casadi_real RevWithRotors4DofFwdDynReflectedInertia_default_in(casadi_int i);
extern "C" const char* RevWithRotors4DofFwdDynReflectedInertia_name_in(casadi_int i);
extern "C" const char* RevWithRotors4DofFwdDynReflectedInertia_name_out(casadi_int i);
extern "C" const casadi_int* RevWithRotors4DofFwdDynReflectedInertia_sparsity_in(casadi_int i);
extern "C" const casadi_int* RevWithRotors4DofFwdDynReflectedInertia_sparsity_out(casadi_int i);
extern "C" int RevWithRotors4DofFwdDynReflectedInertia_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define RevWithRotors4DofFwdDynReflectedInertia_SZ_ARG 3
#define RevWithRotors4DofFwdDynReflectedInertia_SZ_RES 1
#define RevWithRotors4DofFwdDynReflectedInertia_SZ_IW 0
#define RevWithRotors4DofFwdDynReflectedInertia_SZ_W 134
