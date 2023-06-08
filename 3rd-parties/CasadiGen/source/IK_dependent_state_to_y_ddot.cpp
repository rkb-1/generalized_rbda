/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) IK_dependent_state_to_y_ddot_ ## ID
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

/* IK_dependent_state_to_y_ddot:(i0[2],i1[2],i2[2])->(o0[2]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a7, a8, a9;
  a0=2.2800000000000001e-02;
  a1=8.;
  a2=arg[0]? arg[0][0] : 0;
  a3=cos(a2);
  a3=(a1*a3);
  a4=arg[0]? arg[0][1] : 0;
  a5=sin(a4);
  a6=(a3*a5);
  a7=625.;
  a6=(a6/a7);
  a6=(a0-a6);
  a8=7.;
  a9=sin(a2);
  a9=(a8*a9);
  a9=(a9/a7);
  a6=(a6-a9);
  a9=casadi_sq(a6);
  a10=cos(a4);
  a10=(a1*a10);
  a10=(a10/a7);
  a11=casadi_sq(a10);
  a9=(a9+a11);
  a11=49.;
  a12=cos(a2);
  a12=(a11*a12);
  a13=5000.;
  a12=(a12/a13);
  a14=399.;
  a15=sin(a2);
  a15=(a14*a15);
  a16=20000.;
  a15=(a15/a16);
  a12=(a12+a15);
  a15=57.;
  a17=cos(a2);
  a17=(a15*a17);
  a18=sin(a4);
  a19=(a17*a18);
  a20=2500.;
  a19=(a19/a20);
  a12=(a12+a19);
  a19=sin(a2);
  a19=(a8*a19);
  a21=sin(a4);
  a22=(a19*a21);
  a22=(a22/a7);
  a12=(a12-a22);
  a22=1.8881249999999999e-02;
  a12=(a12-a22);
  a23=casadi_sq(a12);
  a9=(a9-a23);
  a9=sqrt(a9);
  a23=(a6*a9);
  a24=(a10*a12);
  a23=(a23-a24);
  a24=(a10*a9);
  a25=(a6*a12);
  a24=(a24+a25);
  a25=casadi_sq(a24);
  a26=casadi_sq(a23);
  a25=(a25+a26);
  a26=(a23/a25);
  a27=(a6+a6);
  a28=1.6000000000000001e-03;
  a29=sin(a2);
  a29=(a1*a29);
  a29=(a5*a29);
  a29=(a28*a29);
  a30=cos(a2);
  a30=(a8*a30);
  a30=(a28*a30);
  a29=(a29-a30);
  a30=(a27*a29);
  a31=(a12+a12);
  a32=5.0000000000000002e-05;
  a33=cos(a2);
  a33=(a14*a33);
  a33=(a32*a33);
  a34=2.0000000000000001e-04;
  a35=sin(a2);
  a35=(a11*a35);
  a35=(a34*a35);
  a33=(a33-a35);
  a35=4.0000000000000002e-04;
  a36=sin(a2);
  a36=(a15*a36);
  a36=(a18*a36);
  a36=(a35*a36);
  a33=(a33-a36);
  a36=cos(a2);
  a36=(a8*a36);
  a36=(a21*a36);
  a36=(a28*a36);
  a33=(a33-a36);
  a36=(a31*a33);
  a30=(a30-a36);
  a36=(a9+a9);
  a30=(a30/a36);
  a37=(a10*a30);
  a38=(a12*a29);
  a39=(a6*a33);
  a38=(a38+a39);
  a37=(a37+a38);
  a37=(a26*a37);
  a25=(a24/a25);
  a29=(a9*a29);
  a30=(a6*a30);
  a29=(a29+a30);
  a33=(a10*a33);
  a29=(a29-a33);
  a29=(a25*a29);
  a37=(a37-a29);
  a29=arg[2]? arg[2][0] : 0;
  a37=(a37*a29);
  a33=cos(a4);
  a33=(a17*a33);
  a33=(a35*a33);
  a30=cos(a4);
  a30=(a19*a30);
  a30=(a28*a30);
  a33=(a33-a30);
  a30=(a6*a33);
  a38=cos(a4);
  a38=(a3*a38);
  a38=(a28*a38);
  a39=(a12*a38);
  a30=(a30-a39);
  a39=sin(a4);
  a39=(a1*a39);
  a39=(a28*a39);
  a40=(a9*a39);
  a27=(a27*a38);
  a41=(a10+a10);
  a41=(a41*a39);
  a27=(a27+a41);
  a31=(a31*a33);
  a27=(a27+a31);
  a27=(a27/a36);
  a36=(a10*a27);
  a40=(a40+a36);
  a30=(a30-a40);
  a26=(a26*a30);
  a38=(a9*a38);
  a27=(a6*a27);
  a38=(a38+a27);
  a33=(a10*a33);
  a39=(a12*a39);
  a33=(a33-a39);
  a38=(a38+a33);
  a25=(a25*a38);
  a26=(a26+a25);
  a25=arg[2]? arg[2][1] : 0;
  a26=(a26*a25);
  a37=(a37+a26);
  a26=cos(a4);
  a38=arg[1]? arg[1][1] : 0;
  a26=(a26*a38);
  a33=(a3*a26);
  a39=sin(a2);
  a27=arg[1]? arg[1][0] : 0;
  a39=(a39*a27);
  a39=(a1*a39);
  a30=(a5*a39);
  a33=(a33-a30);
  a33=(a28*a33);
  a30=cos(a2);
  a30=(a30*a27);
  a30=(a8*a30);
  a30=(a28*a30);
  a33=(a33+a30);
  a30=(a9*a33);
  a40=(a6+a6);
  a36=(a40*a33);
  a31=(a10+a10);
  a41=sin(a4);
  a41=(a41*a38);
  a41=(a1*a41);
  a41=(a28*a41);
  a42=(a31*a41);
  a36=(a36+a42);
  a42=(a12+a12);
  a43=cos(a2);
  a43=(a43*a27);
  a43=(a14*a43);
  a43=(a32*a43);
  a44=sin(a2);
  a44=(a44*a27);
  a44=(a11*a44);
  a44=(a34*a44);
  a43=(a43-a44);
  a44=cos(a4);
  a44=(a44*a38);
  a45=(a17*a44);
  a46=sin(a2);
  a46=(a46*a27);
  a46=(a15*a46);
  a47=(a18*a46);
  a45=(a45-a47);
  a45=(a35*a45);
  a43=(a43+a45);
  a45=cos(a2);
  a45=(a45*a27);
  a45=(a8*a45);
  a47=(a21*a45);
  a48=cos(a4);
  a48=(a48*a38);
  a49=(a19*a48);
  a47=(a47+a49);
  a47=(a28*a47);
  a43=(a43-a47);
  a47=(a42*a43);
  a36=(a36+a47);
  a47=(a9+a9);
  a36=(a36/a47);
  a49=(a6*a36);
  a30=(a30+a49);
  a49=(a10*a43);
  a50=(a12*a41);
  a49=(a49-a50);
  a30=(a30+a49);
  a49=cos(a2);
  a49=(a49*a27);
  a49=(a14*a49);
  a49=(a32*a49);
  a50=sin(a2);
  a50=(a50*a27);
  a50=(a11*a50);
  a50=(a34*a50);
  a49=(a49-a50);
  a50=cos(a4);
  a50=(a50*a38);
  a51=(a17*a50);
  a52=sin(a2);
  a52=(a52*a27);
  a52=(a15*a52);
  a53=(a18*a52);
  a51=(a51-a53);
  a51=(a35*a51);
  a49=(a49+a51);
  a51=cos(a2);
  a51=(a51*a27);
  a51=(a8*a51);
  a53=(a21*a51);
  a54=cos(a4);
  a54=(a54*a38);
  a55=(a19*a54);
  a53=(a53+a55);
  a53=(a28*a53);
  a49=(a49-a53);
  a53=(a6*a49);
  a55=cos(a4);
  a55=(a55*a38);
  a56=(a3*a55);
  a57=sin(a2);
  a57=(a57*a27);
  a57=(a1*a57);
  a58=(a5*a57);
  a56=(a56-a58);
  a56=(a28*a56);
  a58=cos(a2);
  a58=(a58*a27);
  a58=(a8*a58);
  a58=(a28*a58);
  a56=(a56+a58);
  a58=(a12*a56);
  a53=(a53-a58);
  a58=sin(a4);
  a58=(a58*a38);
  a58=(a1*a58);
  a58=(a28*a58);
  a59=(a9*a58);
  a60=(a6+a6);
  a60=(a60*a56);
  a61=(a10+a10);
  a61=(a61*a58);
  a60=(a60+a61);
  a61=(a12+a12);
  a61=(a61*a49);
  a60=(a60+a61);
  a61=(a9+a9);
  a60=(a60/a61);
  a61=(a10*a60);
  a59=(a59+a61);
  a53=(a53-a59);
  a59=casadi_sq(a24);
  a61=casadi_sq(a23);
  a59=(a59+a61);
  a61=(a53/a59);
  a62=(a24/a59);
  a63=(a62/a59);
  a24=(a24+a24);
  a24=(a24*a53);
  a53=(a23+a23);
  a64=(a9*a56);
  a65=(a6*a60);
  a64=(a64+a65);
  a65=(a10*a49);
  a66=(a12*a58);
  a65=(a65-a66);
  a64=(a64+a65);
  a53=(a53*a64);
  a24=(a24-a53);
  a63=(a63*a24);
  a61=(a61-a63);
  a30=(a30*a61);
  a61=cos(a4);
  a61=(a61*a38);
  a61=(a38*a61);
  a61=(a1*a61);
  a61=(a28*a61);
  a31=(a31*a61);
  a63=(a58+a58);
  a63=(a41*a63);
  a31=(a31-a63);
  a63=(a56+a56);
  a63=(a33*a63);
  a26=(a26*a57);
  a57=sin(a4);
  a57=(a57*a38);
  a57=(a38*a57);
  a3=(a3*a57);
  a26=(a26+a3);
  a39=(a39*a55);
  a55=cos(a2);
  a55=(a55*a27);
  a55=(a27*a55);
  a55=(a1*a55);
  a5=(a5*a55);
  a39=(a39+a5);
  a26=(a26+a39);
  a26=(a28*a26);
  a39=sin(a2);
  a39=(a39*a27);
  a39=(a27*a39);
  a39=(a8*a39);
  a39=(a28*a39);
  a26=(a26+a39);
  a40=(a40*a26);
  a63=(a63+a40);
  a31=(a31-a63);
  a63=(a49+a49);
  a63=(a43*a63);
  a40=sin(a2);
  a40=(a40*a27);
  a40=(a27*a40);
  a40=(a14*a40);
  a40=(a32*a40);
  a39=cos(a2);
  a39=(a39*a27);
  a39=(a27*a39);
  a39=(a11*a39);
  a39=(a34*a39);
  a40=(a40+a39);
  a44=(a44*a52);
  a52=sin(a4);
  a52=(a52*a38);
  a52=(a38*a52);
  a17=(a17*a52);
  a44=(a44+a17);
  a46=(a46*a50);
  a50=cos(a2);
  a50=(a50*a27);
  a50=(a27*a50);
  a50=(a15*a50);
  a18=(a18*a50);
  a46=(a46+a18);
  a44=(a44+a46);
  a44=(a35*a44);
  a40=(a40+a44);
  a45=(a45*a54);
  a54=sin(a2);
  a54=(a54*a27);
  a54=(a27*a54);
  a54=(a8*a54);
  a21=(a21*a54);
  a45=(a45-a21);
  a48=(a48*a51);
  a51=sin(a4);
  a51=(a51*a38);
  a51=(a38*a51);
  a19=(a19*a51);
  a48=(a48-a19);
  a45=(a45+a48);
  a45=(a28*a45);
  a40=(a40+a45);
  a42=(a42*a40);
  a63=(a63-a42);
  a31=(a31+a63);
  a31=(a31/a47);
  a47=(a36/a47);
  a63=(a60+a60);
  a47=(a47*a63);
  a31=(a31+a47);
  a47=(a6*a31);
  a63=(a36*a56);
  a47=(a47-a63);
  a63=(a33*a60);
  a42=(a9*a26);
  a63=(a63+a42);
  a47=(a47-a63);
  a63=(a43*a58);
  a42=(a10*a40);
  a63=(a63+a42);
  a42=(a41*a49);
  a45=(a12*a61);
  a42=(a42+a45);
  a63=(a63+a42);
  a47=(a47-a63);
  a62=(a62*a47);
  a30=(a30+a62);
  a62=(a6*a43);
  a47=(a12*a33);
  a62=(a62-a47);
  a47=(a9*a41);
  a63=(a10*a36);
  a47=(a47+a63);
  a62=(a62-a47);
  a64=(a64/a59);
  a23=(a23/a59);
  a59=(a23/a59);
  a59=(a59*a24);
  a64=(a64+a59);
  a62=(a62*a64);
  a43=(a43*a56);
  a6=(a6*a40);
  a43=(a43+a6);
  a33=(a33*a49);
  a12=(a12*a26);
  a33=(a33-a12);
  a43=(a43+a33);
  a9=(a9*a61);
  a41=(a41*a60);
  a9=(a9-a41);
  a10=(a10*a31);
  a36=(a36*a58);
  a10=(a10-a36);
  a9=(a9+a10);
  a43=(a43+a9);
  a23=(a23*a43);
  a62=(a62+a23);
  a30=(a30-a62);
  a37=(a37+a30);
  if (res[0]!=0) res[0][0]=a37;
  a37=sin(a2);
  a37=(a8*a37);
  a37=(a37/a7);
  a30=cos(a2);
  a30=(a1*a30);
  a62=sin(a4);
  a23=(a30*a62);
  a23=(a23/a7);
  a37=(a37-a23);
  a37=(a37+a0);
  a0=casadi_sq(a37);
  a23=cos(a4);
  a23=(a1*a23);
  a23=(a23/a7);
  a43=casadi_sq(a23);
  a0=(a0+a43);
  a43=cos(a2);
  a43=(a11*a43);
  a43=(a43/a13);
  a13=sin(a2);
  a13=(a14*a13);
  a13=(a13/a16);
  a43=(a43-a13);
  a13=cos(a2);
  a13=(a15*a13);
  a16=sin(a4);
  a9=(a13*a16);
  a9=(a9/a20);
  a43=(a43+a9);
  a9=sin(a2);
  a9=(a8*a9);
  a20=sin(a4);
  a10=(a9*a20);
  a10=(a10/a7);
  a43=(a43+a10);
  a43=(a43-a22);
  a22=casadi_sq(a43);
  a0=(a0-a22);
  a0=sqrt(a0);
  a22=(a37*a0);
  a10=(a23*a43);
  a22=(a22-a10);
  a10=(a23*a0);
  a7=(a37*a43);
  a10=(a10+a7);
  a7=casadi_sq(a10);
  a36=casadi_sq(a22);
  a7=(a7+a36);
  a36=(a22/a7);
  a58=(a37+a37);
  a31=cos(a2);
  a31=(a8*a31);
  a31=(a28*a31);
  a41=sin(a2);
  a41=(a1*a41);
  a41=(a62*a41);
  a41=(a28*a41);
  a31=(a31+a41);
  a41=(a58*a31);
  a60=(a43+a43);
  a61=cos(a2);
  a61=(a8*a61);
  a61=(a20*a61);
  a61=(a28*a61);
  a33=sin(a2);
  a33=(a11*a33);
  a33=(a34*a33);
  a12=cos(a2);
  a12=(a14*a12);
  a12=(a32*a12);
  a33=(a33+a12);
  a12=sin(a2);
  a12=(a15*a12);
  a12=(a16*a12);
  a12=(a35*a12);
  a33=(a33+a12);
  a61=(a61-a33);
  a33=(a60*a61);
  a41=(a41-a33);
  a33=(a0+a0);
  a41=(a41/a33);
  a12=(a23*a41);
  a26=(a43*a31);
  a49=(a37*a61);
  a26=(a26+a49);
  a12=(a12+a26);
  a12=(a36*a12);
  a7=(a10/a7);
  a31=(a0*a31);
  a41=(a37*a41);
  a31=(a31+a41);
  a61=(a23*a61);
  a31=(a31-a61);
  a31=(a7*a31);
  a12=(a12-a31);
  a12=(a12*a29);
  a29=cos(a4);
  a29=(a13*a29);
  a29=(a35*a29);
  a31=cos(a4);
  a31=(a9*a31);
  a31=(a28*a31);
  a29=(a29+a31);
  a31=(a37*a29);
  a61=cos(a4);
  a61=(a30*a61);
  a61=(a28*a61);
  a41=(a43*a61);
  a31=(a31-a41);
  a41=sin(a4);
  a41=(a1*a41);
  a41=(a28*a41);
  a26=(a0*a41);
  a58=(a58*a61);
  a49=(a23+a23);
  a49=(a49*a41);
  a58=(a58+a49);
  a60=(a60*a29);
  a58=(a58+a60);
  a58=(a58/a33);
  a33=(a23*a58);
  a26=(a26+a33);
  a31=(a31-a26);
  a36=(a36*a31);
  a61=(a0*a61);
  a58=(a37*a58);
  a61=(a61+a58);
  a29=(a23*a29);
  a41=(a43*a41);
  a29=(a29-a41);
  a61=(a61+a29);
  a7=(a7*a61);
  a36=(a36+a7);
  a36=(a36*a25);
  a12=(a12+a36);
  a36=(a37+a37);
  a25=cos(a2);
  a25=(a25*a27);
  a25=(a8*a25);
  a25=(a28*a25);
  a7=cos(a4);
  a7=(a7*a38);
  a61=(a30*a7);
  a29=sin(a2);
  a29=(a29*a27);
  a29=(a1*a29);
  a41=(a62*a29);
  a61=(a61-a41);
  a61=(a28*a61);
  a25=(a25-a61);
  a61=(a36*a25);
  a41=(a23+a23);
  a58=sin(a4);
  a58=(a58*a38);
  a58=(a1*a58);
  a58=(a28*a58);
  a31=(a41*a58);
  a61=(a61-a31);
  a31=(a43+a43);
  a26=cos(a4);
  a26=(a26*a38);
  a33=(a13*a26);
  a60=sin(a2);
  a60=(a60*a27);
  a60=(a15*a60);
  a49=(a16*a60);
  a33=(a33-a49);
  a33=(a35*a33);
  a49=sin(a2);
  a49=(a49*a27);
  a49=(a11*a49);
  a49=(a34*a49);
  a6=cos(a2);
  a6=(a6*a27);
  a6=(a14*a6);
  a6=(a32*a6);
  a49=(a49+a6);
  a33=(a33-a49);
  a49=cos(a2);
  a49=(a49*a27);
  a49=(a8*a49);
  a6=(a20*a49);
  a40=cos(a4);
  a40=(a40*a38);
  a56=(a9*a40);
  a6=(a6+a56);
  a6=(a28*a6);
  a33=(a33+a6);
  a6=(a31*a33);
  a61=(a61-a6);
  a6=(a0+a0);
  a61=(a61/a6);
  a56=(a23*a61);
  a64=(a0*a58);
  a56=(a56-a64);
  a64=(a43*a25);
  a59=(a37*a33);
  a64=(a64+a59);
  a56=(a56+a64);
  a64=cos(a2);
  a64=(a64*a27);
  a64=(a8*a64);
  a64=(a28*a64);
  a59=cos(a4);
  a59=(a59*a38);
  a24=(a30*a59);
  a47=sin(a2);
  a47=(a47*a27);
  a47=(a1*a47);
  a63=(a62*a47);
  a24=(a24-a63);
  a24=(a28*a24);
  a64=(a64-a24);
  a24=(a0*a64);
  a63=(a37+a37);
  a63=(a63*a64);
  a42=(a23+a23);
  a45=sin(a4);
  a45=(a45*a38);
  a45=(a1*a45);
  a45=(a28*a45);
  a42=(a42*a45);
  a63=(a63-a42);
  a42=(a43+a43);
  a48=cos(a4);
  a48=(a48*a38);
  a19=(a13*a48);
  a51=sin(a2);
  a51=(a51*a27);
  a51=(a15*a51);
  a21=(a16*a51);
  a19=(a19-a21);
  a19=(a35*a19);
  a21=sin(a2);
  a21=(a21*a27);
  a21=(a11*a21);
  a21=(a34*a21);
  a54=cos(a2);
  a54=(a54*a27);
  a54=(a14*a54);
  a54=(a32*a54);
  a21=(a21+a54);
  a19=(a19-a21);
  a21=cos(a2);
  a21=(a21*a27);
  a21=(a8*a21);
  a54=(a20*a21);
  a44=cos(a4);
  a44=(a44*a38);
  a46=(a9*a44);
  a54=(a54+a46);
  a54=(a28*a54);
  a19=(a19+a54);
  a42=(a42*a19);
  a63=(a63-a42);
  a42=(a0+a0);
  a63=(a63/a42);
  a42=(a37*a63);
  a24=(a24+a42);
  a42=(a23*a19);
  a54=(a43*a45);
  a42=(a42-a54);
  a24=(a24-a42);
  a42=casadi_sq(a10);
  a54=casadi_sq(a22);
  a42=(a42+a54);
  a54=(a24/a42);
  a46=(a22/a42);
  a18=(a46/a42);
  a50=(a10+a10);
  a17=(a23*a63);
  a52=(a0*a45);
  a17=(a17-a52);
  a52=(a43*a64);
  a39=(a37*a19);
  a52=(a52+a39);
  a17=(a17+a52);
  a50=(a50*a17);
  a22=(a22+a22);
  a22=(a22*a24);
  a50=(a50+a22);
  a18=(a18*a50);
  a54=(a54-a18);
  a56=(a56*a54);
  a54=(a64+a64);
  a54=(a25*a54);
  a7=(a7*a47);
  a47=sin(a4);
  a47=(a47*a38);
  a47=(a38*a47);
  a30=(a30*a47);
  a7=(a7+a30);
  a29=(a29*a59);
  a59=cos(a2);
  a59=(a59*a27);
  a59=(a27*a59);
  a59=(a1*a59);
  a62=(a62*a59);
  a29=(a29+a62);
  a7=(a7+a29);
  a7=(a28*a7);
  a29=sin(a2);
  a29=(a29*a27);
  a29=(a27*a29);
  a29=(a8*a29);
  a29=(a28*a29);
  a7=(a7-a29);
  a36=(a36*a7);
  a54=(a54+a36);
  a36=cos(a4);
  a36=(a36*a38);
  a36=(a38*a36);
  a1=(a1*a36);
  a1=(a28*a1);
  a41=(a41*a1);
  a36=(a45+a45);
  a36=(a58*a36);
  a41=(a41-a36);
  a54=(a54-a41);
  a41=(a19+a19);
  a41=(a33*a41);
  a49=(a49*a44);
  a44=sin(a2);
  a44=(a44*a27);
  a44=(a27*a44);
  a8=(a8*a44);
  a20=(a20*a8);
  a49=(a49-a20);
  a40=(a40*a21);
  a21=sin(a4);
  a21=(a21*a38);
  a21=(a38*a21);
  a9=(a9*a21);
  a40=(a40-a9);
  a49=(a49+a40);
  a28=(a28*a49);
  a26=(a26*a51);
  a4=sin(a4);
  a4=(a4*a38);
  a38=(a38*a4);
  a13=(a13*a38);
  a26=(a26+a13);
  a60=(a60*a48);
  a48=cos(a2);
  a48=(a48*a27);
  a48=(a27*a48);
  a15=(a15*a48);
  a16=(a16*a15);
  a60=(a60+a16);
  a26=(a26+a60);
  a35=(a35*a26);
  a26=cos(a2);
  a26=(a26*a27);
  a26=(a27*a26);
  a11=(a11*a26);
  a34=(a34*a11);
  a2=sin(a2);
  a2=(a2*a27);
  a27=(a27*a2);
  a14=(a14*a27);
  a32=(a32*a14);
  a34=(a34-a32);
  a35=(a35+a34);
  a28=(a28-a35);
  a31=(a31*a28);
  a41=(a41+a31);
  a54=(a54-a41);
  a54=(a54/a6);
  a6=(a61/a6);
  a41=(a63+a63);
  a6=(a6*a41);
  a54=(a54-a6);
  a6=(a23*a54);
  a41=(a61*a45);
  a6=(a6-a41);
  a41=(a58*a63);
  a31=(a0*a1);
  a41=(a41+a31);
  a6=(a6-a41);
  a41=(a25*a19);
  a31=(a43*a7);
  a41=(a41+a31);
  a31=(a33*a64);
  a35=(a37*a28);
  a31=(a31+a35);
  a41=(a41+a31);
  a6=(a6+a41);
  a46=(a46*a6);
  a56=(a56+a46);
  a46=(a0*a25);
  a6=(a37*a61);
  a46=(a46+a6);
  a6=(a23*a33);
  a41=(a43*a58);
  a6=(a6-a41);
  a46=(a46-a6);
  a17=(a17/a42);
  a10=(a10/a42);
  a42=(a10/a42);
  a42=(a42*a50);
  a17=(a17-a42);
  a46=(a46*a17);
  a25=(a25*a63);
  a0=(a0*a7);
  a25=(a25+a0);
  a61=(a61*a64);
  a37=(a37*a54);
  a61=(a61+a37);
  a25=(a25+a61);
  a23=(a23*a28);
  a33=(a33*a45);
  a23=(a23-a33);
  a58=(a58*a19);
  a43=(a43*a1);
  a58=(a58+a43);
  a23=(a23-a58);
  a25=(a25-a23);
  a10=(a10*a25);
  a46=(a46+a10);
  a56=(a56-a46);
  a12=(a12+a56);
  if (res[0]!=0) res[0][1]=a12;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int IK_dependent_state_to_y_ddot(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int IK_dependent_state_to_y_ddot_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int IK_dependent_state_to_y_ddot_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void IK_dependent_state_to_y_ddot_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int IK_dependent_state_to_y_ddot_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void IK_dependent_state_to_y_ddot_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void IK_dependent_state_to_y_ddot_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void IK_dependent_state_to_y_ddot_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int IK_dependent_state_to_y_ddot_n_in(void) { return 3;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int IK_dependent_state_to_y_ddot_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real IK_dependent_state_to_y_ddot_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* IK_dependent_state_to_y_ddot_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* IK_dependent_state_to_y_ddot_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* IK_dependent_state_to_y_ddot_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* IK_dependent_state_to_y_ddot_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int IK_dependent_state_to_y_ddot_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


