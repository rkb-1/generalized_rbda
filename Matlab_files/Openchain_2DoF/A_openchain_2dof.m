function A = A_openchain_2dof(in1,in2)
%A_OPENCHAIN_2DOF
%    A = A_OPENCHAIN_2DOF(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    02-Aug-2022 20:57:49

I1 = in2(7,:);
I2 = in2(8,:);
I1rot = in2(9,:);
I2rot = in2(10,:);
N1 = in2(11,:);
N2 = in2(12,:);
c1 = in2(3,:);
c2 = in2(4,:);
l1 = in2(1,:);
m1 = in2(5,:);
m2 = in2(6,:);
th2 = in1(2,:);
t2 = cos(th2);
t3 = c2.^2;
t4 = I2rot.*N2;
t5 = t3.*2.0;
t6 = c2.*l1.*t2.*2.0;
t7 = t5+t6;
t8 = (m2.*t7)./2.0;
t9 = I2+t4+t8;
A = reshape([I1+I2+I2rot+I1rot.*N1.^2+(m2.*(t5+l1.^2.*2.0+c2.*l1.*t2.*4.0))./2.0+c1.^2.*m1,t9,t9,I2+N2.*t4+m2.*t3],[2,2]);
