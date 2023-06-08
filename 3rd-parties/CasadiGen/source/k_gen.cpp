/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) k_gen_ ## ID
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

/* k_gen:(i0[2],i1[2],i2[2],i3[2])->(o0[2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a7, a8, a9;
  a0=arg[2]? arg[2][0] : 0;
  a1=57.;
  a2=arg[0]? arg[0][0] : 0;
  a3=cos(a2);
  a3=(a1*a3);
  a4=2500.;
  a3=(a3/a4);
  a5=7.;
  a6=cos(a2);
  a6=(a5*a6);
  a7=arg[1]? arg[1][0] : 0;
  a8=sin(a7);
  a9=(a6*a8);
  a10=625.;
  a9=(a9/a10);
  a3=(a3-a9);
  a9=8.;
  a11=arg[1]? arg[1][1] : 0;
  a12=cos(a11);
  a12=(a9*a12);
  a13=sin(a2);
  a14=(a12*a13);
  a14=(a14/a10);
  a3=(a3+a14);
  a14=cos(a2);
  a14=(a9*a14);
  a15=cos(a7);
  a16=(a14*a15);
  a17=sin(a11);
  a18=(a16*a17);
  a18=(a18/a10);
  a3=(a3-a18);
  a18=1.6000000000000001e-03;
  a19=arg[0]? arg[0][1] : 0;
  a20=cos(a19);
  a20=(a9*a20);
  a21=cos(a11);
  a22=arg[3]? arg[3][1] : 0;
  a21=(a21*a22);
  a21=(a20*a21);
  a23=sin(a11);
  a24=sin(a19);
  a25=arg[2]? arg[2][1] : 0;
  a24=(a24*a25);
  a24=(a9*a24);
  a24=(a23*a24);
  a21=(a21-a24);
  a21=(a18*a21);
  a24=4.0000000000000002e-04;
  a26=cos(a11);
  a27=sin(a7);
  a28=arg[3]? arg[3][0] : 0;
  a27=(a27*a28);
  a27=(a1*a27);
  a27=(a26*a27);
  a29=cos(a7);
  a29=(a1*a29);
  a30=sin(a11);
  a30=(a30*a22);
  a30=(a29*a30);
  a27=(a27+a30);
  a27=(a24*a27);
  a21=(a21+a27);
  a27=cos(a11);
  a27=(a5*a27);
  a30=cos(a7);
  a30=(a30*a28);
  a30=(a27*a30);
  a31=sin(a7);
  a32=sin(a11);
  a32=(a32*a22);
  a32=(a5*a32);
  a32=(a31*a32);
  a30=(a30-a32);
  a30=(a18*a30);
  a21=(a21-a30);
  a30=cos(a7);
  a30=(a9*a30);
  a32=cos(a11);
  a33=(a30*a32);
  a34=cos(a19);
  a34=(a34*a25);
  a34=(a33*a34);
  a35=sin(a19);
  a36=sin(a7);
  a36=(a36*a28);
  a36=(a9*a36);
  a32=(a32*a36);
  a36=sin(a11);
  a36=(a36*a22);
  a30=(a30*a36);
  a32=(a32+a30);
  a32=(a35*a32);
  a34=(a34-a32);
  a34=(a18*a34);
  a21=(a21-a34);
  a34=49.;
  a32=sin(a7);
  a32=(a34*a32);
  a30=5000.;
  a32=(a32/a30);
  a36=399.;
  a37=cos(a7);
  a37=(a36*a37);
  a38=20000.;
  a37=(a37/a38);
  a32=(a32-a37);
  a37=cos(a7);
  a37=(a5*a37);
  a39=sin(a2);
  a40=(a37*a39);
  a40=(a40/a10);
  a32=(a32-a40);
  a40=cos(a7);
  a40=(a5*a40);
  a41=sin(a11);
  a42=(a40*a41);
  a42=(a42/a10);
  a32=(a32+a42);
  a42=sin(a7);
  a42=(a1*a42);
  a43=sin(a11);
  a44=(a42*a43);
  a44=(a44/a4);
  a32=(a32+a44);
  a44=sin(a2);
  a44=(a9*a44);
  a45=sin(a7);
  a46=(a44*a45);
  a47=sin(a11);
  a48=(a46*a47);
  a48=(a48/a10);
  a32=(a32+a48);
  a20=(a20*a23);
  a20=(a20/a10);
  a29=(a29*a26);
  a29=(a29/a4);
  a20=(a20-a29);
  a27=(a27*a31);
  a27=(a27/a10);
  a20=(a20-a27);
  a33=(a33*a35);
  a33=(a33/a10);
  a20=(a20-a33);
  a33=(a32*a20);
  a35=cos(a2);
  a35=(a9*a35);
  a27=sin(a11);
  a31=(a35*a27);
  a31=(a31/a10);
  a29=cos(a7);
  a29=(a1*a29);
  a26=cos(a11);
  a23=(a29*a26);
  a23=(a23/a4);
  a31=(a31-a23);
  a23=cos(a11);
  a23=(a5*a23);
  a48=sin(a7);
  a49=(a23*a48);
  a49=(a49/a10);
  a31=(a31+a49);
  a49=cos(a7);
  a49=(a9*a49);
  a50=cos(a11);
  a51=(a49*a50);
  a52=sin(a2);
  a53=(a51*a52);
  a53=(a53/a10);
  a31=(a31-a53);
  a53=cos(a7);
  a53=(a36*a53);
  a53=(a53/a38);
  a38=sin(a7);
  a38=(a34*a38);
  a38=(a38/a30);
  a53=(a53+a38);
  a38=cos(a7);
  a38=(a5*a38);
  a30=sin(a19);
  a54=(a38*a30);
  a54=(a54/a10);
  a53=(a53+a54);
  a54=cos(a7);
  a54=(a5*a54);
  a55=sin(a11);
  a56=(a54*a55);
  a56=(a56/a10);
  a53=(a53-a56);
  a56=sin(a7);
  a56=(a1*a56);
  a57=sin(a11);
  a58=(a56*a57);
  a58=(a58/a4);
  a53=(a53+a58);
  a58=sin(a19);
  a58=(a9*a58);
  a59=sin(a7);
  a60=(a58*a59);
  a61=sin(a11);
  a62=(a60*a61);
  a62=(a62/a10);
  a53=(a53+a62);
  a62=(a31*a53);
  a33=(a33-a62);
  a62=(a21/a33);
  a63=(a20/a33);
  a64=(a63/a33);
  a65=2.0000000000000001e-04;
  a66=cos(a7);
  a66=(a66*a28);
  a66=(a34*a66);
  a66=(a65*a66);
  a67=5.0000000000000002e-05;
  a68=sin(a7);
  a68=(a68*a28);
  a68=(a36*a68);
  a68=(a67*a68);
  a66=(a66+a68);
  a68=cos(a2);
  a68=(a68*a0);
  a37=(a37*a68);
  a68=sin(a7);
  a68=(a68*a28);
  a68=(a5*a68);
  a39=(a39*a68);
  a37=(a37-a39);
  a37=(a18*a37);
  a66=(a66-a37);
  a37=cos(a11);
  a37=(a37*a22);
  a40=(a40*a37);
  a37=sin(a7);
  a37=(a37*a28);
  a37=(a5*a37);
  a41=(a41*a37);
  a40=(a40-a41);
  a40=(a18*a40);
  a66=(a66+a40);
  a40=cos(a7);
  a40=(a40*a28);
  a40=(a1*a40);
  a43=(a43*a40);
  a40=cos(a11);
  a40=(a40*a22);
  a42=(a42*a40);
  a43=(a43+a42);
  a43=(a24*a43);
  a66=(a66+a43);
  a43=cos(a2);
  a43=(a43*a0);
  a43=(a9*a43);
  a45=(a45*a43);
  a43=cos(a7);
  a43=(a43*a28);
  a44=(a44*a43);
  a45=(a45+a44);
  a47=(a47*a45);
  a45=cos(a11);
  a45=(a45*a22);
  a46=(a46*a45);
  a47=(a47+a46);
  a47=(a18*a47);
  a66=(a66+a47);
  a20=(a20*a66);
  a21=(a32*a21);
  a20=(a20+a21);
  a21=cos(a11);
  a21=(a21*a22);
  a35=(a35*a21);
  a21=sin(a2);
  a21=(a21*a0);
  a21=(a9*a21);
  a27=(a27*a21);
  a35=(a35-a27);
  a35=(a18*a35);
  a27=sin(a7);
  a27=(a27*a28);
  a27=(a1*a27);
  a26=(a26*a27);
  a27=sin(a11);
  a27=(a27*a22);
  a29=(a29*a27);
  a26=(a26+a29);
  a26=(a24*a26);
  a35=(a35+a26);
  a26=cos(a7);
  a26=(a26*a28);
  a23=(a23*a26);
  a26=sin(a11);
  a26=(a26*a22);
  a26=(a5*a26);
  a48=(a48*a26);
  a23=(a23-a48);
  a23=(a18*a23);
  a35=(a35+a23);
  a23=cos(a2);
  a23=(a23*a0);
  a51=(a51*a23);
  a23=sin(a7);
  a23=(a23*a28);
  a23=(a9*a23);
  a50=(a50*a23);
  a23=sin(a11);
  a23=(a23*a22);
  a49=(a49*a23);
  a50=(a50+a49);
  a52=(a52*a50);
  a51=(a51-a52);
  a51=(a18*a51);
  a35=(a35-a51);
  a51=(a53*a35);
  a52=cos(a7);
  a52=(a52*a28);
  a34=(a34*a52);
  a65=(a65*a34);
  a34=sin(a7);
  a34=(a34*a28);
  a36=(a36*a34);
  a67=(a67*a36);
  a65=(a65-a67);
  a67=cos(a19);
  a67=(a67*a25);
  a38=(a38*a67);
  a67=sin(a7);
  a67=(a67*a28);
  a67=(a5*a67);
  a30=(a30*a67);
  a38=(a38-a30);
  a38=(a18*a38);
  a65=(a65+a38);
  a38=cos(a11);
  a38=(a38*a22);
  a54=(a54*a38);
  a38=sin(a7);
  a38=(a38*a28);
  a38=(a5*a38);
  a55=(a55*a38);
  a54=(a54-a55);
  a54=(a18*a54);
  a65=(a65-a54);
  a54=cos(a7);
  a54=(a54*a28);
  a54=(a1*a54);
  a57=(a57*a54);
  a54=cos(a11);
  a54=(a54*a22);
  a56=(a56*a54);
  a57=(a57+a56);
  a57=(a24*a57);
  a65=(a65+a57);
  a57=cos(a19);
  a57=(a57*a25);
  a57=(a9*a57);
  a59=(a59*a57);
  a57=cos(a7);
  a57=(a57*a28);
  a58=(a58*a57);
  a59=(a59+a58);
  a61=(a61*a59);
  a59=cos(a11);
  a59=(a59*a22);
  a60=(a60*a59);
  a61=(a61+a60);
  a61=(a18*a61);
  a65=(a65+a61);
  a61=(a31*a65);
  a51=(a51+a61);
  a20=(a20-a51);
  a64=(a64*a20);
  a62=(a62-a64);
  a62=(a3*a62);
  a64=cos(a2);
  a64=(a64*a0);
  a12=(a12*a64);
  a64=sin(a11);
  a64=(a64*a22);
  a64=(a9*a64);
  a13=(a13*a64);
  a12=(a12-a13);
  a12=(a18*a12);
  a13=sin(a2);
  a13=(a13*a0);
  a13=(a1*a13);
  a13=(a24*a13);
  a64=cos(a7);
  a64=(a64*a28);
  a6=(a6*a64);
  a64=sin(a2);
  a64=(a64*a0);
  a64=(a5*a64);
  a8=(a8*a64);
  a6=(a6-a8);
  a6=(a18*a6);
  a13=(a13+a6);
  a12=(a12-a13);
  a13=cos(a11);
  a13=(a13*a22);
  a16=(a16*a13);
  a2=sin(a2);
  a2=(a2*a0);
  a2=(a9*a2);
  a15=(a15*a2);
  a2=sin(a7);
  a2=(a2*a28);
  a14=(a14*a2);
  a15=(a15+a14);
  a17=(a17*a15);
  a16=(a16-a17);
  a16=(a18*a16);
  a12=(a12-a16);
  a63=(a63*a12);
  a62=(a62+a63);
  a62=(a0*a62);
  a63=cos(a19);
  a63=(a1*a63);
  a63=(a63/a4);
  a4=cos(a19);
  a4=(a5*a4);
  a16=sin(a7);
  a17=(a4*a16);
  a17=(a17/a10);
  a63=(a63+a17);
  a17=cos(a11);
  a17=(a9*a17);
  a15=sin(a19);
  a14=(a17*a15);
  a14=(a14/a10);
  a63=(a63+a14);
  a14=cos(a19);
  a14=(a9*a14);
  a2=cos(a7);
  a13=(a14*a2);
  a6=sin(a11);
  a8=(a13*a6);
  a8=(a8/a10);
  a63=(a63-a8);
  a35=(a35/a33);
  a31=(a31/a33);
  a8=(a31/a33);
  a8=(a8*a20);
  a35=(a35-a8);
  a35=(a63*a35);
  a8=cos(a7);
  a8=(a8*a28);
  a4=(a4*a8);
  a8=sin(a19);
  a8=(a8*a25);
  a5=(a5*a8);
  a16=(a16*a5);
  a4=(a4-a16);
  a4=(a18*a4);
  a16=sin(a19);
  a16=(a16*a25);
  a1=(a1*a16);
  a24=(a24*a1);
  a4=(a4-a24);
  a24=cos(a19);
  a24=(a24*a25);
  a17=(a17*a24);
  a24=sin(a11);
  a24=(a24*a22);
  a24=(a9*a24);
  a15=(a15*a24);
  a17=(a17-a15);
  a17=(a18*a17);
  a4=(a4+a17);
  a11=cos(a11);
  a11=(a11*a22);
  a13=(a13*a11);
  a19=sin(a19);
  a19=(a19*a25);
  a9=(a9*a19);
  a2=(a2*a9);
  a7=sin(a7);
  a7=(a7*a28);
  a14=(a14*a7);
  a2=(a2+a14);
  a6=(a6*a2);
  a13=(a13-a6);
  a18=(a18*a13);
  a4=(a4-a18);
  a31=(a31*a4);
  a35=(a35+a31);
  a35=(a25*a35);
  a62=(a62-a35);
  a62=(-a62);
  if (res[0]!=0) res[0][0]=a62;
  a66=(a66/a33);
  a32=(a32/a33);
  a62=(a32/a33);
  a62=(a62*a20);
  a66=(a66-a62);
  a63=(a63*a66);
  a32=(a32*a4);
  a63=(a63+a32);
  a25=(a25*a63);
  a65=(a65/a33);
  a53=(a53/a33);
  a33=(a53/a33);
  a33=(a33*a20);
  a65=(a65-a33);
  a3=(a3*a65);
  a53=(a53*a12);
  a3=(a3+a53);
  a0=(a0*a3);
  a25=(a25-a0);
  a25=(-a25);
  if (res[0]!=0) res[0][1]=a25;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int k_gen(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int k_gen_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int k_gen_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void k_gen_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int k_gen_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void k_gen_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void k_gen_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void k_gen_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int k_gen_n_in(void) { return 4;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int k_gen_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real k_gen_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* k_gen_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* k_gen_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* k_gen_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    case 3: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* k_gen_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int k_gen_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


