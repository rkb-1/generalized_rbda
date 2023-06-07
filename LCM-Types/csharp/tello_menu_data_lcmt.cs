/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

using System;
using System.Collections.Generic;
using System.IO;
using LCM.LCM;
 
namespace LCMTypes
{
    public sealed class tello_menu_data_lcmt : LCM.LCM.LCMEncodable
    {
        public bool cheater_mode;
        public long control_mode;
        public bool use_wbc;
        public bool use_rc;
        public bool display_heightmap;
        public bool display_path_planning;
        public bool display_potential_field;
        public bool display_traverability;
        public double[] Kd_body;
        public double[] Kd_cam;
        public double[] Kd_clm;
        public double[] Kd_foot;
        public double[] Kd_joint;
        public double[] Kd_ori;
        public double[] Kp_body;
        public double[] Kp_cam;
        public double[] Kp_clm;
        public double[] Kp_foot;
        public double[] Kp_joint;
        public double[] Kp_ori;
        public double[] Q_ang;
        public double[] Q_ori;
        public double[] Q_pos;
        public double[] Q_vel;
        public double[] RPC_H_phi0;
        public double[] RPC_H_r_rot;
        public double[] RPC_H_r_trans;
        public double[] RPC_H_theta0;
        public double[] RPC_Q_dp;
        public double[] RPC_Q_dtheta;
        public double[] RPC_Q_p;
        public double[] RPC_Q_theta;
        public double[] RPC_R_f;
        public double[] RPC_R_r;
        public double[] RPC_filter;
        public double[] RPC_gravity;
        public double[] RPC_inertia;
        public double RPC_interface_type;
        public double RPC_mass;
        public double RPC_mu;
        public double RPC_use_async_filt;
        public double RPC_use_pred_comp;
        public double RPC_visualize_pred;
        public double R_control;
        public double R_prev;
        public double[] Swing_Kd_cartesian;
        public double[] Swing_Kd_joint;
        public double[] Swing_Kp_cartesian;
        public double[] Swing_Kp_joint;
        public double[] Swing_step_offset;
        public double Swing_traj_height;
        public double Swing_use_tau_ff;
        public double acro_task;
        public double[] des_dp;
        public double[] des_dp_max;
        public double[] des_dtheta;
        public double[] des_dtheta_max;
        public double[] des_p;
        public double[] des_theta;
        public double[] des_theta_max;
        public double[] gait_disturbance;
        public double gait_max_leg_angle;
        public double gait_max_stance_time;
        public double gait_min_stance_time;
        public double gait_override;
        public double gait_period_time;
        public double[] gait_recovery;
        public double gait_switching_phase;
        public double gait_type;
        public double stance_legs;
 
        public tello_menu_data_lcmt()
        {
            Kd_body = new double[3];
            Kd_cam = new double[3];
            Kd_clm = new double[3];
            Kd_foot = new double[3];
            Kd_joint = new double[3];
            Kd_ori = new double[3];
            Kp_body = new double[3];
            Kp_cam = new double[3];
            Kp_clm = new double[3];
            Kp_foot = new double[3];
            Kp_joint = new double[3];
            Kp_ori = new double[3];
            Q_ang = new double[3];
            Q_ori = new double[3];
            Q_pos = new double[3];
            Q_vel = new double[3];
            RPC_H_phi0 = new double[3];
            RPC_H_r_rot = new double[3];
            RPC_H_r_trans = new double[3];
            RPC_H_theta0 = new double[3];
            RPC_Q_dp = new double[3];
            RPC_Q_dtheta = new double[3];
            RPC_Q_p = new double[3];
            RPC_Q_theta = new double[3];
            RPC_R_f = new double[3];
            RPC_R_r = new double[3];
            RPC_filter = new double[3];
            RPC_gravity = new double[3];
            RPC_inertia = new double[3];
            Swing_Kd_cartesian = new double[3];
            Swing_Kd_joint = new double[3];
            Swing_Kp_cartesian = new double[3];
            Swing_Kp_joint = new double[3];
            Swing_step_offset = new double[3];
            des_dp = new double[3];
            des_dp_max = new double[3];
            des_dtheta = new double[3];
            des_dtheta_max = new double[3];
            des_p = new double[3];
            des_theta = new double[3];
            des_theta_max = new double[3];
            gait_disturbance = new double[3];
            gait_recovery = new double[3];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0x86997f7be4843cebL;
 
        static tello_menu_data_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.tello_menu_data_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.tello_menu_data_lcmt");
            ulong hash = LCM_FINGERPRINT_BASE
                ;
            classes.RemoveAt(classes.Count - 1);
            return (hash<<1) + ((hash>>63)&1);
        }
 
