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
  #define CASADI_PREFIX(ID) rev_w_rotor_4dof_FD_ref_inertia_ ## ID
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

static const casadi_int casadi_s0[8] = {4, 1, 0, 4, 0, 1, 2, 3};

/* RevWithRotors4DofFwdDynReflectedInertia:(i0[4],i1[4],i2[4])->(o0[4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a100, a101, a102, a103, a104, a105, a106, a107, a108, a109, a11, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a12, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a13, a130, a131, a132, a133, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99;
  a0=arg[0]? arg[0][0] : 0;
  a1=cos(a0);
  a2=arg[0]? arg[0][1] : 0;
  a2=(a0+a2);
  a3=cos(a2);
  a1=(a1+a3);
  a4=arg[0]? arg[0][2] : 0;
  a4=(a2+a4);
  a5=cos(a4);
  a1=(a1+a5);
  a6=5.0000000000000000e-01;
  a7=arg[0]? arg[0][3] : 0;
  a7=(a4+a7);
  a8=cos(a7);
  a9=(a6*a8);
  a1=(a1+a9);
  a9=(a6*a8);
  a10=(a1*a9);
  a11=sin(a0);
  a12=sin(a2);
  a11=(a11+a12);
  a13=sin(a4);
  a11=(a11+a13);
  a14=sin(a7);
  a15=(a6*a14);
  a11=(a11+a15);
  a15=(a6*a14);
  a16=(a11*a15);
  a10=(a10+a16);
  a16=1.;
  a10=(a10+a16);
  a17=3.6000000000000003e-03;
  a18=(a1+a1);
  a18=(a6*a18);
  a18=(a1*a18);
  a18=(a17+a18);
  a19=(a11+a11);
  a19=(a6*a19);
  a19=(a11*a19);
  a18=(a18+a19);
  a19=cos(a0);
  a20=cos(a2);
  a19=(a19+a20);
  a21=cos(a4);
  a22=(a6*a21);
  a19=(a19+a22);
  a22=(a19+a19);
  a22=(a6*a22);
  a22=(a19*a22);
  a18=(a18+a22);
  a22=sin(a0);
  a23=sin(a2);
  a22=(a22+a23);
  a24=sin(a4);
  a25=(a6*a24);
  a22=(a22+a25);
  a25=(a22+a22);
  a25=(a6*a25);
  a25=(a22*a25);
  a18=(a18+a25);
  a25=3.;
  a18=(a18+a25);
  a26=cos(a0);
  a27=cos(a2);
  a28=(a6*a27);
  a26=(a26+a28);
  a28=(a26+a26);
  a28=(a6*a28);
  a28=(a26*a28);
  a18=(a18+a28);
  a28=sin(a0);
  a29=sin(a2);
  a30=(a6*a29);
  a28=(a28+a30);
  a30=(a28+a28);
  a30=(a6*a30);
  a30=(a28*a30);
  a18=(a18+a30);
  a18=(a18+a16);
  a30=cos(a0);
  a30=(a6*a30);
  a31=casadi_sq(a30);
  a18=(a18+a31);
  a31=sin(a0);
  a31=(a6*a31);
  a32=casadi_sq(a31);
  a18=(a18+a32);
  a32=casadi_sq(a18);
  a3=(a3+a5);
  a33=(a6*a8);
  a3=(a3+a33);
  a33=(a3+a3);
  a33=(a6*a33);
  a34=(a1*a33);
  a12=(a12+a13);
  a35=(a6*a14);
  a12=(a12+a35);
  a35=(a12+a12);
  a35=(a6*a35);
  a36=(a11*a35);
  a34=(a34+a36);
  a36=(a6*a21);
  a20=(a20+a36);
  a36=(a20+a20);
  a36=(a6*a36);
  a37=(a19*a36);
  a34=(a34+a37);
  a37=(a6*a24);
  a23=(a23+a37);
  a37=(a23+a23);
  a37=(a6*a37);
  a38=(a22*a37);
  a34=(a34+a38);
  a34=(a34+a25);
  a38=(a6*a27);
  a38=(a26*a38);
  a34=(a34+a38);
  a38=(a6*a29);
  a38=(a28*a38);
  a34=(a34+a38);
  a38=casadi_sq(a34);
  a32=(a32+a38);
  a38=(a6*a8);
  a5=(a5+a38);
  a38=(a5+a5);
  a38=(a6*a38);
  a39=(a1*a38);
  a40=(a6*a14);
  a13=(a13+a40);
  a40=(a13+a13);
  a40=(a6*a40);
  a41=(a11*a40);
  a39=(a39+a41);
  a41=(a6*a21);
  a42=(a19*a41);
  a39=(a39+a42);
  a42=(a6*a24);
  a43=(a22*a42);
  a39=(a39+a43);
  a43=2.;
  a39=(a39+a43);
  a44=casadi_sq(a39);
  a32=(a32+a44);
  a44=casadi_sq(a10);
  a32=(a32+a44);
  a32=sqrt(a32);
  a18=(a18/a32);
  a44=(a10*a18);
  a45=(a3*a9);
  a46=(a12*a15);
  a45=(a45+a46);
  a45=(a45+a16);
  a46=(a34/a32);
  a47=(a45*a46);
  a44=(a44+a47);
  a9=(a5*a9);
  a15=(a13*a15);
  a9=(a9+a15);
  a9=(a9+a16);
  a16=(a39/a32);
  a15=(a9*a16);
  a44=(a44+a15);
  a15=1.0036000000000000e+00;
  a8=(a6*a8);
  a47=casadi_sq(a8);
  a15=(a15+a47);
  a14=(a6*a14);
  a47=casadi_sq(a14);
  a15=(a15+a47);
  a47=(a10/a32);
  a48=(a15*a47);
  a44=(a44+a48);
  a48=(a44*a18);
  a10=(a10-a48);
  a48=(a34*a18);
  a33=(a3*a33);
  a33=(a17+a33);
  a35=(a12*a35);
  a33=(a33+a35);
  a36=(a20*a36);
  a33=(a33+a36);
  a37=(a23*a37);
  a33=(a33+a37);
  a33=(a33+a25);
  a27=(a6*a27);
  a25=casadi_sq(a27);
  a33=(a33+a25);
  a29=(a6*a29);
  a25=casadi_sq(a29);
  a33=(a33+a25);
  a25=(a33*a46);
  a48=(a48+a25);
  a25=(a3*a38);
  a37=(a12*a40);
  a25=(a25+a37);
  a41=(a20*a41);
  a25=(a25+a41);
  a42=(a23*a42);
  a25=(a25+a42);
  a25=(a25+a43);
  a42=(a25*a16);
  a48=(a48+a42);
  a42=(a45*a47);
  a48=(a48+a42);
  a42=(a48*a18);
  a34=(a34-a42);
  a42=casadi_sq(a34);
  a41=(a48*a46);
  a33=(a33-a41);
  a41=casadi_sq(a33);
  a42=(a42+a41);
  a41=(a48*a16);
  a41=(a25-a41);
  a37=casadi_sq(a41);
  a42=(a42+a37);
  a37=(a48*a47);
  a37=(a45-a37);
  a36=casadi_sq(a37);
  a42=(a42+a36);
  a42=sqrt(a42);
  a34=(a34/a42);
  a36=(a10*a34);
  a35=(a44*a46);
  a45=(a45-a35);
  a33=(a33/a42);
  a35=(a45*a33);
  a36=(a36+a35);
  a35=(a44*a16);
  a35=(a9-a35);
  a41=(a41/a42);
  a49=(a35*a41);
  a36=(a36+a49);
  a49=(a44*a47);
  a15=(a15-a49);
  a37=(a37/a42);
  a49=(a15*a37);
  a36=(a36+a49);
  a49=(a36*a34);
  a10=(a10-a49);
  a49=(a39*a18);
  a50=(a25*a46);
  a49=(a49+a50);
  a38=(a5*a38);
  a17=(a17+a38);
  a40=(a13*a40);
  a17=(a17+a40);
  a17=(a17+a43);
  a21=(a6*a21);
  a43=casadi_sq(a21);
  a17=(a17+a43);
  a24=(a6*a24);
  a43=casadi_sq(a24);
  a17=(a17+a43);
  a43=(a17*a16);
  a49=(a49+a43);
  a43=(a9*a47);
  a49=(a49+a43);
  a43=(a49*a18);
  a39=(a39-a43);
  a43=(a39*a34);
  a40=(a49*a46);
  a25=(a25-a40);
  a40=(a25*a33);
  a43=(a43+a40);
  a40=(a49*a16);
  a17=(a17-a40);
  a40=(a17*a41);
  a43=(a43+a40);
  a40=(a49*a47);
  a9=(a9-a40);
  a40=(a9*a37);
  a43=(a43+a40);
  a40=(a43*a34);
  a39=(a39-a40);
  a40=casadi_sq(a39);
  a38=(a43*a33);
  a25=(a25-a38);
  a38=casadi_sq(a25);
  a40=(a40+a38);
  a38=(a43*a41);
  a17=(a17-a38);
  a38=casadi_sq(a17);
  a40=(a40+a38);
  a38=(a43*a37);
  a9=(a9-a38);
  a38=casadi_sq(a9);
  a40=(a40+a38);
  a40=sqrt(a40);
  a39=(a39/a40);
  a38=(a10*a39);
  a50=(a36*a33);
  a45=(a45-a50);
  a25=(a25/a40);
  a50=(a45*a25);
  a38=(a38+a50);
  a50=(a36*a41);
  a35=(a35-a50);
  a17=(a17/a40);
  a50=(a35*a17);
  a38=(a38+a50);
  a50=(a36*a37);
  a15=(a15-a50);
  a9=(a9/a40);
  a50=(a15*a9);
  a38=(a38+a50);
  a50=(a38*a39);
  a10=(a10-a50);
  a50=casadi_sq(a10);
  a51=(a38*a25);
  a45=(a45-a51);
  a51=casadi_sq(a45);
  a50=(a50+a51);
  a51=(a38*a17);
  a35=(a35-a51);
  a51=casadi_sq(a35);
  a50=(a50+a51);
  a51=(a38*a9);
  a15=(a15-a51);
  a51=casadi_sq(a15);
  a50=(a50+a51);
  a50=sqrt(a50);
  a10=(a10/a50);
  a51=arg[1]? arg[1][0] : 0;
  a52=(a11*a51);
  a53=arg[1]? arg[1][1] : 0;
  a54=(a12*a53);
  a52=(a52+a54);
  a54=arg[1]? arg[1][2] : 0;
  a55=(a13*a54);
  a52=(a52+a55);
  a55=arg[1]? arg[1][3] : 0;
  a56=(a14*a55);
  a52=(a52+a56);
  a56=(a52+a52);
  a56=(a6*a56);
  a57=cos(a0);
  a58=cos(a2);
  a57=(a57+a58);
  a59=cos(a4);
  a57=(a57+a59);
  a60=cos(a7);
  a61=(a6*a60);
  a57=(a57+a61);
  a61=(a56*a57);
  a57=(a51*a57);
  a62=(a58+a59);
  a63=(a6*a60);
  a62=(a62+a63);
  a63=(a53*a62);
  a57=(a57+a63);
  a63=(a6*a60);
  a63=(a59+a63);
  a64=(a54*a63);
  a57=(a57+a64);
  a64=(a6*a60);
  a65=(a55*a64);
  a57=(a57+a65);
  a57=(a57+a57);
  a57=(a6*a57);
  a65=(a11*a57);
  a61=(a61+a65);
  a65=(a1*a51);
  a66=(a3*a53);
  a65=(a65+a66);
  a66=(a5*a54);
  a65=(a65+a66);
  a66=(a8*a55);
  a65=(a65+a66);
  a66=(a65+a65);
  a66=(a6*a66);
  a67=sin(a0);
  a68=sin(a2);
  a67=(a67+a68);
  a69=sin(a4);
  a67=(a67+a69);
  a70=sin(a7);
  a71=(a6*a70);
  a67=(a67+a71);
  a71=(a66*a67);
  a67=(a51*a67);
  a72=(a68+a69);
  a73=(a6*a70);
  a72=(a72+a73);
  a73=(a53*a72);
  a67=(a67+a73);
  a73=(a6*a70);
  a73=(a69+a73);
  a74=(a54*a73);
  a67=(a67+a74);
  a74=(a6*a70);
  a75=(a55*a74);
  a67=(a67+a75);
  a67=(a67+a67);
  a67=(a6*a67);
  a75=(a1*a67);
  a71=(a71+a75);
  a61=(a61-a71);
  a71=(a19*a51);
  a75=(a20*a53);
  a71=(a71+a75);
  a75=(a21*a54);
  a71=(a71+a75);
  a75=(a71+a71);
  a75=(a6*a75);
  a76=sin(a0);
  a77=sin(a2);
  a76=(a76+a77);
  a78=sin(a4);
  a79=(a6*a78);
  a76=(a76+a79);
  a79=(a75*a76);
  a76=(a51*a76);
  a80=(a6*a78);
  a80=(a77+a80);
  a81=(a53*a80);
  a76=(a76+a81);
  a81=(a6*a78);
  a82=(a54*a81);
  a76=(a76+a82);
  a76=(a76+a76);
  a76=(a6*a76);
  a82=(a19*a76);
  a79=(a79+a82);
  a61=(a61-a79);
  a79=(a22*a51);
  a82=(a23*a53);
  a79=(a79+a82);
  a82=(a24*a54);
  a79=(a79+a82);
  a82=(a79+a79);
  a82=(a6*a82);
  a83=cos(a0);
  a84=cos(a2);
  a83=(a83+a84);
  a85=cos(a4);
  a86=(a6*a85);
  a83=(a83+a86);
  a86=(a82*a83);
  a83=(a51*a83);
  a87=(a6*a85);
  a87=(a84+a87);
  a88=(a53*a87);
  a83=(a83+a88);
  a88=(a6*a85);
  a89=(a54*a88);
  a83=(a83+a89);
  a83=(a83+a83);
  a83=(a6*a83);
  a89=(a22*a83);
  a86=(a86+a89);
  a61=(a61+a86);
  a86=(a26*a51);
  a89=(a27*a53);
  a86=(a86+a89);
  a89=(a86+a86);
  a89=(a6*a89);
  a90=sin(a0);
  a91=sin(a2);
  a92=(a6*a91);
  a90=(a90+a92);
  a92=(a89*a90);
  a90=(a51*a90);
  a93=(a6*a91);
  a94=(a53*a93);
  a90=(a90+a94);
  a90=(a90+a90);
  a90=(a6*a90);
  a94=(a26*a90);
  a92=(a92+a94);
  a61=(a61-a92);
  a92=(a28*a51);
  a94=(a29*a53);
  a92=(a92+a94);
  a94=(a92+a92);
  a94=(a6*a94);
  a95=cos(a0);
  a96=cos(a2);
  a97=(a6*a96);
  a95=(a95+a97);
  a97=(a94*a95);
  a95=(a51*a95);
  a98=(a6*a96);
  a99=(a53*a98);
  a95=(a95+a99);
  a95=(a95+a95);
  a95=(a6*a95);
  a99=(a28*a95);
  a97=(a97+a99);
  a61=(a61+a97);
  a97=(a30*a51);
  a99=(a97+a97);
  a99=(a6*a99);
  a100=sin(a0);
  a100=(a6*a100);
  a99=(a99*a100);
  a100=(a51*a100);
  a100=(a100+a100);
  a100=(a6*a100);
  a30=(a30*a100);
  a99=(a99+a30);
  a61=(a61-a99);
  a99=(a31*a51);
  a30=(a99+a99);
  a30=(a6*a30);
  a100=cos(a0);
  a100=(a6*a100);
  a30=(a30*a100);
  a100=(a51*a100);
  a100=(a100+a100);
  a100=(a6*a100);
  a31=(a31*a100);
  a30=(a30+a31);
  a61=(a61+a30);
  a61=(a61*a51);
  a30=(a58+a59);
  a31=(a6*a60);
  a30=(a30+a31);
  a31=(a56*a30);
  a30=(a51*a30);
  a58=(a58+a59);
  a100=(a6*a60);
  a58=(a58+a100);
  a100=(a53*a58);
  a30=(a30+a100);
  a100=(a6*a60);
  a100=(a59+a100);
  a101=(a54*a100);
  a30=(a30+a101);
  a101=(a6*a60);
  a102=(a55*a101);
  a30=(a30+a102);
  a30=(a30+a30);
  a30=(a6*a30);
  a102=(a11*a30);
  a31=(a31+a102);
  a102=(a68+a69);
  a103=(a6*a70);
  a102=(a102+a103);
  a103=(a66*a102);
  a102=(a51*a102);
  a68=(a68+a69);
  a104=(a6*a70);
  a68=(a68+a104);
  a104=(a53*a68);
  a102=(a102+a104);
  a104=(a6*a70);
  a104=(a69+a104);
  a105=(a54*a104);
  a102=(a102+a105);
  a105=(a6*a70);
  a106=(a55*a105);
  a102=(a102+a106);
  a102=(a102+a102);
  a102=(a6*a102);
  a106=(a1*a102);
  a103=(a103+a106);
  a31=(a31-a103);
  a103=(a6*a78);
  a103=(a77+a103);
  a106=(a75*a103);
  a103=(a51*a103);
  a107=(a6*a78);
  a77=(a77+a107);
  a107=(a53*a77);
  a103=(a103+a107);
  a107=(a6*a78);
  a108=(a54*a107);
  a103=(a103+a108);
  a103=(a103+a103);
  a103=(a6*a103);
  a108=(a19*a103);
  a106=(a106+a108);
  a31=(a31-a106);
  a106=(a6*a85);
  a106=(a84+a106);
  a108=(a82*a106);
  a106=(a51*a106);
  a109=(a6*a85);
  a84=(a84+a109);
  a109=(a53*a84);
  a106=(a106+a109);
  a109=(a6*a85);
  a110=(a54*a109);
  a106=(a106+a110);
  a106=(a106+a106);
  a106=(a6*a106);
  a110=(a22*a106);
  a108=(a108+a110);
  a31=(a31+a108);
  a108=(a6*a91);
  a110=(a89*a108);
  a108=(a51*a108);
  a91=(a6*a91);
  a111=(a53*a91);
  a108=(a108+a111);
  a108=(a108+a108);
  a108=(a6*a108);
  a26=(a26*a108);
  a110=(a110+a26);
  a31=(a31-a110);
  a110=(a6*a96);
  a26=(a94*a110);
  a110=(a51*a110);
  a96=(a6*a96);
  a111=(a53*a96);
  a110=(a110+a111);
  a110=(a110+a110);
  a110=(a6*a110);
  a28=(a28*a110);
  a26=(a26+a28);
  a31=(a31+a26);
  a31=(a31*a53);
  a61=(a61+a31);
  a31=(a6*a60);
  a31=(a59+a31);
  a26=(a56*a31);
  a31=(a51*a31);
  a28=(a6*a60);
  a28=(a59+a28);
  a111=(a53*a28);
  a31=(a31+a111);
  a111=(a6*a60);
  a59=(a59+a111);
  a111=(a54*a59);
  a31=(a31+a111);
  a111=(a6*a60);
  a112=(a55*a111);
  a31=(a31+a112);
  a31=(a31+a31);
  a31=(a6*a31);
  a112=(a11*a31);
  a26=(a26+a112);
  a112=(a6*a70);
  a112=(a69+a112);
  a113=(a66*a112);
  a112=(a51*a112);
  a114=(a6*a70);
  a114=(a69+a114);
  a115=(a53*a114);
  a112=(a112+a115);
  a115=(a6*a70);
  a69=(a69+a115);
  a115=(a54*a69);
  a112=(a112+a115);
  a115=(a6*a70);
  a116=(a55*a115);
  a112=(a112+a116);
  a112=(a112+a112);
  a112=(a6*a112);
  a116=(a1*a112);
  a113=(a113+a116);
  a26=(a26-a113);
  a113=(a6*a78);
  a116=(a75*a113);
  a113=(a51*a113);
  a117=(a6*a78);
  a118=(a53*a117);
  a113=(a113+a118);
  a78=(a6*a78);
  a118=(a54*a78);
  a113=(a113+a118);
  a113=(a113+a113);
  a113=(a6*a113);
  a19=(a19*a113);
  a116=(a116+a19);
  a26=(a26-a116);
  a116=(a6*a85);
  a19=(a82*a116);
  a116=(a51*a116);
  a118=(a6*a85);
  a119=(a53*a118);
  a116=(a116+a119);
  a85=(a6*a85);
  a119=(a54*a85);
  a116=(a116+a119);
  a116=(a116+a116);
  a116=(a6*a116);
  a22=(a22*a116);
  a19=(a19+a22);
  a26=(a26+a19);
  a26=(a26*a54);
  a61=(a61+a26);
  a26=(a6*a60);
  a19=(a56*a26);
  a26=(a51*a26);
  a22=(a6*a60);
  a119=(a53*a22);
  a26=(a26+a119);
  a119=(a6*a60);
  a120=(a54*a119);
  a26=(a26+a120);
  a60=(a6*a60);
  a120=(a55*a60);
  a26=(a26+a120);
  a26=(a26+a26);
  a26=(a6*a26);
  a11=(a11*a26);
  a19=(a19+a11);
  a11=(a6*a70);
  a120=(a66*a11);
  a11=(a51*a11);
  a121=(a6*a70);
  a122=(a53*a121);
  a11=(a11+a122);
  a122=(a6*a70);
  a123=(a54*a122);
  a11=(a11+a123);
  a70=(a6*a70);
  a123=(a55*a70);
  a11=(a11+a123);
  a11=(a11+a11);
  a11=(a6*a11);
  a1=(a1*a11);
  a120=(a120+a1);
  a19=(a19-a120);
  a19=(a19*a55);
  a61=(a61+a19);
  a19=cos(a0);
  a52=(a52+a52);
  a52=(a6*a52);
  a120=(a51*a52);
  a19=(a19*a120);
  a1=3.4335000000000001e+01;
  a123=sin(a0);
  a1=(a1*a123);
  a123=sin(a0);
  a65=(a65+a65);
  a65=(a6*a65);
  a124=(a51*a65);
  a123=(a123*a124);
  a1=(a1+a123);
  a19=(a19-a1);
  a1=sin(a0);
  a71=(a71+a71);
  a71=(a6*a71);
  a123=(a51*a71);
  a1=(a1*a123);
  a19=(a19-a1);
  a1=cos(a0);
  a79=(a79+a79);
  a79=(a6*a79);
  a125=(a51*a79);
  a1=(a1*a125);
  a19=(a19+a1);
  a1=sin(a0);
  a86=(a86+a86);
  a86=(a6*a86);
  a126=(a51*a86);
  a1=(a1*a126);
  a19=(a19-a1);
  a1=cos(a2);
  a127=(a53*a52);
  a128=(a127+a120);
  a1=(a1*a128);
  a128=2.4524999999999999e+01;
  a129=sin(a2);
  a128=(a128*a129);
  a129=sin(a2);
  a130=(a53*a65);
  a131=(a130+a124);
  a129=(a129*a131);
  a128=(a128+a129);
  a1=(a1-a128);
  a128=sin(a2);
  a129=(a53*a71);
  a131=(a129+a123);
  a128=(a128*a131);
  a1=(a1-a128);
  a128=cos(a7);
  a131=(a55*a52);
  a131=(a6*a131);
  a52=(a54*a52);
  a132=(a6*a52);
  a131=(a131+a132);
  a132=(a6*a127);
  a131=(a131+a132);
  a132=(a6*a120);
  a131=(a131+a132);
  a128=(a128*a131);
  a131=4.9050000000000002e+00;
  a132=sin(a7);
  a131=(a131*a132);
  a7=sin(a7);
  a132=(a55*a65);
  a132=(a6*a132);
  a65=(a54*a65);
  a133=(a6*a65);
  a132=(a132+a133);
  a133=(a6*a130);
  a132=(a132+a133);
  a133=(a6*a124);
  a132=(a132+a133);
  a7=(a7*a132);
  a131=(a131+a7);
  a128=(a128-a131);
  a131=1.4715000000000000e+01;
  a7=sin(a4);
  a131=(a131*a7);
  a7=sin(a4);
  a65=(a65+a130);
  a65=(a65+a124);
  a7=(a7*a65);
  a131=(a131+a7);
  a131=(a128-a131);
  a7=cos(a4);
  a52=(a52+a127);
  a52=(a52+a120);
  a7=(a7*a52);
  a131=(a131+a7);
  a7=sin(a4);
  a71=(a54*a71);
  a71=(a6*a71);
  a129=(a6*a129);
  a71=(a71+a129);
  a123=(a6*a123);
  a71=(a71+a123);
  a7=(a7*a71);
  a131=(a131-a7);
  a4=cos(a4);
  a7=(a54*a79);
  a7=(a6*a7);
  a79=(a53*a79);
  a71=(a6*a79);
  a7=(a7+a71);
  a71=(a6*a125);
  a7=(a7+a71);
  a4=(a4*a7);
  a131=(a131+a4);
  a1=(a1+a131);
  a4=cos(a2);
  a79=(a79+a125);
  a4=(a4*a79);
  a1=(a1+a4);
  a4=sin(a2);
  a86=(a53*a86);
  a86=(a6*a86);
  a126=(a6*a126);
  a86=(a86+a126);
  a4=(a4*a86);
  a1=(a1-a4);
  a2=cos(a2);
  a92=(a92+a92);
  a92=(a6*a92);
  a4=(a53*a92);
  a4=(a6*a4);
  a92=(a51*a92);
  a86=(a6*a92);
  a4=(a4+a86);
  a2=(a2*a4);
  a1=(a1+a2);
  a19=(a19+a1);
  a2=cos(a0);
  a2=(a2*a92);
  a19=(a19+a2);
  a2=sin(a0);
  a97=(a97+a97);
  a97=(a6*a97);
  a97=(a51*a97);
  a97=(a6*a97);
  a2=(a2*a97);
  a19=(a19-a2);
  a0=cos(a0);
  a99=(a99+a99);
  a99=(a6*a99);
  a99=(a51*a99);
  a6=(a6*a99);
  a0=(a0*a6);
  a19=(a19+a0);
  a61=(a61-a19);
  a19=arg[2]? arg[2][0] : 0;
  a61=(a61-a19);
  a10=(a10*a61);
  a45=(a45/a50);
  a62=(a56*a62);
  a19=(a12*a57);
  a62=(a62+a19);
  a72=(a66*a72);
  a19=(a3*a67);
  a72=(a72+a19);
  a62=(a62-a72);
  a80=(a75*a80);
  a72=(a20*a76);
  a80=(a80+a72);
  a62=(a62-a80);
  a87=(a82*a87);
  a80=(a23*a83);
  a87=(a87+a80);
  a62=(a62+a87);
  a93=(a89*a93);
  a90=(a27*a90);
  a93=(a93+a90);
  a62=(a62-a93);
  a98=(a94*a98);
  a95=(a29*a95);
  a98=(a98+a95);
  a62=(a62+a98);
  a62=(a62*a51);
  a58=(a56*a58);
  a98=(a12*a30);
  a58=(a58+a98);
  a68=(a66*a68);
  a98=(a3*a102);
  a68=(a68+a98);
  a58=(a58-a68);
  a77=(a75*a77);
  a68=(a20*a103);
  a77=(a77+a68);
  a58=(a58-a77);
  a84=(a82*a84);
  a77=(a23*a106);
  a84=(a84+a77);
  a58=(a58+a84);
  a89=(a89*a91);
  a27=(a27*a108);
  a89=(a89+a27);
  a58=(a58-a89);
  a94=(a94*a96);
  a29=(a29*a110);
  a94=(a94+a29);
  a58=(a58+a94);
  a58=(a58*a53);
  a62=(a62+a58);
  a28=(a56*a28);
  a58=(a12*a31);
  a28=(a28+a58);
  a114=(a66*a114);
  a58=(a3*a112);
  a114=(a114+a58);
  a28=(a28-a114);
  a117=(a75*a117);
  a20=(a20*a113);
  a117=(a117+a20);
  a28=(a28-a117);
  a118=(a82*a118);
  a23=(a23*a116);
  a118=(a118+a23);
  a28=(a28+a118);
  a28=(a28*a54);
  a62=(a62+a28);
  a22=(a56*a22);
  a12=(a12*a26);
  a22=(a22+a12);
  a121=(a66*a121);
  a3=(a3*a11);
  a121=(a121+a3);
  a22=(a22-a121);
  a22=(a22*a55);
  a62=(a62+a22);
  a62=(a62-a1);
  a1=arg[2]? arg[2][1] : 0;
  a62=(a62-a1);
  a45=(a45*a62);
  a10=(a10+a45);
  a35=(a35/a50);
  a63=(a56*a63);
  a45=(a13*a57);
  a63=(a63+a45);
  a73=(a66*a73);
  a45=(a5*a67);
  a73=(a73+a45);
  a63=(a63-a73);
  a81=(a75*a81);
  a76=(a21*a76);
  a81=(a81+a76);
  a63=(a63-a81);
  a88=(a82*a88);
  a83=(a24*a83);
  a88=(a88+a83);
  a63=(a63+a88);
  a63=(a63*a51);
  a100=(a56*a100);
  a88=(a13*a30);
  a100=(a100+a88);
  a104=(a66*a104);
  a88=(a5*a102);
  a104=(a104+a88);
  a100=(a100-a104);
  a107=(a75*a107);
  a103=(a21*a103);
  a107=(a107+a103);
  a100=(a100-a107);
  a109=(a82*a109);
  a106=(a24*a106);
  a109=(a109+a106);
  a100=(a100+a109);
  a100=(a100*a53);
  a63=(a63+a100);
  a59=(a56*a59);
  a100=(a13*a31);
  a59=(a59+a100);
  a69=(a66*a69);
  a100=(a5*a112);
  a69=(a69+a100);
  a59=(a59-a69);
  a75=(a75*a78);
  a21=(a21*a113);
  a75=(a75+a21);
  a59=(a59-a75);
  a82=(a82*a85);
  a24=(a24*a116);
  a82=(a82+a24);
  a59=(a59+a82);
  a59=(a59*a54);
  a63=(a63+a59);
  a119=(a56*a119);
  a13=(a13*a26);
  a119=(a119+a13);
  a122=(a66*a122);
  a5=(a5*a11);
  a122=(a122+a5);
  a119=(a119-a122);
  a119=(a119*a55);
  a63=(a63+a119);
  a63=(a63-a131);
  a131=arg[2]? arg[2][2] : 0;
  a63=(a63-a131);
  a35=(a35*a63);
  a10=(a10+a35);
  a15=(a15/a50);
  a64=(a56*a64);
  a57=(a14*a57);
  a64=(a64+a57);
  a74=(a66*a74);
  a67=(a8*a67);
  a74=(a74+a67);
  a64=(a64-a74);
  a64=(a64*a51);
  a101=(a56*a101);
  a30=(a14*a30);
  a101=(a101+a30);
  a105=(a66*a105);
  a102=(a8*a102);
  a105=(a105+a102);
  a101=(a101-a105);
  a101=(a101*a53);
  a64=(a64+a101);
  a111=(a56*a111);
  a31=(a14*a31);
  a111=(a111+a31);
  a115=(a66*a115);
  a112=(a8*a112);
  a115=(a115+a112);
  a111=(a111-a115);
  a111=(a111*a54);
  a64=(a64+a111);
  a56=(a56*a60);
  a14=(a14*a26);
  a56=(a56+a14);
  a66=(a66*a70);
  a8=(a8*a11);
  a66=(a66+a8);
  a56=(a56-a66);
  a56=(a56*a55);
  a64=(a64+a56);
  a64=(a64-a128);
  a128=arg[2]? arg[2][3] : 0;
  a64=(a64-a128);
  a15=(a15*a64);
  a10=(a10+a15);
  a10=(a10/a50);
  a44=(a44*a10);
  a18=(a18*a61);
  a46=(a46*a62);
  a18=(a18+a46);
  a16=(a16*a63);
  a18=(a18+a16);
  a47=(a47*a64);
  a18=(a18+a47);
  a44=(a44-a18);
  a38=(a38*a10);
  a39=(a39*a61);
  a25=(a25*a62);
  a39=(a39+a25);
  a17=(a17*a63);
  a39=(a39+a17);
  a9=(a9*a64);
  a39=(a39+a9);
  a38=(a38-a39);
  a38=(a38/a40);
  a49=(a49*a38);
  a44=(a44-a49);
  a36=(a36*a10);
  a34=(a34*a61);
  a33=(a33*a62);
  a34=(a34+a33);
  a41=(a41*a63);
  a34=(a34+a41);
  a37=(a37*a64);
  a34=(a34+a37);
  a36=(a36-a34);
  a43=(a43*a38);
  a36=(a36-a43);
  a36=(a36/a42);
  a48=(a48*a36);
  a44=(a44-a48);
  a44=(a44/a32);
  if (res[0]!=0) res[0][0]=a44;
  if (res[0]!=0) res[0][1]=a36;
  if (res[0]!=0) res[0][2]=a38;
  a10=(-a10);
  if (res[0]!=0) res[0][3]=a10;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors4DofFwdDynReflectedInertia(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors4DofFwdDynReflectedInertia_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors4DofFwdDynReflectedInertia_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void RevWithRotors4DofFwdDynReflectedInertia_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors4DofFwdDynReflectedInertia_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void RevWithRotors4DofFwdDynReflectedInertia_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void RevWithRotors4DofFwdDynReflectedInertia_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void RevWithRotors4DofFwdDynReflectedInertia_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int RevWithRotors4DofFwdDynReflectedInertia_n_in(void) { return 3;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int RevWithRotors4DofFwdDynReflectedInertia_n_out(void) { return 1;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real RevWithRotors4DofFwdDynReflectedInertia_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* RevWithRotors4DofFwdDynReflectedInertia_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* RevWithRotors4DofFwdDynReflectedInertia_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* RevWithRotors4DofFwdDynReflectedInertia_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* RevWithRotors4DofFwdDynReflectedInertia_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int RevWithRotors4DofFwdDynReflectedInertia_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


