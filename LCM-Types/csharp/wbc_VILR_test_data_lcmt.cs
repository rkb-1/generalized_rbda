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
    public sealed class wbc_VILR_test_data_lcmt : LCM.LCM.LCMEncodable
    {
        public int[] contact_est;
        public float[] Wr_des;
        public float[] Wr;
        public float[] Wr_est;
        public float[] deltas;
        public float[] body_ori_cmd;
        public float[] L_cmd;
        public float[] Ld_cmd;
        public float[] com_vel_cmd;
        public float[] com_pos_cmd;
        public float[] com_acc_cmd;
        public float[] com_pos;
        public float[] com_vel;
        public float[] body_ori;
        public float[] L;
        public float[] body_ang_vel;
        public float[] foot_pos_cmd;
        public float[] foot_vel_cmd;
        public float[] foot_acc_cmd;
        public float[] foot_acc_numeric;
        public float[] foot_pos;
        public float[] foot_vel;
        public float[] foot_local_pos;
        public float[] foot_local_vel;
        public float[] jpos_cmd;
        public float[] jvel_cmd;
        public float[] jacc_cmd;
        public float[] jpos;
        public float[] jvel;
        public float[] rpy;
        public float[] v_des_robot;
        public float yaw_des;
        public float yaw_turn_rate;
 
        public wbc_VILR_test_data_lcmt()
        {
            contact_est = new int[4];
            Wr_des = new float[10];
            Wr = new float[10];
            Wr_est = new float[10];
            deltas = new float[16];
            body_ori_cmd = new float[4];
            L_cmd = new float[3];
            Ld_cmd = new float[3];
            com_vel_cmd = new float[3];
            com_pos_cmd = new float[3];
            com_acc_cmd = new float[3];
            com_pos = new float[3];
            com_vel = new float[3];
            body_ori = new float[4];
            L = new float[3];
            body_ang_vel = new float[3];
            foot_pos_cmd = new float[12];
            foot_vel_cmd = new float[12];
            foot_acc_cmd = new float[12];
            foot_acc_numeric = new float[12];
            foot_pos = new float[12];
            foot_vel = new float[12];
            foot_local_pos = new float[12];
            foot_local_vel = new float[12];
            jpos_cmd = new float[16];
            jvel_cmd = new float[16];
            jacc_cmd = new float[16];
            jpos = new float[16];
            jvel = new float[16];
            rpy = new float[3];
            v_des_robot = new float[3];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0x73b5cd7835e138f9L;
 
        static wbc_VILR_test_data_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.wbc_VILR_test_data_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.wbc_VILR_test_data_lcmt");
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
            for (int a = 0; a < 4; a++) {
                outs.Write(this.contact_est[a]); 
            }
 
            for (int a = 0; a < 10; a++) {
                outs.Write(this.Wr_des[a]); 
            }
 
            for (int a = 0; a < 10; a++) {
                outs.Write(this.Wr[a]); 
            }
 
            for (int a = 0; a < 10; a++) {
                outs.Write(this.Wr_est[a]); 
            }
 
            for (int a = 0; a < 16; a++) {
                outs.Write(this.deltas[a]); 
            }
 
            for (int a = 0; a < 4; a++) {
                outs.Write(this.body_ori_cmd[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.L_cmd[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Ld_cmd[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.com_vel_cmd[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.com_pos_cmd[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.com_acc_cmd[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.com_pos[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.com_vel[a]); 
            }
 
            for (int a = 0; a < 4; a++) {
                outs.Write(this.body_ori[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.L[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.body_ang_vel[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.foot_pos_cmd[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.foot_vel_cmd[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.foot_acc_cmd[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.foot_acc_numeric[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.foot_pos[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.foot_vel[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.foot_local_pos[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.foot_local_vel[a]); 
            }
 
            for (int a = 0; a < 16; a++) {
                outs.Write(this.jpos_cmd[a]); 
            }
 
            for (int a = 0; a < 16; a++) {
                outs.Write(this.jvel_cmd[a]); 
            }
 
            for (int a = 0; a < 16; a++) {
                outs.Write(this.jacc_cmd[a]); 
            }
 
            for (int a = 0; a < 16; a++) {
                outs.Write(this.jpos[a]); 
            }
 
            for (int a = 0; a < 16; a++) {
                outs.Write(this.jvel[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.rpy[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.v_des_robot[a]); 
            }
 
            outs.Write(this.yaw_des); 
 
            outs.Write(this.yaw_turn_rate); 
 
        }
 
        public wbc_VILR_test_data_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public wbc_VILR_test_data_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.wbc_VILR_test_data_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.wbc_VILR_test_data_lcmt o = new LCMTypes.wbc_VILR_test_data_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.contact_est = new int[(int) 4];
            for (int a = 0; a < 4; a++) {
                this.contact_est[a] = ins.ReadInt32();
            }
 
            this.Wr_des = new float[(int) 10];
            for (int a = 0; a < 10; a++) {
                this.Wr_des[a] = ins.ReadSingle();
            }
 
            this.Wr = new float[(int) 10];
            for (int a = 0; a < 10; a++) {
                this.Wr[a] = ins.ReadSingle();
            }
 
            this.Wr_est = new float[(int) 10];
            for (int a = 0; a < 10; a++) {
                this.Wr_est[a] = ins.ReadSingle();
            }
 
            this.deltas = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                this.deltas[a] = ins.ReadSingle();
            }
 
            this.body_ori_cmd = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                this.body_ori_cmd[a] = ins.ReadSingle();
            }
 
            this.L_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.L_cmd[a] = ins.ReadSingle();
            }
 
            this.Ld_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Ld_cmd[a] = ins.ReadSingle();
            }
 
            this.com_vel_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.com_vel_cmd[a] = ins.ReadSingle();
            }
 
            this.com_pos_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.com_pos_cmd[a] = ins.ReadSingle();
            }
 
            this.com_acc_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.com_acc_cmd[a] = ins.ReadSingle();
            }
 
            this.com_pos = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.com_pos[a] = ins.ReadSingle();
            }
 
            this.com_vel = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.com_vel[a] = ins.ReadSingle();
            }
 
            this.body_ori = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                this.body_ori[a] = ins.ReadSingle();
            }
 
            this.L = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.L[a] = ins.ReadSingle();
            }
 
            this.body_ang_vel = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.body_ang_vel[a] = ins.ReadSingle();
            }
 
            this.foot_pos_cmd = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.foot_pos_cmd[a] = ins.ReadSingle();
            }
 
            this.foot_vel_cmd = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.foot_vel_cmd[a] = ins.ReadSingle();
            }
 
            this.foot_acc_cmd = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.foot_acc_cmd[a] = ins.ReadSingle();
            }
 
            this.foot_acc_numeric = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.foot_acc_numeric[a] = ins.ReadSingle();
            }
 
            this.foot_pos = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.foot_pos[a] = ins.ReadSingle();
            }
 
            this.foot_vel = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.foot_vel[a] = ins.ReadSingle();
            }
 
            this.foot_local_pos = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.foot_local_pos[a] = ins.ReadSingle();
            }
 
            this.foot_local_vel = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.foot_local_vel[a] = ins.ReadSingle();
            }
 
            this.jpos_cmd = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                this.jpos_cmd[a] = ins.ReadSingle();
            }
 
            this.jvel_cmd = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                this.jvel_cmd[a] = ins.ReadSingle();
            }
 
            this.jacc_cmd = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                this.jacc_cmd[a] = ins.ReadSingle();
            }
 
            this.jpos = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                this.jpos[a] = ins.ReadSingle();
            }
 
            this.jvel = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                this.jvel[a] = ins.ReadSingle();
            }
 
            this.rpy = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.rpy[a] = ins.ReadSingle();
            }
 
            this.v_des_robot = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.v_des_robot[a] = ins.ReadSingle();
            }
 
            this.yaw_des = ins.ReadSingle();
 
            this.yaw_turn_rate = ins.ReadSingle();
 
        }
 
        public LCMTypes.wbc_VILR_test_data_lcmt Copy()
        {
            LCMTypes.wbc_VILR_test_data_lcmt outobj = new LCMTypes.wbc_VILR_test_data_lcmt();
            outobj.contact_est = new int[(int) 4];
            for (int a = 0; a < 4; a++) {
                outobj.contact_est[a] = this.contact_est[a];
            }
 
            outobj.Wr_des = new float[(int) 10];
            for (int a = 0; a < 10; a++) {
                outobj.Wr_des[a] = this.Wr_des[a];
            }
 
            outobj.Wr = new float[(int) 10];
            for (int a = 0; a < 10; a++) {
                outobj.Wr[a] = this.Wr[a];
            }
 
            outobj.Wr_est = new float[(int) 10];
            for (int a = 0; a < 10; a++) {
                outobj.Wr_est[a] = this.Wr_est[a];
            }
 
            outobj.deltas = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                outobj.deltas[a] = this.deltas[a];
            }
 
            outobj.body_ori_cmd = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                outobj.body_ori_cmd[a] = this.body_ori_cmd[a];
            }
 
            outobj.L_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.L_cmd[a] = this.L_cmd[a];
            }
 
            outobj.Ld_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Ld_cmd[a] = this.Ld_cmd[a];
            }
 
            outobj.com_vel_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.com_vel_cmd[a] = this.com_vel_cmd[a];
            }
 
            outobj.com_pos_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.com_pos_cmd[a] = this.com_pos_cmd[a];
            }
 
            outobj.com_acc_cmd = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.com_acc_cmd[a] = this.com_acc_cmd[a];
            }
 
            outobj.com_pos = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.com_pos[a] = this.com_pos[a];
            }
 
            outobj.com_vel = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.com_vel[a] = this.com_vel[a];
            }
 
            outobj.body_ori = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                outobj.body_ori[a] = this.body_ori[a];
            }
 
            outobj.L = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.L[a] = this.L[a];
            }
 
            outobj.body_ang_vel = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.body_ang_vel[a] = this.body_ang_vel[a];
            }
 
            outobj.foot_pos_cmd = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.foot_pos_cmd[a] = this.foot_pos_cmd[a];
            }
 
            outobj.foot_vel_cmd = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.foot_vel_cmd[a] = this.foot_vel_cmd[a];
            }
 
            outobj.foot_acc_cmd = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.foot_acc_cmd[a] = this.foot_acc_cmd[a];
            }
 
            outobj.foot_acc_numeric = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.foot_acc_numeric[a] = this.foot_acc_numeric[a];
            }
 
            outobj.foot_pos = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.foot_pos[a] = this.foot_pos[a];
            }
 
            outobj.foot_vel = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.foot_vel[a] = this.foot_vel[a];
            }
 
            outobj.foot_local_pos = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.foot_local_pos[a] = this.foot_local_pos[a];
            }
 
            outobj.foot_local_vel = new float[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.foot_local_vel[a] = this.foot_local_vel[a];
            }
 
            outobj.jpos_cmd = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                outobj.jpos_cmd[a] = this.jpos_cmd[a];
            }
 
            outobj.jvel_cmd = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                outobj.jvel_cmd[a] = this.jvel_cmd[a];
            }
 
            outobj.jacc_cmd = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                outobj.jacc_cmd[a] = this.jacc_cmd[a];
            }
 
            outobj.jpos = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                outobj.jpos[a] = this.jpos[a];
            }
 
            outobj.jvel = new float[(int) 16];
            for (int a = 0; a < 16; a++) {
                outobj.jvel[a] = this.jvel[a];
            }
 
            outobj.rpy = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.rpy[a] = this.rpy[a];
            }
 
            outobj.v_des_robot = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.v_des_robot[a] = this.v_des_robot[a];
            }
 
            outobj.yaw_des = this.yaw_des;
 
            outobj.yaw_turn_rate = this.yaw_turn_rate;
 
            return outobj;
        }
    }
}

