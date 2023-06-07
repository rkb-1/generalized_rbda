function keypoints = keypoints_openchain_2dof(in1,in2)
%KEYPOINTS_OPENCHAIN_2DOF
%    KEYPOINTS = KEYPOINTS_OPENCHAIN_2DOF(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    02-Aug-2022 20:57:50

l1 = in2(1,:);
l2 = in2(2,:);
th1 = in1(1,:);
th2 = in1(2,:);
t2 = cos(th1);
t3 = sin(th1);
t4 = th1+th2;
t5 = l1.*t2;
t6 = l1.*t3;
t7 = -t5;
keypoints = reshape([0.0,0.0,0.0,t6,t7,0.0,t6+l2.*sin(t4),t7-l2.*cos(t4),0.0],[3,3]);
