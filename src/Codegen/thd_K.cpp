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
  #define CASADI_PREFIX(ID) thd_K_ ## ID
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
static const casadi_int casadi_s1[15] = {2, 4, 0, 2, 4, 6, 8, 0, 1, 0, 1, 0, 1, 0, 1};

/* thd_K:(i0[2],i1[2])->(o0[2x4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a3, a4, a5, a6, a7, a8, a9;
  a0=1.6000000000000001e-03;
  a1=8.;
  a2=arg[0]? arg[0][1] : 0;
  a3=6.;
  a2=(a2/a3);
  a4=cos(a2);
  a4=(a1*a4);
  a5=arg[1]? arg[1][1] : 0;
  a6=sin(a5);
  a4=(a4*a6);
  a4=(a0*a4);
  a6=4.0000000000000002e-04;
  a7=57.;
  a8=arg[1]? arg[1][0] : 0;
  a9=cos(a8);
  a9=(a7*a9);
  a10=cos(a5);
  a9=(a9*a10);
  a9=(a6*a9);
  a4=(a4-a9);
  a9=7.;
  a10=sin(a8);
  a10=(a9*a10);
  a11=cos(a5);
  a10=(a10*a11);
  a10=(a0*a10);
  a4=(a4-a10);
  a10=cos(a8);
  a10=(a1*a10);
  a11=sin(a2);
  a12=(a10*a11);
  a13=cos(a5);
  a12=(a12*a13);
  a12=(a0*a12);
  a4=(a4-a12);
  a12=2.0000000000000001e-04;
  a13=49.;
  a14=sin(a8);
  a14=(a13*a14);
  a14=(a12*a14);
  a15=5.0000000000000002e-05;
  a16=399.;
  a17=cos(a8);
  a17=(a16*a17);
  a17=(a15*a17);
  a14=(a14-a17);
  a17=sin(a5);
  a18=sin(a8);
  a18=(a7*a18);
  a17=(a17*a18);
  a17=(a6*a17);
  a14=(a14+a17);
  a17=arg[0]? arg[0][0] : 0;
  a17=(a17/a3);
  a3=sin(a17);
  a3=(a9*a3);
  a18=cos(a8);
  a3=(a3*a18);
  a3=(a0*a3);
  a14=(a14-a3);
  a3=sin(a5);
  a18=cos(a8);
  a18=(a9*a18);
  a3=(a3*a18);
  a3=(a0*a3);
  a14=(a14+a3);
  a3=sin(a5);
  a18=sin(a17);
  a19=sin(a8);
  a19=(a1*a19);
  a19=(a18*a19);
  a19=(a3*a19);
  a19=(a0*a19);
  a14=(a14+a19);
  a19=(a14*a4);
  a20=cos(a17);
  a20=(a1*a20);
  a21=sin(a5);
  a20=(a20*a21);
  a20=(a0*a20);
  a21=cos(a8);
  a21=(a7*a21);
  a22=cos(a5);
  a21=(a21*a22);
  a21=(a6*a21);
  a20=(a20-a21);
  a21=sin(a8);
  a21=(a9*a21);
  a22=cos(a5);
  a21=(a21*a22);
  a21=(a0*a21);
  a20=(a20+a21);
  a21=cos(a8);
  a21=(a1*a21);
  a18=(a21*a18);
  a22=cos(a5);
  a18=(a18*a22);
  a18=(a0*a18);
  a20=(a20-a18);
  a18=sin(a8);
  a13=(a13*a18);
  a12=(a12*a13);
  a13=cos(a8);
  a16=(a16*a13);
  a15=(a15*a16);
  a12=(a12+a15);
  a15=sin(a5);
  a16=sin(a8);
  a16=(a7*a16);
  a15=(a15*a16);
  a15=(a6*a15);
  a12=(a12+a15);
  a15=sin(a2);
  a15=(a9*a15);
  a16=cos(a8);
  a15=(a15*a16);
  a15=(a0*a15);
  a12=(a12+a15);
  a15=sin(a5);
  a16=cos(a8);
  a16=(a9*a16);
  a15=(a15*a16);
  a15=(a0*a15);
  a12=(a12-a15);
  a15=sin(a5);
  a16=sin(a8);
  a16=(a1*a16);
  a11=(a11*a16);
  a11=(a15*a11);
  a11=(a0*a11);
  a12=(a12+a11);
  a11=(a20*a12);
  a19=(a19-a11);
  a4=(a4/a19);
  a11=1.6666666666666666e-01;
  a16=cos(a17);
  a16=(a11*a16);
  a16=(a7*a16);
  a16=(a6*a16);
  a13=cos(a5);
  a18=sin(a17);
  a18=(a11*a18);
  a18=(a1*a18);
  a13=(a13*a18);
  a13=(a0*a13);
  a16=(a16+a13);
  a13=sin(a8);
  a18=cos(a17);
  a18=(a11*a18);
  a18=(a9*a18);
  a13=(a13*a18);
  a13=(a0*a13);
  a16=(a16-a13);
  a17=cos(a17);
  a17=(a11*a17);
  a21=(a21*a17);
  a3=(a3*a21);
  a3=(a0*a3);
  a16=(a16-a3);
  a4=(a4*a16);
  if (res[0]!=0) res[0][0]=a4;
  a12=(a12/a19);
  a12=(a12*a16);
  a12=(-a12);
  if (res[0]!=0) res[0][1]=a12;
  a20=(a20/a19);
  a12=cos(a2);
  a12=(a11*a12);
  a7=(a7*a12);
  a6=(a6*a7);
  a5=cos(a5);
  a7=sin(a2);
  a7=(a11*a7);
  a1=(a1*a7);
  a5=(a5*a1);
  a5=(a0*a5);
  a6=(a6+a5);
  a8=sin(a8);
  a5=cos(a2);
  a5=(a11*a5);
  a9=(a9*a5);
  a8=(a8*a9);
  a8=(a0*a8);
  a6=(a6+a8);
  a2=cos(a2);
  a11=(a11*a2);
  a10=(a10*a11);
  a15=(a15*a10);
  a0=(a0*a15);
  a6=(a6-a0);
  a20=(a20*a6);
  a20=(-a20);
  if (res[0]!=0) res[0][2]=a20;
  a14=(a14/a19);
  a14=(a14*a6);
  if (res[0]!=0) res[0][3]=a14;
  a14=1.;
  if (res[0]!=0) res[0][4]=a14;
  a6=0.;
  if (res[0]!=0) res[0][5]=a6;
  if (res[0]!=0) res[0][6]=a6;
  if (res[0]!=0) res[0][7]=a14;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int thd_K(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int thd_K_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int thd_K_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void thd_K_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int thd_K_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void thd_K_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void thd_K_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void thd_K_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int thd_K_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int thd_K_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real thd_K_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* thd_K_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* thd_K_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* thd_K_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* thd_K_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int thd_K_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


