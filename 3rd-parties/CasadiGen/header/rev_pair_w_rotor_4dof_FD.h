/* This file was automatically generated by CasADi.
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

extern "C" int RevPairWithRotors4DofFwdDyn(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
extern "C" int RevPairWithRotors4DofFwdDyn_alloc_mem(void);
extern "C" int RevPairWithRotors4DofFwdDyn_init_mem(int mem);
extern "C" void RevPairWithRotors4DofFwdDyn_free_mem(int mem);
extern "C" int RevPairWithRotors4DofFwdDyn_checkout(void);
extern "C" void RevPairWithRotors4DofFwdDyn_release(int mem);
extern "C" void RevPairWithRotors4DofFwdDyn_incref(void);
extern "C" void RevPairWithRotors4DofFwdDyn_decref(void);
extern "C" casadi_int RevPairWithRotors4DofFwdDyn_n_in(void);
extern "C" casadi_int RevPairWithRotors4DofFwdDyn_n_out(void);
extern "C" casadi_real RevPairWithRotors4DofFwdDyn_default_in(casadi_int i);
extern "C" const char* RevPairWithRotors4DofFwdDyn_name_in(casadi_int i);
extern "C" const char* RevPairWithRotors4DofFwdDyn_name_out(casadi_int i);
extern "C" const casadi_int* RevPairWithRotors4DofFwdDyn_sparsity_in(casadi_int i);
extern "C" const casadi_int* RevPairWithRotors4DofFwdDyn_sparsity_out(casadi_int i);
extern "C" int RevPairWithRotors4DofFwdDyn_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define RevPairWithRotors4DofFwdDyn_SZ_ARG 3
#define RevPairWithRotors4DofFwdDyn_SZ_RES 1
#define RevPairWithRotors4DofFwdDyn_SZ_IW 0
#define RevPairWithRotors4DofFwdDyn_SZ_W 134
