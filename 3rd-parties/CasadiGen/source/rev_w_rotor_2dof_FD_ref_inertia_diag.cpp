/* This file was automatically generated by CasADi.
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
  #define CASADI_PREFIX(ID) rev_w_rotor_2dof_FD_ref_inertia_diag_ ## ID
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
#define casadi_sq CASADI_PREFIX(sq)

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

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[6] = {2, 1, 0, 2, 0, 1};

/* RevWithRotors2DofFwdDynReflectedInertiaDiag:(i0[2],i1[2],i2[2])->(o0[2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a4, a5, a6, a7, a8, a9;
  a0=1.;
  a1=arg[0]? arg[0][0] : 0;
  a2=cos(a1);
  a3=5.0000000000000000e-01;
  a4=arg[0]? arg[0][1] : 0;
  a4=(a1+a4);
  a5=cos(a4);
  a6=(a3*a5);
  a2=(a2+a6);
  a6=(a3*a5);
  a6=(a2*a6);
  a6=(a0+a6);
  a7=sin(a1);
  a8=sin(a4);
  a9=(a3*a8);
  a7=(a7+a9);
  a9=(a3*a8);
  a9=(a7*a9);
  a6=(a6+a9);
  a9=1.0036000000000000e+00;
  a10=(a2+a2);
  a10=(a3*a10);
  a10=(a2*a10);
  a10=(a9+a10);
  a11=(a7+a7);
  a11=(a3*a11);
  a11=(a7*a11);
  a10=(a10+a11);
  a10=(a10+a0);
  a0=cos(a1);
  a0=(a3*a0);
  a11=casadi_sq(a0);
  a10=(a10+a11);
  a11=sin(a1);
  a11=(a3*a11);
  a12=casadi_sq(a11);
  a10=(a10+a12);
  a5=(a3*a5);
  a12=casadi_sq(a5);
  a9=(a9+a12);
  a8=(a3*a8);
  a12=casadi_sq(a8);
  a9=(a9+a12);
  a12=(a10*a9);
  a13=casadi_sq(a6);
  a12=(a12-a13);
  a13=(a6/a12);
  a14=arg[1]? arg[1][0] : 0;
  a15=cos(a1);
  a16=cos(a4);
  a17=(a3*a16);
  a15=(a15+a17);
  a17=(a14*a15);
  a18=arg[1]? arg[1][1] : 0;
  a19=(a3*a16);
  a20=(a18*a19);
  a17=(a17+a20);
  a17=(a17+a17);
  a20=(a8*a17);
  a21=(a7*a14);
  a22=(a8*a18);
  a21=(a21+a22);
  a22=(a21+a21);
  a19=(a22*a19);
  a20=(a20+a19);
  a20=(a3*a20);
  a19=sin(a1);
  a23=sin(a4);
  a24=(a3*a23);
  a19=(a19+a24);
  a24=(a14*a19);
  a25=(a3*a23);
  a26=(a18*a25);
  a24=(a24+a26);
  a24=(a24+a24);
  a26=(a5*a24);
  a27=(a2*a14);
  a28=(a5*a18);
  a27=(a27+a28);
  a28=(a27+a27);
  a25=(a28*a25);
  a26=(a26+a25);
  a26=(a3*a26);
  a20=(a20-a26);
  a20=(a20*a14);
  a26=(a3*a16);
  a25=(a14*a26);
  a16=(a3*a16);
  a29=(a18*a16);
  a25=(a25+a29);
  a25=(a25+a25);
  a8=(a8*a25);
  a16=(a22*a16);
  a8=(a8+a16);
  a8=(a3*a8);
  a16=(a3*a23);
  a29=(a14*a16);
  a23=(a3*a23);
  a30=(a18*a23);
  a29=(a29+a30);
  a29=(a29+a29);
  a5=(a5*a29);
  a23=(a28*a23);
  a5=(a5+a23);
  a5=(a3*a5);
  a8=(a8-a5);
  a8=(a8*a18);
  a20=(a20+a8);
  a21=(a21+a21);
  a8=cos(a4);
  a5=(a3*a8);
  a5=(a14*a5);
  a23=(a3*a8);
  a23=(a18*a23);
  a5=(a5+a23);
  a5=(a21*a5);
  a5=(a3*a5);
  a27=(a27+a27);
  a23=sin(a4);
  a30=(a3*a23);
  a30=(a14*a30);
  a31=(a3*a23);
  a31=(a18*a31);
  a30=(a30+a31);
  a30=(a27*a30);
  a30=(a3*a30);
  a5=(a5-a30);
  a30=4.9050000000000002e+00;
  a4=sin(a4);
  a31=(a30*a4);
  a5=(a5-a31);
  a20=(a20-a5);
  a5=arg[2]? arg[2][1] : 0;
  a20=(a20-a5);
  a13=(a13*a20);
  a9=(a9/a12);
  a5=cos(a1);
  a5=(a3*a5);
  a31=(a14*a5);
  a31=(a31+a31);
  a31=(a11*a31);
  a11=(a11*a14);
  a32=(a11+a11);
  a32=(a32*a5);
  a31=(a31+a32);
  a31=(a3*a31);
  a32=sin(a1);
  a32=(a3*a32);
  a5=(a14*a32);
  a5=(a5+a5);
  a5=(a0*a5);
  a0=(a0*a14);
  a33=(a0+a0);
  a33=(a33*a32);
  a5=(a5+a33);
  a5=(a3*a5);
  a31=(a31-a5);
  a17=(a7*a17);
  a15=(a22*a15);
  a17=(a17+a15);
  a17=(a3*a17);
  a31=(a31+a17);
  a24=(a2*a24);
  a19=(a28*a19);
  a24=(a24+a19);
  a24=(a3*a24);
  a31=(a31-a24);
  a31=(a31*a14);
  a7=(a7*a25);
  a22=(a22*a26);
  a7=(a7+a22);
  a7=(a3*a7);
  a2=(a2*a29);
  a28=(a28*a16);
  a2=(a2+a28);
  a2=(a3*a2);
  a7=(a7-a2);
  a7=(a7*a18);
  a31=(a31+a7);
  a11=(a11+a11);
  a7=cos(a1);
  a7=(a3*a7);
  a7=(a14*a7);
  a11=(a11*a7);
  a11=(a3*a11);
  a0=(a0+a0);
  a7=sin(a1);
  a7=(a3*a7);
  a7=(a14*a7);
  a0=(a0*a7);
  a0=(a3*a0);
  a11=(a11-a0);
  a0=cos(a1);
  a7=(a3*a8);
  a0=(a0+a7);
  a0=(a14*a0);
  a8=(a3*a8);
  a8=(a18*a8);
  a0=(a0+a8);
  a21=(a21*a0);
  a21=(a3*a21);
  a11=(a11+a21);
  a21=sin(a1);
  a0=(a3*a23);
  a21=(a21+a0);
  a14=(a14*a21);
  a23=(a3*a23);
  a18=(a18*a23);
  a14=(a14+a18);
  a27=(a27*a14);
  a3=(a3*a27);
  a11=(a11-a3);
  a3=1.4715000000000000e+01;
  a1=sin(a1);
  a3=(a3*a1);
  a11=(a11-a3);
  a30=(a30*a4);
  a11=(a11-a30);
  a31=(a31-a11);
  a11=arg[2]? arg[2][0] : 0;
  a31=(a31-a11);
  a9=(a9*a31);
  a13=(a13-a9);
  if (res[0]!=0) res[0][0]=a13;
  a6=(a6/a12);
  a6=(a6*a31);
  a10=(a10/a12);
  a10=(a10*a20);
  a6=(a6-a10);
  if (res[0]!=0) res[0][1]=a6;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors2DofFwdDynReflectedInertiaDiag(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors2DofFwdDynReflectedInertiaDiag_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors2DofFwdDynReflectedInertiaDiag_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void RevWithRotors2DofFwdDynReflectedInertiaDiag_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors2DofFwdDynReflectedInertiaDiag_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void RevWithRotors2DofFwdDynReflectedInertiaDiag_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void RevWithRotors2DofFwdDynReflectedInertiaDiag_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void RevWithRotors2DofFwdDynReflectedInertiaDiag_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int RevWithRotors2DofFwdDynReflectedInertiaDiag_n_in(void) { return 3;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int RevWithRotors2DofFwdDynReflectedInertiaDiag_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real RevWithRotors2DofFwdDynReflectedInertiaDiag_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* RevWithRotors2DofFwdDynReflectedInertiaDiag_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* RevWithRotors2DofFwdDynReflectedInertiaDiag_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* RevWithRotors2DofFwdDynReflectedInertiaDiag_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* RevWithRotors2DofFwdDynReflectedInertiaDiag_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors2DofFwdDynReflectedInertiaDiag_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


