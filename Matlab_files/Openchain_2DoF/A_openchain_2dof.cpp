  t2 = cos(th2);
  t3 = c2*c2;
  t4 = I2rot*N2;
  t5 = t3*2.0;
  t6 = c2*l1*t2*2.0;
  t7 = t5+t6;
  t8 = (m2*t7)/2.0;
  t9 = I2+t4+t8;
  A0[0][0] = I1+I2+I2rot+I1rot*(N1*N1)+(m2*(t5+(l1*l1)*2.0+c2*l1*t2*4.0))/2.0+(c1*c1)*m1;
  A0[0][1] = t9;
  A0[1][0] = t9;
  A0[1][1] = I2+N2*t4+m2*t3;
