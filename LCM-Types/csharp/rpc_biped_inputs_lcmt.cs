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
    public sealed class rpc_biped_inputs_lcmt : LCM.LCM.LCMEncodable
    {
        public double[] current_state;
        public double[] p_foot0;
        public double[] r_hip;
        public double[] x_desired;
        public double[] gait_enabled;
        public double[] phase_variable;
        public double[] period_time;
        public double[] time_swing;
        public double mass;
        public double[] inertia;
        public double[] gravity;
        public double[] mu;
        public double[] z_g;
        public double[] Q;
        public double[] R;
        public double[] K_HX;
 
        public rpc_biped_inputs_lcmt()
        {
            current_state = new double[12];
            p_foot0 = new double[6];
            r_hip = new double[6];
            x_desired = new double[72];
            gait_enabled = new double[2];
            phase_variable = new double[2];
            period_time = new double[2];
            time_swing = new double[2];
            inertia = new double[3];
            gravity = new double[3];
            mu = new double[2];
            z_g = new double[2];
            Q = new double[12];
            R = new double[12];
            K_HX = new double[30];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0x86acbd5466dd01d5L;
 
        static rpc_biped_inputs_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.rpc_biped_inputs_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.rpc_biped_inputs_lcmt");
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
            for (int a = 0; a < 12; a++) {
                outs.Write(this.current_state[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.p_foot0[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.r_hip[a]); 
            }
 
            for (int a = 0; a < 72; a++) {
                outs.Write(this.x_desired[a]); 
            }
 
            for (int a = 0; a < 2; a++) {
                outs.Write(this.gait_enabled[a]); 
            }
 
            for (int a = 0; a < 2; a++) {
                outs.Write(this.phase_variable[a]); 
            }
 
            for (int a = 0; a < 2; a++) {
                outs.Write(this.period_time[a]); 
            }
 
            for (int a = 0; a < 2; a++) {
                outs.Write(this.time_swing[a]); 
            }
 
            outs.Write(this.mass); 
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.inertia[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.gravity[a]); 
            }
 
            for (int a = 0; a < 2; a++) {
                outs.Write(this.mu[a]); 
            }
 
            for (int a = 0; a < 2; a++) {
                outs.Write(this.z_g[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.Q[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.R[a]); 
            }
 
            for (int a = 0; a < 30; a++) {
                outs.Write(this.K_HX[a]); 
            }
 
        }
 
        public rpc_biped_inputs_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public rpc_biped_inputs_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.rpc_biped_inputs_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.rpc_biped_inputs_lcmt o = new LCMTypes.rpc_biped_inputs_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.current_state = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.current_state[a] = ins.ReadDouble();
            }
 
            this.p_foot0 = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.p_foot0[a] = ins.ReadDouble();
            }
 
            this.r_hip = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.r_hip[a] = ins.ReadDouble();
            }
 
            this.x_desired = new double[(int) 72];
            for (int a = 0; a < 72; a++) {
                this.x_desired[a] = ins.ReadDouble();
            }
 
            this.gait_enabled = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                this.gait_enabled[a] = ins.ReadDouble();
            }
 
            this.phase_variable = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                this.phase_variable[a] = ins.ReadDouble();
            }
 
            this.period_time = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                this.period_time[a] = ins.ReadDouble();
            }
 
            this.time_swing = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                this.time_swing[a] = ins.ReadDouble();
            }
 
            this.mass = ins.ReadDouble();
 
            this.inertia = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.inertia[a] = ins.ReadDouble();
            }
 
            this.gravity = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.gravity[a] = ins.ReadDouble();
            }
 
            this.mu = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                this.mu[a] = ins.ReadDouble();
            }
 
            this.z_g = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                this.z_g[a] = ins.ReadDouble();
            }
 
            this.Q = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.Q[a] = ins.ReadDouble();
            }
 
            this.R = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.R[a] = ins.ReadDouble();
            }
 
            this.K_HX = new double[(int) 30];
            for (int a = 0; a < 30; a++) {
                this.K_HX[a] = ins.ReadDouble();
            }
 
        }
 
        public LCMTypes.rpc_biped_inputs_lcmt Copy()
        {
            LCMTypes.rpc_biped_inputs_lcmt outobj = new LCMTypes.rpc_biped_inputs_lcmt();
            outobj.current_state = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.current_state[a] = this.current_state[a];
            }
 
            outobj.p_foot0 = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.p_foot0[a] = this.p_foot0[a];
            }
 
            outobj.r_hip = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.r_hip[a] = this.r_hip[a];
            }
 
            outobj.x_desired = new double[(int) 72];
            for (int a = 0; a < 72; a++) {
                outobj.x_desired[a] = this.x_desired[a];
            }
 
            outobj.gait_enabled = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                outobj.gait_enabled[a] = this.gait_enabled[a];
            }
 
            outobj.phase_variable = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                outobj.phase_variable[a] = this.phase_variable[a];
            }
 
            outobj.period_time = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                outobj.period_time[a] = this.period_time[a];
            }
 
            outobj.time_swing = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                outobj.time_swing[a] = this.time_swing[a];
            }
 
            outobj.mass = this.mass;
 
            outobj.inertia = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.inertia[a] = this.inertia[a];
            }
 
            outobj.gravity = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.gravity[a] = this.gravity[a];
            }
 
            outobj.mu = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                outobj.mu[a] = this.mu[a];
            }
 
            outobj.z_g = new double[(int) 2];
            for (int a = 0; a < 2; a++) {
                outobj.z_g[a] = this.z_g[a];
            }
 
            outobj.Q = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.Q[a] = this.Q[a];
            }
 
            outobj.R = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.R[a] = this.R[a];
            }
 
            outobj.K_HX = new double[(int) 30];
            for (int a = 0; a < 30; a++) {
                outobj.K_HX[a] = this.K_HX[a];
            }
 
            return outobj;
        }
    }
}

