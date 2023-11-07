/* This file was automatically generated by CasADi 3.6.3.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) tkad_phi_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s1[7] = {1, 2, 0, 1, 2, 0, 0};

/* tkad_phi:(i0[2],i1[2])->(o0[1x2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a2, a3, a4, a5, a6, a7;
  a0=21.;
  a1=arg[0]? arg[0][0] : 0;
  a2=6.;
  a1=(a1/a2);
  a3=2.;
  a4=(a1/a3);
  a5=arg[0]? arg[0][1] : 0;
  a5=(a5/a2);
  a2=(a5/a3);
  a4=(a4-a2);
  a2=1.3816026358787112e+00;
  a4=(a4+a2);
  a4=cos(a4);
  a0=(a0*a4);
  a4=6250.;
  a0=(a0/a4);
  a4=13.;
  a2=(a1/a3);
  a6=(a5/a3);
  a2=(a2-a6);
  a6=1.0325367854798453e+00;
  a2=(a2+a6);
  a2=cos(a2);
  a4=(a4*a2);
  a2=625.;
  a4=(a4/a2);
  a0=(a0-a4);
  a4=2.0522886837964237e-02;
  a0=(a0-a4);
  a4=7.;
  a2=(a1/a3);
  a6=(a5/a3);
  a2=(a2-a6);
  a6=arg[1]? arg[1][1] : 0;
  a2=(a2+a6);
  a7=1.4514158059584845e+00;
  a2=(a2+a7);
  a2=sin(a2);
  a4=(a4*a2);
  a2=2500.;
  a4=(a4/a2);
  a0=(a0-a4);
  a4=91.;
  a2=4.1887902047863906e-01;
  a2=(a6+a2);
  a2=sin(a2);
  a4=(a4*a2);
  a2=5000.;
  a4=(a4/a2);
  a0=(a0+a4);
  a4=147.;
  a2=6.9813170079773182e-02;
  a6=(a6+a2);
  a6=sin(a6);
  a4=(a4*a6);
  a6=50000.;
  a4=(a4/a6);
  a0=(a0-a4);
  a4=2.6135840000000000e-02;
  a0=(a0+a4);
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[1]? arg[1][0] : 0;
  a5=(a5/a3);
  a0=(a0-a5);
  a1=(a1/a3);
  a0=(a0-a1);
  if (res[0]!=0) res[0][1]=a0;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int tkad_phi(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int tkad_phi_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int tkad_phi_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void tkad_phi_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int tkad_phi_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void tkad_phi_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void tkad_phi_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void tkad_phi_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int tkad_phi_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int tkad_phi_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real tkad_phi_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* tkad_phi_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* tkad_phi_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* tkad_phi_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* tkad_phi_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int tkad_phi_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


