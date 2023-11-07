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
  #define CASADI_PREFIX(ID) thd_small_k_ ## ID
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

/* thd_small_k:(i0[2],i1[2],i2[2],i3[2])->(o0[2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a7, a8, a9;
  a0=arg[2]? arg[2][0] : 0;
  a1=4.0000000000000002e-04;
  a2=57.;
  a3=1.6666666666666666e-01;
  a4=arg[0]? arg[0][0] : 0;
  a5=6.;
  a4=(a4/a5);
  a6=cos(a4);
  a6=(a3*a6);
  a6=(a2*a6);
  a6=(a1*a6);
  a7=1.6000000000000001e-03;
  a8=arg[1]? arg[1][1] : 0;
  a9=cos(a8);
  a10=8.;
  a11=sin(a4);
  a11=(a3*a11);
  a11=(a10*a11);
  a12=(a9*a11);
  a12=(a7*a12);
  a6=(a6+a12);
  a12=arg[1]? arg[1][0] : 0;
  a13=sin(a12);
  a14=7.;
  a15=cos(a4);
  a15=(a3*a15);
  a15=(a14*a15);
  a16=(a13*a15);
  a16=(a7*a16);
  a6=(a6-a16);
  a16=sin(a8);
  a17=cos(a12);
  a17=(a10*a17);
  a18=cos(a4);
  a18=(a3*a18);
  a19=(a17*a18);
  a20=(a16*a19);
  a20=(a7*a20);
  a6=(a6-a20);
  a20=arg[0]? arg[0][1] : 0;
  a20=(a20/a5);
  a5=cos(a20);
  a5=(a10*a5);
  a21=cos(a8);
  a22=arg[3]? arg[3][1] : 0;
  a21=(a21*a22);
  a21=(a5*a21);
  a23=sin(a8);
  a24=sin(a20);
  a25=arg[2]? arg[2][1] : 0;
  a26=(a3*a25);
  a24=(a24*a26);
  a24=(a10*a24);
  a24=(a23*a24);
  a21=(a21-a24);
  a21=(a7*a21);
  a24=cos(a8);
  a27=sin(a12);
  a28=arg[3]? arg[3][0] : 0;
  a27=(a27*a28);
  a27=(a2*a27);
  a27=(a24*a27);
  a29=cos(a12);
  a29=(a2*a29);
  a30=sin(a8);
  a30=(a30*a22);
  a30=(a29*a30);
  a27=(a27+a30);
  a27=(a1*a27);
  a21=(a21+a27);
  a27=cos(a8);
  a30=cos(a12);
  a30=(a30*a28);
  a30=(a14*a30);
  a30=(a27*a30);
  a31=sin(a12);
  a31=(a14*a31);
  a32=sin(a8);
  a32=(a32*a22);
  a32=(a31*a32);
  a30=(a30-a32);
  a30=(a7*a30);
  a21=(a21-a30);
  a30=cos(a8);
  a32=cos(a12);
  a32=(a10*a32);
  a33=cos(a20);
  a33=(a33*a26);
  a34=(a32*a33);
  a35=sin(a20);
  a36=sin(a12);
  a36=(a36*a28);
  a36=(a10*a36);
  a37=(a35*a36);
  a34=(a34-a37);
  a34=(a30*a34);
  a37=(a32*a35);
  a38=sin(a8);
  a38=(a38*a22);
  a38=(a37*a38);
  a34=(a34-a38);
  a34=(a7*a34);
  a21=(a21-a34);
  a34=2.0000000000000001e-04;
  a38=49.;
  a39=sin(a12);
  a39=(a38*a39);
  a39=(a34*a39);
  a40=5.0000000000000002e-05;
  a41=399.;
  a42=cos(a12);
  a42=(a41*a42);
  a42=(a40*a42);
  a39=(a39-a42);
  a42=sin(a8);
  a43=sin(a12);
  a43=(a2*a43);
  a44=(a42*a43);
  a44=(a1*a44);
  a39=(a39+a44);
  a44=sin(a4);
  a44=(a14*a44);
  a45=cos(a12);
  a46=(a44*a45);
  a46=(a7*a46);
  a39=(a39-a46);
  a46=sin(a8);
  a47=cos(a12);
  a47=(a14*a47);
  a48=(a46*a47);
  a48=(a7*a48);
  a39=(a39+a48);
  a48=sin(a4);
  a49=sin(a12);
  a49=(a10*a49);
  a50=(a48*a49);
  a51=(a16*a50);
  a51=(a7*a51);
  a39=(a39+a51);
  a5=(a5*a23);
  a5=(a7*a5);
  a29=(a29*a24);
  a29=(a1*a29);
  a5=(a5-a29);
  a31=(a31*a27);
  a31=(a7*a31);
  a5=(a5-a31);
  a37=(a37*a30);
  a37=(a7*a37);
  a5=(a5-a37);
  a37=(a39*a5);
  a30=cos(a4);
  a30=(a10*a30);
  a31=sin(a8);
  a27=(a30*a31);
  a27=(a7*a27);
  a29=cos(a12);
  a29=(a2*a29);
  a24=cos(a8);
  a23=(a29*a24);
  a23=(a1*a23);
  a27=(a27-a23);
  a23=sin(a12);
  a23=(a14*a23);
  a51=cos(a8);
  a52=(a23*a51);
  a52=(a7*a52);
  a27=(a27+a52);
  a52=(a17*a48);
  a53=cos(a8);
  a54=(a52*a53);
  a54=(a7*a54);
  a27=(a27-a54);
  a54=sin(a12);
  a54=(a38*a54);
  a54=(a34*a54);
  a55=cos(a12);
  a55=(a41*a55);
  a55=(a40*a55);
  a54=(a54+a55);
  a55=sin(a8);
  a56=sin(a12);
  a56=(a2*a56);
  a57=(a55*a56);
  a57=(a1*a57);
  a54=(a54+a57);
  a57=sin(a20);
  a57=(a14*a57);
  a58=cos(a12);
  a59=(a57*a58);
  a59=(a7*a59);
  a54=(a54+a59);
  a59=sin(a8);
  a60=cos(a12);
  a60=(a14*a60);
  a61=(a59*a60);
  a61=(a7*a61);
  a54=(a54-a61);
  a61=sin(a8);
  a62=sin(a12);
  a62=(a10*a62);
  a63=(a35*a62);
  a64=(a61*a63);
  a64=(a7*a64);
  a54=(a54+a64);
  a64=(a27*a54);
  a37=(a37-a64);
  a64=(a21/a37);
  a65=(a5/a37);
  a66=(a65/a37);
  a67=cos(a12);
  a67=(a67*a28);
  a67=(a38*a67);
  a67=(a34*a67);
  a68=sin(a12);
  a68=(a68*a28);
  a68=(a41*a68);
  a68=(a40*a68);
  a67=(a67+a68);
  a68=cos(a8);
  a68=(a68*a22);
  a43=(a43*a68);
  a68=cos(a12);
  a68=(a68*a28);
  a68=(a2*a68);
  a42=(a42*a68);
  a43=(a43+a42);
  a43=(a1*a43);
  a67=(a67+a43);
  a43=cos(a4);
  a42=(a3*a0);
  a43=(a43*a42);
  a43=(a14*a43);
  a45=(a45*a43);
  a43=sin(a12);
  a43=(a43*a28);
  a44=(a44*a43);
  a45=(a45-a44);
  a45=(a7*a45);
  a67=(a67-a45);
  a45=cos(a8);
  a45=(a45*a22);
  a47=(a47*a45);
  a45=sin(a12);
  a45=(a45*a28);
  a45=(a14*a45);
  a46=(a46*a45);
  a47=(a47-a46);
  a47=(a7*a47);
  a67=(a67+a47);
  a47=cos(a8);
  a47=(a47*a22);
  a50=(a50*a47);
  a46=cos(a4);
  a46=(a46*a42);
  a49=(a49*a46);
  a45=cos(a12);
  a45=(a45*a28);
  a45=(a10*a45);
  a45=(a48*a45);
  a49=(a49+a45);
  a49=(a16*a49);
  a50=(a50+a49);
  a50=(a7*a50);
  a67=(a67+a50);
  a5=(a5*a67);
  a21=(a39*a21);
  a5=(a5+a21);
  a21=cos(a8);
  a21=(a21*a22);
  a30=(a30*a21);
  a21=sin(a4);
  a21=(a21*a42);
  a21=(a10*a21);
  a31=(a31*a21);
  a30=(a30-a31);
  a30=(a7*a30);
  a31=sin(a12);
  a31=(a31*a28);
  a31=(a2*a31);
  a24=(a24*a31);
  a31=sin(a8);
  a31=(a31*a22);
  a29=(a29*a31);
  a24=(a24+a29);
  a24=(a1*a24);
  a30=(a30+a24);
  a24=cos(a12);
  a24=(a24*a28);
  a24=(a14*a24);
  a51=(a51*a24);
  a24=sin(a8);
  a24=(a24*a22);
  a23=(a23*a24);
  a51=(a51-a23);
  a51=(a7*a51);
  a30=(a30+a51);
  a46=(a17*a46);
  a51=sin(a12);
  a51=(a51*a28);
  a51=(a10*a51);
  a48=(a48*a51);
  a46=(a46-a48);
  a53=(a53*a46);
  a46=sin(a8);
  a46=(a46*a22);
  a52=(a52*a46);
  a53=(a53-a52);
  a53=(a7*a53);
  a30=(a30-a53);
  a53=(a54*a30);
  a52=cos(a12);
  a52=(a52*a28);
  a38=(a38*a52);
  a34=(a34*a38);
  a38=sin(a12);
  a38=(a38*a28);
  a41=(a41*a38);
  a40=(a40*a41);
  a34=(a34-a40);
  a40=cos(a8);
  a40=(a40*a22);
  a56=(a56*a40);
  a40=cos(a12);
  a40=(a40*a28);
  a40=(a2*a40);
  a55=(a55*a40);
  a56=(a56+a55);
  a56=(a1*a56);
  a34=(a34+a56);
  a56=cos(a20);
  a56=(a56*a26);
  a56=(a14*a56);
  a58=(a58*a56);
  a56=sin(a12);
  a56=(a56*a28);
  a57=(a57*a56);
  a58=(a58-a57);
  a58=(a7*a58);
  a34=(a34+a58);
  a58=cos(a8);
  a58=(a58*a22);
  a60=(a60*a58);
  a58=sin(a12);
  a58=(a58*a28);
  a58=(a14*a58);
  a59=(a59*a58);
  a60=(a60-a59);
  a60=(a7*a60);
  a34=(a34-a60);
  a60=cos(a8);
  a60=(a60*a22);
  a63=(a63*a60);
  a62=(a62*a33);
  a33=cos(a12);
  a33=(a33*a28);
  a33=(a10*a33);
  a35=(a35*a33);
  a62=(a62+a35);
  a62=(a61*a62);
  a63=(a63+a62);
  a63=(a7*a63);
  a34=(a34+a63);
  a63=(a27*a34);
  a53=(a53+a63);
  a5=(a5-a53);
  a66=(a66*a5);
  a64=(a64-a66);
  a64=(a6*a64);
  a66=cos(a4);
  a66=(a66*a42);
  a66=(a3*a66);
  a66=(a10*a66);
  a9=(a9*a66);
  a66=sin(a8);
  a66=(a66*a22);
  a11=(a11*a66);
  a9=(a9-a11);
  a9=(a7*a9);
  a11=sin(a4);
  a11=(a11*a42);
  a11=(a3*a11);
  a11=(a2*a11);
  a11=(a1*a11);
  a9=(a9-a11);
  a11=cos(a12);
  a11=(a11*a28);
  a15=(a15*a11);
  a11=sin(a4);
  a11=(a11*a42);
  a11=(a3*a11);
  a11=(a14*a11);
  a13=(a13*a11);
  a15=(a15-a13);
  a15=(a7*a15);
  a9=(a9-a15);
  a19=(a19*a47);
  a18=(a18*a51);
  a4=sin(a4);
  a4=(a4*a42);
  a4=(a3*a4);
  a17=(a17*a4);
  a18=(a18+a17);
  a16=(a16*a18);
  a19=(a19-a16);
  a19=(a7*a19);
  a9=(a9-a19);
  a65=(a65*a9);
  a64=(a64+a65);
  a64=(a0*a64);
  a65=cos(a20);
  a65=(a3*a65);
  a65=(a2*a65);
  a65=(a1*a65);
  a19=cos(a8);
  a16=sin(a20);
  a16=(a3*a16);
  a16=(a10*a16);
  a18=(a19*a16);
  a18=(a7*a18);
  a65=(a65+a18);
  a18=sin(a12);
  a17=cos(a20);
  a17=(a3*a17);
  a17=(a14*a17);
  a4=(a18*a17);
  a4=(a7*a4);
  a65=(a65+a4);
  a4=cos(a20);
  a4=(a3*a4);
  a42=(a32*a4);
  a51=(a61*a42);
  a51=(a7*a51);
  a65=(a65-a51);
  a30=(a30/a37);
  a27=(a27/a37);
  a51=(a27/a37);
  a51=(a51*a5);
  a30=(a30-a51);
  a30=(a65*a30);
  a51=cos(a20);
  a51=(a51*a26);
  a51=(a3*a51);
  a10=(a10*a51);
  a19=(a19*a10);
  a8=sin(a8);
  a8=(a8*a22);
  a16=(a16*a8);
  a19=(a19-a16);
  a19=(a7*a19);
  a16=sin(a20);
  a16=(a16*a26);
  a16=(a3*a16);
  a2=(a2*a16);
  a1=(a1*a2);
  a19=(a19-a1);
  a12=cos(a12);
  a12=(a12*a28);
  a17=(a17*a12);
  a12=sin(a20);
  a12=(a12*a26);
  a12=(a3*a12);
  a14=(a14*a12);
  a18=(a18*a14);
  a17=(a17-a18);
  a17=(a7*a17);
  a19=(a19+a17);
  a42=(a42*a60);
  a4=(a4*a36);
  a20=sin(a20);
  a20=(a20*a26);
  a3=(a3*a20);
  a32=(a32*a3);
  a4=(a4+a32);
  a61=(a61*a4);
  a42=(a42-a61);
  a7=(a7*a42);
  a19=(a19-a7);
  a27=(a27*a19);
  a30=(a30+a27);
  a30=(a25*a30);
  a64=(a64-a30);
  a64=(-a64);
  if (res[0]!=0) res[0][0]=a64;
  a67=(a67/a37);
  a39=(a39/a37);
  a64=(a39/a37);
  a64=(a64*a5);
  a67=(a67-a64);
  a65=(a65*a67);
  a39=(a39*a19);
  a65=(a65+a39);
  a25=(a25*a65);
  a34=(a34/a37);
  a54=(a54/a37);
  a37=(a54/a37);
  a37=(a37*a5);
  a34=(a34-a37);
  a6=(a6*a34);
  a54=(a54*a9);
  a6=(a6+a54);
  a0=(a0*a6);
  a25=(a25-a0);
  a25=(-a25);
  if (res[0]!=0) res[0][1]=a25;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int thd_small_k(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int thd_small_k_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int thd_small_k_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void thd_small_k_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int thd_small_k_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void thd_small_k_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void thd_small_k_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void thd_small_k_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int thd_small_k_n_in(void) { return 4;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int thd_small_k_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real thd_small_k_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* thd_small_k_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* thd_small_k_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* thd_small_k_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    case 3: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* thd_small_k_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int thd_small_k_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


