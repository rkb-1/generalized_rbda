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
    public sealed class qp_controller_data_lcmt : LCM.LCM.LCMEncodable
    {
        public double exit_flag;
        public double nWSR;
        public double cpu_time_microseconds;
        public double[] xOpt;
        public double[] p_des;
        public double[] p_act;
        public double[] v_des;
        public double[] v_act;
        public double[] O_err;
        public double[] omegab_des;
        public double[] omegab_act;
        public double[] lbA;
        public double[] ubA;
        public double[] C_times_f;
        public double[] b_control;
        public double[] b_control_Opt;
        public double active;
        public double[] pfeet_des;
        public double[] pfeet_act;
 
        public qp_controller_data_lcmt()
        {
            xOpt = new double[12];
            p_des = new double[3];
            p_act = new double[3];
            v_des = new double[3];
            v_act = new double[3];
            O_err = new double[3];
            omegab_des = new double[3];
            omegab_act = new double[3];
            lbA = new double[20];
            ubA = new double[20];
            C_times_f = new double[20];
            b_control = new double[6];
            b_control_Opt = new double[6];
            pfeet_des = new double[12];
            pfeet_act = new double[12];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0xa885737200dec04eL;
 
        static qp_controller_data_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.qp_controller_data_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.qp_controller_data_lcmt");
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
            outs.Write(this.exit_flag); 
 
            outs.Write(this.nWSR); 
 
            outs.Write(this.cpu_time_microseconds); 
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.xOpt[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.p_des[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.p_act[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.v_des[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.v_act[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.O_err[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.omegab_des[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.omegab_act[a]); 
            }
 
            for (int a = 0; a < 20; a++) {
                outs.Write(this.lbA[a]); 
            }
 
            for (int a = 0; a < 20; a++) {
                outs.Write(this.ubA[a]); 
            }
 
            for (int a = 0; a < 20; a++) {
                outs.Write(this.C_times_f[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.b_control[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.b_control_Opt[a]); 
            }
 
            outs.Write(this.active); 
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.pfeet_des[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.pfeet_act[a]); 
            }
 
        }
 
        public qp_controller_data_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public qp_controller_data_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.qp_controller_data_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.qp_controller_data_lcmt o = new LCMTypes.qp_controller_data_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.exit_flag = ins.ReadDouble();
 
            this.nWSR = ins.ReadDouble();
 
            this.cpu_time_microseconds = ins.ReadDouble();
 
            this.xOpt = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.xOpt[a] = ins.ReadDouble();
            }
 
            this.p_des = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.p_des[a] = ins.ReadDouble();
            }
 
            this.p_act = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.p_act[a] = ins.ReadDouble();
            }
 
            this.v_des = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.v_des[a] = ins.ReadDouble();
            }
 
            this.v_act = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.v_act[a] = ins.ReadDouble();
            }
 
            this.O_err = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.O_err[a] = ins.ReadDouble();
            }
 
            this.omegab_des = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.omegab_des[a] = ins.ReadDouble();
            }
 
            this.omegab_act = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.omegab_act[a] = ins.ReadDouble();
            }
 
            this.lbA = new double[(int) 20];
            for (int a = 0; a < 20; a++) {
                this.lbA[a] = ins.ReadDouble();
            }
 
            this.ubA = new double[(int) 20];
            for (int a = 0; a < 20; a++) {
                this.ubA[a] = ins.ReadDouble();
            }
 
            this.C_times_f = new double[(int) 20];
            for (int a = 0; a < 20; a++) {
                this.C_times_f[a] = ins.ReadDouble();
            }
 
            this.b_control = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.b_control[a] = ins.ReadDouble();
            }
 
            this.b_control_Opt = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.b_control_Opt[a] = ins.ReadDouble();
            }
 
            this.active = ins.ReadDouble();
 
            this.pfeet_des = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.pfeet_des[a] = ins.ReadDouble();
            }
 
            this.pfeet_act = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.pfeet_act[a] = ins.ReadDouble();
            }
 
        }
 
        public LCMTypes.qp_controller_data_lcmt Copy()
        {
            LCMTypes.qp_controller_data_lcmt outobj = new LCMTypes.qp_controller_data_lcmt();
            outobj.exit_flag = this.exit_flag;
 
            outobj.nWSR = this.nWSR;
 
            outobj.cpu_time_microseconds = this.cpu_time_microseconds;
 
            outobj.xOpt = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.xOpt[a] = this.xOpt[a];
            }
 
            outobj.p_des = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.p_des[a] = this.p_des[a];
            }
 
            outobj.p_act = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.p_act[a] = this.p_act[a];
            }
 
            outobj.v_des = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.v_des[a] = this.v_des[a];
            }
 
            outobj.v_act = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.v_act[a] = this.v_act[a];
            }
 
            outobj.O_err = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.O_err[a] = this.O_err[a];
            }
 
            outobj.omegab_des = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.omegab_des[a] = this.omegab_des[a];
            }
 
            outobj.omegab_act = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.omegab_act[a] = this.omegab_act[a];
            }
 
            outobj.lbA = new double[(int) 20];
            for (int a = 0; a < 20; a++) {
                outobj.lbA[a] = this.lbA[a];
            }
 
            outobj.ubA = new double[(int) 20];
            for (int a = 0; a < 20; a++) {
                outobj.ubA[a] = this.ubA[a];
            }
 
            outobj.C_times_f = new double[(int) 20];
            for (int a = 0; a < 20; a++) {
                outobj.C_times_f[a] = this.C_times_f[a];
            }
 
            outobj.b_control = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.b_control[a] = this.b_control[a];
            }
 
            outobj.b_control_Opt = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.b_control_Opt[a] = this.b_control_Opt[a];
            }
 
            outobj.active = this.active;
 
            outobj.pfeet_des = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.pfeet_des[a] = this.pfeet_des[a];
            }
 
            outobj.pfeet_act = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.pfeet_act[a] = this.pfeet_act[a];
            }
 
            return outobj;
        }
    }
}