        public void Encode(LCMDataOutputStream outs)
        {
            outs.Write((long) LCM_FINGERPRINT);
            _encodeRecursive(outs);
        }
 
        public void _encodeRecursive(LCMDataOutputStream outs)
        {
            outs.Write(this.cheater_mode); 
 
            outs.Write(this.control_mode); 
 
            outs.Write(this.use_wbc); 
 
            outs.Write(this.use_rc); 
 
            outs.Write(this.display_heightmap); 
 
            outs.Write(this.display_path_planning); 
 
            outs.Write(this.display_potential_field); 
 
            outs.Write(this.display_traverability); 
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kd_body[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kd_cam[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kd_clm[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kd_foot[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kd_joint[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kd_ori[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kp_body[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kp_cam[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kp_clm[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kp_foot[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kp_joint[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Kp_ori[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Q_ang[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Q_ori[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Q_pos[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Q_vel[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_H_phi0[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_H_r_rot[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_H_r_trans[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_H_theta0[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_Q_dp[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_Q_dtheta[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_Q_p[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_Q_theta[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_R_f[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_R_r[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_filter[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_gravity[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.RPC_inertia[a]); 
            }
 
            outs.Write(this.RPC_interface_type); 
 
            outs.Write(this.RPC_mass); 
 
            outs.Write(this.RPC_mu); 
 
            outs.Write(this.RPC_use_async_filt); 
 
            outs.Write(this.RPC_use_pred_comp); 
 
            outs.Write(this.RPC_visualize_pred); 
 
            outs.Write(this.R_control); 
 
            outs.Write(this.R_prev); 
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Swing_Kd_cartesian[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Swing_Kd_joint[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Swing_Kp_cartesian[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Swing_Kp_joint[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Swing_step_offset[a]); 
            }
 
            outs.Write(this.Swing_traj_height); 
 
            outs.Write(this.Swing_use_tau_ff); 
 
            outs.Write(this.acro_task); 
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.des_dp[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.des_dp_max[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.des_dtheta[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.des_dtheta_max[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.des_p[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.des_theta[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.des_theta_max[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.gait_disturbance[a]); 
            }
 
            outs.Write(this.gait_max_leg_angle); 
 
            outs.Write(this.gait_max_stance_time); 
 
            outs.Write(this.gait_min_stance_time); 
 
            outs.Write(this.gait_override); 
 
            outs.Write(this.gait_period_time); 
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.gait_recovery[a]); 
            }
 
            outs.Write(this.gait_switching_phase); 
 
            outs.Write(this.gait_type); 
 
            outs.Write(this.stance_legs); 
 
        }
 
        public tello_menu_data_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public tello_menu_data_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.tello_menu_data_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.tello_menu_data_lcmt o = new LCMTypes.tello_menu_data_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.cheater_mode = ins.ReadBoolean();
 
            this.control_mode = ins.ReadInt64();
 
            this.use_wbc = ins.ReadBoolean();
 
            this.use_rc = ins.ReadBoolean();
 
            this.display_heightmap = ins.ReadBoolean();
 
            this.display_path_planning = ins.ReadBoolean();
 
            this.display_potential_field = ins.ReadBoolean();
 
            this.display_traverability = ins.ReadBoolean();
 
            this.Kd_body = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kd_body[a] = ins.ReadDouble();
            }
 
            this.Kd_cam = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kd_cam[a] = ins.ReadDouble();
            }
 
            this.Kd_clm = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kd_clm[a] = ins.ReadDouble();
            }
 
            this.Kd_foot = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kd_foot[a] = ins.ReadDouble();
            }
 
            this.Kd_joint = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kd_joint[a] = ins.ReadDouble();
            }
 
            this.Kd_ori = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kd_ori[a] = ins.ReadDouble();
            }
 
            this.Kp_body = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kp_body[a] = ins.ReadDouble();
            }
 
            this.Kp_cam = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kp_cam[a] = ins.ReadDouble();
            }
 
            this.Kp_clm = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kp_clm[a] = ins.ReadDouble();
            }
 
            this.Kp_foot = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kp_foot[a] = ins.ReadDouble();
            }
 
            this.Kp_joint = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kp_joint[a] = ins.ReadDouble();
            }
 
            this.Kp_ori = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Kp_ori[a] = ins.ReadDouble();
            }
 
            this.Q_ang = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Q_ang[a] = ins.ReadDouble();
            }
 
            this.Q_ori = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Q_ori[a] = ins.ReadDouble();
            }
 
            this.Q_pos = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Q_pos[a] = ins.ReadDouble();
            }
 
            this.Q_vel = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Q_vel[a] = ins.ReadDouble();
            }
 
            this.RPC_H_phi0 = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_H_phi0[a] = ins.ReadDouble();
            }
 
            this.RPC_H_r_rot = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_H_r_rot[a] = ins.ReadDouble();
            }
 
            this.RPC_H_r_trans = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_H_r_trans[a] = ins.ReadDouble();
            }
 
            this.RPC_H_theta0 = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_H_theta0[a] = ins.ReadDouble();
            }
 
            this.RPC_Q_dp = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_Q_dp[a] = ins.ReadDouble();
            }
 
            this.RPC_Q_dtheta = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_Q_dtheta[a] = ins.ReadDouble();
            }
 
            this.RPC_Q_p = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_Q_p[a] = ins.ReadDouble();
            }
 
            this.RPC_Q_theta = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_Q_theta[a] = ins.ReadDouble();
            }
 
            this.RPC_R_f = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_R_f[a] = ins.ReadDouble();
            }
 
            this.RPC_R_r = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_R_r[a] = ins.ReadDouble();
            }
 
            this.RPC_filter = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_filter[a] = ins.ReadDouble();
            }
 
            this.RPC_gravity = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_gravity[a] = ins.ReadDouble();
            }
 
            this.RPC_inertia = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.RPC_inertia[a] = ins.ReadDouble();
            }
 
            this.RPC_interface_type = ins.ReadDouble();
 
            this.RPC_mass = ins.ReadDouble();
 
            this.RPC_mu = ins.ReadDouble();
 
            this.RPC_use_async_filt = ins.ReadDouble();
 
            this.RPC_use_pred_comp = ins.ReadDouble();
 
            this.RPC_visualize_pred = ins.ReadDouble();
 
            this.R_control = ins.ReadDouble();
 
            this.R_prev = ins.ReadDouble();
 
            this.Swing_Kd_cartesian = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Swing_Kd_cartesian[a] = ins.ReadDouble();
            }
 
            this.Swing_Kd_joint = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Swing_Kd_joint[a] = ins.ReadDouble();
            }
 
