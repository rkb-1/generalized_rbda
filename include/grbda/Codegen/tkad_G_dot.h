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

extern "C" int tkad_G_dot(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
extern "C" int tkad_G_dot_alloc_mem(void);
extern "C" int tkad_G_dot_init_mem(int mem);
extern "C" void tkad_G_dot_free_mem(int mem);
extern "C" int tkad_G_dot_checkout(void);
extern "C" void tkad_G_dot_release(int mem);
extern "C" void tkad_G_dot_incref(void);
extern "C" void tkad_G_dot_decref(void);
extern "C" casadi_int tkad_G_dot_n_in(void);
extern "C" casadi_int tkad_G_dot_n_out(void);
extern "C" casadi_real tkad_G_dot_default_in(casadi_int i);
extern "C" const char* tkad_G_dot_name_in(casadi_int i);
extern "C" const char* tkad_G_dot_name_out(casadi_int i);
extern "C" const casadi_int* tkad_G_dot_sparsity_in(casadi_int i);
extern "C" const casadi_int* tkad_G_dot_sparsity_out(casadi_int i);
extern "C" int tkad_G_dot_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define tkad_G_dot_SZ_ARG 4
#define tkad_G_dot_SZ_RES 1
#define tkad_G_dot_SZ_IW 0
#define tkad_G_dot_SZ_W 28
