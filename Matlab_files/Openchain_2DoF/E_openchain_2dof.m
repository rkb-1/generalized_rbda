function E = E_openchain_2dof(in1,in2)
%E_OPENCHAIN_2DOF
%    E = E_OPENCHAIN_2DOF(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    02-Aug-2022 20:57:50

I1 = in2(7,:);
I2 = in2(8,:);
I1rot = in2(9,:);
I2rot = in2(10,:);
N1 = in2(11,:);
N2 = in2(12,:);
c1 = in2(3,:);
c2 = in2(4,:);
dth1 = in1(3,:);
dth2 = in1(4,:);
g = in2(13,:);
l1 = in2(1,:);
m1 = in2(5,:);
m2 = in2(6,:);
th1 = in1(1,:);
th2 = in1(2,:);
t2 = cos(th1);
t3 = cos(th2);
t4 = c2.^2;
t5 = dth1.^2;
E = (I2.*(dth1+dth2).^2)./2.0+(t5.*(I1+I1rot.*N1.^2+c1.^2.*m1))./2.0+(m2.*(t4.*t5+dth2.^2.*t4+l1.^2.*t5+dth1.*dth2.*t4.*2.0+c2.*l1.*t3.*t5.*2.0+c2.*dth1.*dth2.*l1.*t3.*2.0))./2.0+(I2rot.*(dth1+N2.*dth2).^2)./2.0-g.*m2.*(l1.*t2+c2.*cos(th1+th2))-c1.*g.*m1.*t2;
