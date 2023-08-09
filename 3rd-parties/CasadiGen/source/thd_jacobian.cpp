/* This file was automatically generated by CasADi 3.6.2.
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
  #define CASADI_PREFIX(ID) thd_jacobian_ ## ID
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
#define casadi_s2 CASADI_PREFIX(s2)

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
static const casadi_int casadi_s1[13] = {4, 2, 0, 4, 8, 0, 1, 2, 3, 0, 1, 2, 3};
static const casadi_int casadi_s2[15] = {2, 4, 0, 2, 4, 6, 8, 0, 1, 0, 1, 0, 1, 0, 1};

/* thd_jacobian:(i0[2],i1[2])->(o0[4x2],o1[2x4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a3, a4, a5, a6, a7, a8, a9;
  a0=1.;
  if (res[0]!=0) res[0][0]=a0;
  a1=0.;
  if (res[0]!=0) res[0][1]=a1;
  a2=1.6000000000000001e-03;
  a3=8.;
  a4=arg[0]? arg[0][1] : 0;
  a5=cos(a4);
  a5=(a3*a5);
  a6=arg[1]? arg[1][1] : 0;
  a7=sin(a6);
  a5=(a5*a7);
  a5=(a2*a5);
  a7=4.0000000000000002e-04;
  a8=57.;
  a9=arg[1]? arg[1][0] : 0;
  a10=cos(a9);
  a10=(a8*a10);
  a11=cos(a6);
  a10=(a10*a11);
  a10=(a7*a10);
  a5=(a5-a10);
  a10=7.;
  a11=sin(a9);
  a11=(a10*a11);
  a12=cos(a6);
  a11=(a11*a12);
  a11=(a2*a11);
  a5=(a5-a11);
  a11=cos(a9);
  a11=(a3*a11);
  a12=sin(a4);
  a13=(a11*a12);
  a14=cos(a6);
  a13=(a13*a14);
  a13=(a2*a13);
  a5=(a5-a13);
  a13=2.0000000000000001e-04;
  a14=49.;
  a15=sin(a9);
  a15=(a14*a15);
  a15=(a13*a15);
  a16=5.0000000000000002e-05;
  a17=399.;
  a18=cos(a9);
  a18=(a17*a18);
  a18=(a16*a18);
  a15=(a15-a18);
  a18=sin(a6);
  a19=sin(a9);
  a19=(a8*a19);
  a18=(a18*a19);
  a18=(a7*a18);
  a15=(a15+a18);
  a18=arg[0]? arg[0][0] : 0;
  a19=sin(a18);
  a19=(a10*a19);
  a20=cos(a9);
  a19=(a19*a20);
  a19=(a2*a19);
  a15=(a15-a19);
  a19=sin(a6);
  a20=cos(a9);
  a20=(a10*a20);
  a19=(a19*a20);
  a19=(a2*a19);
  a15=(a15+a19);
  a19=sin(a6);
  a20=sin(a18);
  a21=sin(a9);
  a21=(a3*a21);
  a21=(a20*a21);
  a21=(a19*a21);
  a21=(a2*a21);
  a15=(a15+a21);
  a21=(a15*a5);
  a22=cos(a18);
  a22=(a3*a22);
  a23=sin(a6);
  a22=(a22*a23);
  a22=(a2*a22);
  a23=cos(a9);
  a23=(a8*a23);
  a24=cos(a6);
  a23=(a23*a24);
  a23=(a7*a23);
  a22=(a22-a23);
  a23=sin(a9);
  a23=(a10*a23);
  a24=cos(a6);
  a23=(a23*a24);
  a23=(a2*a23);
  a22=(a22+a23);
  a23=cos(a9);
  a23=(a3*a23);
  a20=(a23*a20);
  a24=cos(a6);
  a20=(a20*a24);
  a20=(a2*a20);
  a22=(a22-a20);
  a20=sin(a9);
  a14=(a14*a20);
  a13=(a13*a14);
  a14=cos(a9);
  a17=(a17*a14);
  a16=(a16*a17);
  a13=(a13+a16);
  a16=sin(a6);
  a17=sin(a9);
  a17=(a8*a17);
  a16=(a16*a17);
  a16=(a7*a16);
  a13=(a13+a16);
  a16=sin(a4);
  a16=(a10*a16);
  a17=cos(a9);
  a16=(a16*a17);
  a16=(a2*a16);
  a13=(a13+a16);
  a16=sin(a6);
  a17=cos(a9);
  a17=(a10*a17);
  a16=(a16*a17);
  a16=(a2*a16);
  a13=(a13-a16);
  a16=sin(a6);
  a17=sin(a9);
  a17=(a3*a17);
  a12=(a12*a17);
  a12=(a16*a12);
  a12=(a2*a12);
  a13=(a13+a12);
  a12=(a22*a13);
  a21=(a21-a12);
  a5=(a5/a21);
  a12=cos(a18);
  a12=(a8*a12);
  a12=(a7*a12);
  a17=cos(a6);
  a14=sin(a18);
  a14=(a3*a14);
  a17=(a17*a14);
  a17=(a2*a17);
  a12=(a12+a17);
  a17=sin(a9);
  a14=cos(a18);
  a14=(a10*a14);
  a17=(a17*a14);
  a17=(a2*a17);
  a12=(a12-a17);
  a18=cos(a18);
  a23=(a23*a18);
  a19=(a19*a23);
  a19=(a2*a19);
  a12=(a12-a19);
  a5=(a5*a12);
  a19=(-a5);
  if (res[0]!=0) res[0][2]=a19;
  a13=(a13/a21);
  a13=(a13*a12);
  if (res[0]!=0) res[0][3]=a13;
  if (res[0]!=0) res[0][4]=a1;
  if (res[0]!=0) res[0][5]=a0;
  a22=(a22/a21);
  a12=cos(a4);
  a8=(a8*a12);
  a7=(a7*a8);
  a6=cos(a6);
  a8=sin(a4);
  a3=(a3*a8);
  a6=(a6*a3);
  a6=(a2*a6);
  a7=(a7+a6);
  a9=sin(a9);
  a6=cos(a4);
  a10=(a10*a6);
  a9=(a9*a10);
  a9=(a2*a9);
  a7=(a7+a9);
  a4=cos(a4);
  a11=(a11*a4);
  a16=(a16*a11);
  a2=(a2*a16);
  a7=(a7-a2);
  a22=(a22*a7);
  if (res[0]!=0) res[0][6]=a22;
  a15=(a15/a21);
  a15=(a15*a7);
  a7=(-a15);
  if (res[0]!=0) res[0][7]=a7;
  if (res[1]!=0) res[1][0]=a5;
  a13=(-a13);
  if (res[1]!=0) res[1][1]=a13;
  a22=(-a22);
  if (res[1]!=0) res[1][2]=a22;
  if (res[1]!=0) res[1][3]=a15;
  if (res[1]!=0) res[1][4]=a0;
  if (res[1]!=0) res[1][5]=a1;
  if (res[1]!=0) res[1][6]=a1;
  if (res[1]!=0) res[1][7]=a0;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int thd_jacobian(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int thd_jacobian_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int thd_jacobian_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void thd_jacobian_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int thd_jacobian_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void thd_jacobian_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void thd_jacobian_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void thd_jacobian_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int thd_jacobian_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int thd_jacobian_n_out(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real thd_jacobian_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* thd_jacobian_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* thd_jacobian_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* thd_jacobian_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* thd_jacobian_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    case 1: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int thd_jacobian_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


