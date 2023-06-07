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
    public sealed class jto_inputs_casadi_lcmt : LCM.LCM.LCMEncodable
    {
        public int NUM_X_VAR;
        public int NUM_U_VAR;
        public int NUM_TIMESTEPS;
        public int NUM_U_TIMESTEPS;
        public int NUM_X_VAR_TRAJ;
        public int NUM_U_VAR_TRAJ;
        public int NUM_OPT_VAR_TRAJ;
        public int NUM_LEGS;
        public int NUM_LEGS_x3;
        public int NUM_GAIT_TABLE;
        public double[] Xref;
        public double[] Uref;
        public double[] x0;
        public double[] gait_schedule;
        public double[] gait_schedule_TD;
        public double[] dt_opt;
        public double[] q_min;
        public double[] q_max;
        public double[] qd_min;
        public double[] qd_max;
        public double[] q_init;
        public double[] qd_init;
        public double[] c_init;
        public double[] q_term_min;
        public double[] q_term_max;
        public double[] qd_term_min;
        public double[] qd_term_max;
        public double[] QX;
        public double[] QN;
        public double[] Qc;
        public double[] Qf;
        public double mu_ground;
        public double l_leg_max;
        public double f_max;
        public double mass;
        public double[] Ib;
        public double[] Ib_inv;
        public double flight_duration;
 
        public jto_inputs_casadi_lcmt()
        {
            q_min = new double[6];
            q_max = new double[6];
            qd_min = new double[6];
            qd_max = new double[6];
            q_init = new double[6];
            qd_init = new double[6];
            q_term_min = new double[6];
            q_term_max = new double[6];
            qd_term_min = new double[6];
            qd_term_max = new double[6];
            QX = new double[12];
            QN = new double[12];
            Qc = new double[3];
            Qf = new double[3];
            Ib = new double[3];
            Ib_inv = new double[3];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0x4a09cf8e00593dc6L;
 
        static jto_inputs_casadi_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.jto_inputs_casadi_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.jto_inputs_casadi_lcmt");
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
            outs.Write(this.NUM_X_VAR); 
 
            outs.Write(this.NUM_U_VAR); 
 
            outs.Write(this.NUM_TIMESTEPS); 
 
            outs.Write(this.NUM_U_TIMESTEPS); 
 
            outs.Write(this.NUM_X_VAR_TRAJ); 
 
            outs.Write(this.NUM_U_VAR_TRAJ); 
 
            outs.Write(this.NUM_OPT_VAR_TRAJ); 
 
            outs.Write(this.NUM_LEGS); 
 
            outs.Write(this.NUM_LEGS_x3); 
 
            outs.Write(this.NUM_GAIT_TABLE); 
 
            for (int a = 0; a < this.NUM_X_VAR_TRAJ; a++) {
                outs.Write(this.Xref[a]); 
            }
 
            for (int a = 0; a < this.NUM_U_VAR_TRAJ; a++) {
                outs.Write(this.Uref[a]); 
            }
 
            for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
                outs.Write(this.x0[a]); 
            }
 
            for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
                outs.Write(this.gait_schedule[a]); 
            }
 
            for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
                outs.Write(this.gait_schedule_TD[a]); 
            }
 
            for (int a = 0; a < this.NUM_U_TIMESTEPS; a++) {
                outs.Write(this.dt_opt[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.q_min[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.q_max[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.qd_min[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.qd_max[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.q_init[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.qd_init[a]); 
            }
 
            for (int a = 0; a < this.NUM_LEGS_x3; a++) {
                outs.Write(this.c_init[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.q_term_min[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.q_term_max[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.qd_term_min[a]); 
            }
 
            for (int a = 0; a < 6; a++) {
                outs.Write(this.qd_term_max[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.QX[a]); 
            }
 
            for (int a = 0; a < 12; a++) {
                outs.Write(this.QN[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Qc[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Qf[a]); 
            }
 
            outs.Write(this.mu_ground); 
 
            outs.Write(this.l_leg_max); 
 
            outs.Write(this.f_max); 
 
            outs.Write(this.mass); 
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Ib[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.Ib_inv[a]); 
            }
 
            outs.Write(this.flight_duration); 
 
        }
 
        public jto_inputs_casadi_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public jto_inputs_casadi_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.jto_inputs_casadi_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.jto_inputs_casadi_lcmt o = new LCMTypes.jto_inputs_casadi_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.NUM_X_VAR = ins.ReadInt32();
 
            this.NUM_U_VAR = ins.ReadInt32();
 
            this.NUM_TIMESTEPS = ins.ReadInt32();
 
            this.NUM_U_TIMESTEPS = ins.ReadInt32();
 
            this.NUM_X_VAR_TRAJ = ins.ReadInt32();
 
            this.NUM_U_VAR_TRAJ = ins.ReadInt32();
 
            this.NUM_OPT_VAR_TRAJ = ins.ReadInt32();
 
            this.NUM_LEGS = ins.ReadInt32();
 
            this.NUM_LEGS_x3 = ins.ReadInt32();
 
            this.NUM_GAIT_TABLE = ins.ReadInt32();
 
            this.Xref = new double[(int) NUM_X_VAR_TRAJ];
            for (int a = 0; a < this.NUM_X_VAR_TRAJ; a++) {
                this.Xref[a] = ins.ReadDouble();
            }
 
            this.Uref = new double[(int) NUM_U_VAR_TRAJ];
            for (int a = 0; a < this.NUM_U_VAR_TRAJ; a++) {
                this.Uref[a] = ins.ReadDouble();
            }
 
            this.x0 = new double[(int) NUM_OPT_VAR_TRAJ];
            for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
                this.x0[a] = ins.ReadDouble();
            }
 
            this.gait_schedule = new double[(int) NUM_GAIT_TABLE];
            for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
                this.gait_schedule[a] = ins.ReadDouble();
            }
 
            this.gait_schedule_TD = new double[(int) NUM_GAIT_TABLE];
            for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
                this.gait_schedule_TD[a] = ins.ReadDouble();
            }
 
            this.dt_opt = new double[(int) NUM_U_TIMESTEPS];
            for (int a = 0; a < this.NUM_U_TIMESTEPS; a++) {
                this.dt_opt[a] = ins.ReadDouble();
            }
 
            this.q_min = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.q_min[a] = ins.ReadDouble();
            }
 
            this.q_max = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.q_max[a] = ins.ReadDouble();
            }
 
            this.qd_min = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.qd_min[a] = ins.ReadDouble();
            }
 
            this.qd_max = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.qd_max[a] = ins.ReadDouble();
            }
 
            this.q_init = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.q_init[a] = ins.ReadDouble();
            }
 
            this.qd_init = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.qd_init[a] = ins.ReadDouble();
            }
 
            this.c_init = new double[(int) NUM_LEGS_x3];
            for (int a = 0; a < this.NUM_LEGS_x3; a++) {
                this.c_init[a] = ins.ReadDouble();
            }
 
            this.q_term_min = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.q_term_min[a] = ins.ReadDouble();
            }
 
            this.q_term_max = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.q_term_max[a] = ins.ReadDouble();
            }
 
            this.qd_term_min = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.qd_term_min[a] = ins.ReadDouble();
            }
 
            this.qd_term_max = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                this.qd_term_max[a] = ins.ReadDouble();
            }
 
            this.QX = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.QX[a] = ins.ReadDouble();
            }
 
            this.QN = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                this.QN[a] = ins.ReadDouble();
            }
 
            this.Qc = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Qc[a] = ins.ReadDouble();
            }
 
            this.Qf = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Qf[a] = ins.ReadDouble();
            }
 
            this.mu_ground = ins.ReadDouble();
 
            this.l_leg_max = ins.ReadDouble();
 
            this.f_max = ins.ReadDouble();
 
            this.mass = ins.ReadDouble();
 
            this.Ib = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Ib[a] = ins.ReadDouble();
            }
 
            this.Ib_inv = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.Ib_inv[a] = ins.ReadDouble();
            }
 
            this.flight_duration = ins.ReadDouble();
 
        }
 
        public LCMTypes.jto_inputs_casadi_lcmt Copy()
        {
            LCMTypes.jto_inputs_casadi_lcmt outobj = new LCMTypes.jto_inputs_casadi_lcmt();
            outobj.NUM_X_VAR = this.NUM_X_VAR;
 
            outobj.NUM_U_VAR = this.NUM_U_VAR;
 
            outobj.NUM_TIMESTEPS = this.NUM_TIMESTEPS;
 
            outobj.NUM_U_TIMESTEPS = this.NUM_U_TIMESTEPS;
 
            outobj.NUM_X_VAR_TRAJ = this.NUM_X_VAR_TRAJ;
 
            outobj.NUM_U_VAR_TRAJ = this.NUM_U_VAR_TRAJ;
 
            outobj.NUM_OPT_VAR_TRAJ = this.NUM_OPT_VAR_TRAJ;
 
            outobj.NUM_LEGS = this.NUM_LEGS;
 
            outobj.NUM_LEGS_x3 = this.NUM_LEGS_x3;
 
            outobj.NUM_GAIT_TABLE = this.NUM_GAIT_TABLE;
 
            outobj.Xref = new double[(int) NUM_X_VAR_TRAJ];
            for (int a = 0; a < this.NUM_X_VAR_TRAJ; a++) {
                outobj.Xref[a] = this.Xref[a];
            }
 
            outobj.Uref = new double[(int) NUM_U_VAR_TRAJ];
            for (int a = 0; a < this.NUM_U_VAR_TRAJ; a++) {
                outobj.Uref[a] = this.Uref[a];
            }
 
            outobj.x0 = new double[(int) NUM_OPT_VAR_TRAJ];
            for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
                outobj.x0[a] = this.x0[a];
            }
 
            outobj.gait_schedule = new double[(int) NUM_GAIT_TABLE];
            for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
                outobj.gait_schedule[a] = this.gait_schedule[a];
            }
 
            outobj.gait_schedule_TD = new double[(int) NUM_GAIT_TABLE];
            for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
                outobj.gait_schedule_TD[a] = this.gait_schedule_TD[a];
            }
 
            outobj.dt_opt = new double[(int) NUM_U_TIMESTEPS];
            for (int a = 0; a < this.NUM_U_TIMESTEPS; a++) {
                outobj.dt_opt[a] = this.dt_opt[a];
            }
 
            outobj.q_min = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.q_min[a] = this.q_min[a];
            }
 
            outobj.q_max = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.q_max[a] = this.q_max[a];
            }
 
            outobj.qd_min = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.qd_min[a] = this.qd_min[a];
            }
 
            outobj.qd_max = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.qd_max[a] = this.qd_max[a];
            }
 
            outobj.q_init = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.q_init[a] = this.q_init[a];
            }
 
            outobj.qd_init = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.qd_init[a] = this.qd_init[a];
            }
 
            outobj.c_init = new double[(int) NUM_LEGS_x3];
            for (int a = 0; a < this.NUM_LEGS_x3; a++) {
                outobj.c_init[a] = this.c_init[a];
            }
 
            outobj.q_term_min = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.q_term_min[a] = this.q_term_min[a];
            }
 
            outobj.q_term_max = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.q_term_max[a] = this.q_term_max[a];
            }
 
            outobj.qd_term_min = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.qd_term_min[a] = this.qd_term_min[a];
            }
 
            outobj.qd_term_max = new double[(int) 6];
            for (int a = 0; a < 6; a++) {
                outobj.qd_term_max[a] = this.qd_term_max[a];
            }
 
            outobj.QX = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.QX[a] = this.QX[a];
            }
 
            outobj.QN = new double[(int) 12];
            for (int a = 0; a < 12; a++) {
                outobj.QN[a] = this.QN[a];
            }
 
            outobj.Qc = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Qc[a] = this.Qc[a];
            }
 
            outobj.Qf = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Qf[a] = this.Qf[a];
            }
 
            outobj.mu_ground = this.mu_ground;
 
            outobj.l_leg_max = this.l_leg_max;
 
            outobj.f_max = this.f_max;
 
            outobj.mass = this.mass;
 
            outobj.Ib = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Ib[a] = this.Ib[a];
            }
 
            outobj.Ib_inv = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.Ib_inv[a] = this.Ib_inv[a];
            }
 
            outobj.flight_duration = this.flight_duration;
 
            return outobj;
        }
    }
}

