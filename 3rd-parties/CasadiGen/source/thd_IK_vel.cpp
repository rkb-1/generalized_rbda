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
  #define CASADI_PREFIX(ID) thd_IK_vel_ ## ID
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

/* thd_IK_vel:(i0[2],i1[2])->(o0[2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a4, a5, a6, a7, a8, a9;
  a0=6.;
  a1=2.2800000000000001e-02;
  a2=8.;
  a3=arg[0]? arg[0][0] : 0;
  a4=cos(a3);
  a4=(a2*a4);
  a5=arg[0]? arg[0][1] : 0;
  a6=sin(a5);
  a7=(a4*a6);
  a8=625.;
  a7=(a7/a8);
  a7=(a1-a7);
  a9=7.;
  a10=sin(a3);
  a10=(a9*a10);
  a10=(a10/a8);
  a7=(a7-a10);
  a10=casadi_sq(a7);
  a11=cos(a5);
  a11=(a2*a11);
  a11=(a11/a8);
  a12=casadi_sq(a11);
  a10=(a10+a12);
  a12=49.;
  a13=cos(a3);
  a13=(a12*a13);
  a14=5000.;
  a13=(a13/a14);
  a15=399.;
  a16=sin(a3);
  a16=(a15*a16);
  a17=20000.;
  a16=(a16/a17);
  a13=(a13+a16);
  a16=57.;
  a18=cos(a3);
  a18=(a16*a18);
  a19=sin(a5);
  a20=(a18*a19);
  a21=2500.;
  a20=(a20/a21);
  a13=(a13+a20);
  a20=sin(a3);
  a20=(a9*a20);
  a22=sin(a5);
  a23=(a20*a22);
  a23=(a23/a8);
  a13=(a13-a23);
  a23=1.8881249999999999e-02;
  a13=(a13-a23);
  a24=casadi_sq(a13);
  a10=(a10-a24);
  a10=sqrt(a10);
  a24=(a7*a10);
  a25=(a11*a13);
  a24=(a24-a25);
  a25=(a11*a10);
  a26=(a7*a13);
  a25=(a25+a26);
  a26=casadi_sq(a25);
  a27=casadi_sq(a24);
  a26=(a26+a27);
  a24=(a24/a26);
  a27=5.0000000000000002e-05;
  a28=cos(a3);
  a29=arg[1]? arg[1][0] : 0;
  a28=(a28*a29);
  a28=(a15*a28);
  a28=(a27*a28);
  a30=2.0000000000000001e-04;
  a31=sin(a3);
  a31=(a31*a29);
  a31=(a12*a31);
  a31=(a30*a31);
  a28=(a28-a31);
  a31=4.0000000000000002e-04;
  a32=cos(a5);
  a33=arg[1]? arg[1][1] : 0;
  a32=(a32*a33);
  a18=(a18*a32);
  a32=sin(a3);
  a32=(a32*a29);
  a32=(a16*a32);
  a19=(a19*a32);
  a18=(a18-a19);
  a18=(a31*a18);
  a28=(a28+a18);
  a18=1.6000000000000001e-03;
  a19=cos(a3);
  a19=(a19*a29);
  a19=(a9*a19);
  a22=(a22*a19);
  a19=cos(a5);
  a19=(a19*a33);
  a20=(a20*a19);
  a22=(a22+a20);
  a22=(a18*a22);
  a28=(a28-a22);
  a22=(a7*a28);
  a20=cos(a5);
  a20=(a20*a33);
  a4=(a4*a20);
  a20=sin(a3);
  a20=(a20*a29);
  a20=(a2*a20);
  a6=(a6*a20);
  a4=(a4-a6);
  a4=(a18*a4);
  a6=cos(a3);
  a6=(a6*a29);
  a6=(a9*a6);
  a6=(a18*a6);
  a4=(a4+a6);
  a6=(a13*a4);
  a22=(a22-a6);
  a6=sin(a5);
  a6=(a6*a33);
  a6=(a2*a6);
  a6=(a18*a6);
  a20=(a10*a6);
  a19=(a7+a7);
  a19=(a19*a4);
  a32=(a11+a11);
  a32=(a32*a6);
  a19=(a19+a32);
  a32=(a13+a13);
  a32=(a32*a28);
  a19=(a19+a32);
  a32=(a10+a10);
  a19=(a19/a32);
  a32=(a11*a19);
  a20=(a20+a32);
  a22=(a22-a20);
  a24=(a24*a22);
  a25=(a25/a26);
  a10=(a10*a4);
  a7=(a7*a19);
  a10=(a10+a7);
  a11=(a11*a28);
  a13=(a13*a6);
  a11=(a11-a13);
  a10=(a10+a11);
  a25=(a25*a10);
  a24=(a24+a25);
  a24=(a0*a24);
  if (res[0]!=0) res[0][0]=a24;
  a24=sin(a3);
  a24=(a9*a24);
  a24=(a24/a8);
  a25=cos(a3);
  a25=(a2*a25);
  a10=sin(a5);
  a11=(a25*a10);
  a11=(a11/a8);
  a24=(a24-a11);
  a24=(a24+a1);
  a1=casadi_sq(a24);
  a11=cos(a5);
  a11=(a2*a11);
  a11=(a11/a8);
  a13=casadi_sq(a11);
  a1=(a1+a13);
  a13=cos(a3);
  a13=(a12*a13);
  a13=(a13/a14);
  a14=sin(a3);
  a14=(a15*a14);
  a14=(a14/a17);
  a13=(a13-a14);
  a14=cos(a3);
  a14=(a16*a14);
  a17=sin(a5);
  a6=(a14*a17);
  a6=(a6/a21);
  a13=(a13+a6);
  a6=sin(a3);
  a6=(a9*a6);
  a21=sin(a5);
  a28=(a6*a21);
  a28=(a28/a8);
  a13=(a13+a28);
  a13=(a13-a23);
  a23=casadi_sq(a13);
  a1=(a1-a23);
  a1=sqrt(a1);
  a23=(a24*a1);
  a28=(a11*a13);
  a23=(a23-a28);
  a28=(a11*a1);
  a8=(a24*a13);
  a28=(a28+a8);
  a8=casadi_sq(a28);
  a7=casadi_sq(a23);
  a8=(a8+a7);
  a23=(a23/a8);
  a7=(a24+a24);
  a19=cos(a3);
  a19=(a19*a29);
  a19=(a9*a19);
  a19=(a18*a19);
  a4=cos(a5);
  a4=(a4*a33);
  a25=(a25*a4);
  a4=sin(a3);
  a4=(a4*a29);
  a4=(a2*a4);
  a10=(a10*a4);
  a25=(a25-a10);
  a25=(a18*a25);
  a19=(a19-a25);
  a7=(a7*a19);
  a25=(a11+a11);
  a10=sin(a5);
  a10=(a10*a33);
  a2=(a2*a10);
  a2=(a18*a2);
  a25=(a25*a2);
  a7=(a7-a25);
  a25=(a13+a13);
  a10=cos(a5);
  a10=(a10*a33);
  a14=(a14*a10);
  a10=sin(a3);
  a10=(a10*a29);
  a16=(a16*a10);
  a17=(a17*a16);
  a14=(a14-a17);
  a31=(a31*a14);
  a14=sin(a3);
  a14=(a14*a29);
  a12=(a12*a14);
  a30=(a30*a12);
  a12=cos(a3);
  a12=(a12*a29);
  a15=(a15*a12);
  a27=(a27*a15);
  a30=(a30+a27);
  a31=(a31-a30);
  a3=cos(a3);
  a3=(a3*a29);
  a9=(a9*a3);
  a21=(a21*a9);
  a5=cos(a5);
  a5=(a5*a33);
  a6=(a6*a5);
  a21=(a21+a6);
  a18=(a18*a21);
  a31=(a31+a18);
  a25=(a25*a31);
  a7=(a7-a25);
  a25=(a1+a1);
  a7=(a7/a25);
  a25=(a11*a7);
  a18=(a1*a2);
  a25=(a25-a18);
  a18=(a13*a19);
  a21=(a24*a31);
  a18=(a18+a21);
  a25=(a25+a18);
  a23=(a23*a25);
  a28=(a28/a8);
  a1=(a1*a19);
  a24=(a24*a7);
  a1=(a1+a24);
  a11=(a11*a31);
  a13=(a13*a2);
  a11=(a11-a13);
  a1=(a1-a11);
  a28=(a28*a1);
  a23=(a23-a28);
  a0=(a0*a23);
  if (res[0]!=0) res[0][1]=a0;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int thd_IK_vel(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int thd_IK_vel_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int thd_IK_vel_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void thd_IK_vel_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int thd_IK_vel_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void thd_IK_vel_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void thd_IK_vel_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void thd_IK_vel_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int thd_IK_vel_n_in(void) { return 2;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int thd_IK_vel_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real thd_IK_vel_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* thd_IK_vel_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* thd_IK_vel_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* thd_IK_vel_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* thd_IK_vel_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int thd_IK_vel_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