            this.Swing_Kp_cartesian = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Swing_Kp_cartesian[a] = ins.ReadDouble();
            }
 
            this.Swing_Kp_joint = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Swing_Kp_joint[a] = ins.ReadDouble();
            }
 
            this.Swing_step_offset = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Swing_step_offset[a] = ins.ReadDouble();
            }
 
            this.Swing_traj_height = ins.ReadDouble();
 
            this.Swing_use_tau_ff = ins.ReadDouble();
 
            this.acro_task = ins.ReadDouble();
 
            this.des_dp = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.des_dp[a] = ins.ReadDouble();
            }
 
            this.des_dp_max = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.des_dp_max[a] = ins.ReadDouble();
            }
 
            this.des_dtheta = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.des_dtheta[a] = ins.ReadDouble();
            }
 
            this.des_dtheta_max = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.des_dtheta_max[a] = ins.ReadDouble();
            }
 
            this.des_p = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.des_p[a] = ins.ReadDouble();
            }
 
            this.des_theta = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.des_theta[a] = ins.ReadDouble();
            }
 
            this.des_theta_max = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.des_theta_max[a] = ins.ReadDouble();
            }
 
            this.gait_disturbance = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.gait_disturbance[a] = ins.ReadDouble();
            }
 
            this.gait_max_leg_angle = ins.ReadDouble();
 
            this.gait_max_stance_time = ins.ReadDouble();
 
            this.gait_min_stance_time = ins.ReadDouble();
 
            this.gait_override = ins.ReadDouble();
 
            this.gait_period_time = ins.ReadDouble();
 
            this.gait_recovery = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.gait_recovery[a] = ins.ReadDouble();
            }
 
            this.gait_switching_phase = ins.ReadDouble();
 
            this.gait_type = ins.ReadDouble();
 
            this.stance_legs = ins.ReadDouble();
 
        }
 
        public LCMTypes.tello_menu_data_lcmt Copy()
        {
            LCMTypes.tello_menu_data_lcmt outobj = new LCMTypes.tello_menu_data_lcmt();
            outobj.cheater_mode = this.cheater_mode;
 
            outobj.control_mode = this.control_mode;
 
            outobj.use_wbc = this.use_wbc;
 
            outobj.use_rc = this.use_rc;
 
            outobj.display_heightmap = this.display_heightmap;
 
            outobj.display_path_planning = this.display_path_planning;
 
            outobj.display_potential_field = this.display_potential_field;
 
            outobj.display_traverability = this.display_traverability;
 
            outobj.Kd_body = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kd_body[a] = this.Kd_body[a];
            }
 
            outobj.Kd_cam = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kd_cam[a] = this.Kd_cam[a];
            }
 
            outobj.Kd_clm = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kd_clm[a] = this.Kd_clm[a];
            }
 
            outobj.Kd_foot = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kd_foot[a] = this.Kd_foot[a];
            }
 
            outobj.Kd_joint = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kd_joint[a] = this.Kd_joint[a];
            }
 
            outobj.Kd_ori = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kd_ori[a] = this.Kd_ori[a];
            }
 
            outobj.Kp_body = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kp_body[a] = this.Kp_body[a];
            }
 
            outobj.Kp_cam = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kp_cam[a] = this.Kp_cam[a];
            }
 
            outobj.Kp_clm = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kp_clm[a] = this.Kp_clm[a];
            }
 
            outobj.Kp_foot = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kp_foot[a] = this.Kp_foot[a];
            }
 
            outobj.Kp_joint = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kp_joint[a] = this.Kp_joint[a];
            }
 
            outobj.Kp_ori = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Kp_ori[a] = this.Kp_ori[a];
            }
 
            outobj.Q_ang = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Q_ang[a] = this.Q_ang[a];
            }
 
            outobj.Q_ori = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Q_ori[a] = this.Q_ori[a];
            }
 
            outobj.Q_pos = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Q_pos[a] = this.Q_pos[a];
            }
 
            outobj.Q_vel = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Q_vel[a] = this.Q_vel[a];
            }
 
            outobj.RPC_H_phi0 = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_H_phi0[a] = this.RPC_H_phi0[a];
            }
 
            outobj.RPC_H_r_rot = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_H_r_rot[a] = this.RPC_H_r_rot[a];
            }
 
            outobj.RPC_H_r_trans = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_H_r_trans[a] = this.RPC_H_r_trans[a];
            }
 
            outobj.RPC_H_theta0 = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_H_theta0[a] = this.RPC_H_theta0[a];
            }
 
            outobj.RPC_Q_dp = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_Q_dp[a] = this.RPC_Q_dp[a];
            }
 
            outobj.RPC_Q_dtheta = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_Q_dtheta[a] = this.RPC_Q_dtheta[a];
            }
 
            outobj.RPC_Q_p = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_Q_p[a] = this.RPC_Q_p[a];
            }
 
            outobj.RPC_Q_theta = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_Q_theta[a] = this.RPC_Q_theta[a];
            }
 
            outobj.RPC_R_f = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_R_f[a] = this.RPC_R_f[a];
            }
 
            outobj.RPC_R_r = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_R_r[a] = this.RPC_R_r[a];
            }
 
            outobj.RPC_filter = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_filter[a] = this.RPC_filter[a];
            }
 
            outobj.RPC_gravity = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_gravity[a] = this.RPC_gravity[a];
            }
 
            outobj.RPC_inertia = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.RPC_inertia[a] = this.RPC_inertia[a];
            }
 
            outobj.RPC_interface_type = this.RPC_interface_type;
 
            outobj.RPC_mass = this.RPC_mass;
 
            outobj.RPC_mu = this.RPC_mu;
 
            outobj.RPC_use_async_filt = this.RPC_use_async_filt;
 
            outobj.RPC_use_pred_comp = this.RPC_use_pred_comp;
 
            outobj.RPC_visualize_pred = this.RPC_visualize_pred;
 
            outobj.R_control = this.R_control;
 
            outobj.R_prev = this.R_prev;
 
            outobj.Swing_Kd_cartesian = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Swing_Kd_cartesian[a] = this.Swing_Kd_cartesian[a];
            }
 
            outobj.Swing_Kd_joint = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Swing_Kd_joint[a] = this.Swing_Kd_joint[a];
            }
 
            outobj.Swing_Kp_cartesian = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Swing_Kp_cartesian[a] = this.Swing_Kp_cartesian[a];
            }
 
            outobj.Swing_Kp_joint = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Swing_Kp_joint[a] = this.Swing_Kp_joint[a];
            }
 
            outobj.Swing_step_offset = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Swing_step_offset[a] = this.Swing_step_offset[a];
            }
 
            outobj.Swing_traj_height = this.Swing_traj_height;
 
            outobj.Swing_use_tau_ff = this.Swing_use_tau_ff;
 
            outobj.acro_task = this.acro_task;
 
            outobj.des_dp = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.des_dp[a] = this.des_dp[a];
            }
 
            outobj.des_dp_max = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.des_dp_max[a] = this.des_dp_max[a];
            }
 
            outobj.des_dtheta = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.des_dtheta[a] = this.des_dtheta[a];
            }
 
            outobj.des_dtheta_max = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.des_dtheta_max[a] = this.des_dtheta_max[a];
            }
 
            outobj.des_p = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.des_p[a] = this.des_p[a];
            }
 
            outobj.des_theta = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.des_theta[a] = this.des_theta[a];
            }
 
            outobj.des_theta_max = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.des_theta_max[a] = this.des_theta_max[a];
            }
 
            outobj.gait_disturbance = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.gait_disturbance[a] = this.gait_disturbance[a];
            }
 
            outobj.gait_max_leg_angle = this.gait_max_leg_angle;
 
            outobj.gait_max_stance_time = this.gait_max_stance_time;
 
            outobj.gait_min_stance_time = this.gait_min_stance_time;
 
            outobj.gait_override = this.gait_override;
 
            outobj.gait_period_time = this.gait_period_time;
 
            outobj.gait_recovery = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.gait_recovery[a] = this.gait_recovery[a];
            }
 
            outobj.gait_switching_phase = this.gait_switching_phase;
 
            outobj.gait_type = this.gait_type;
 
            outobj.stance_legs = this.stance_legs;
 
            return outobj;
        }
    }
}

