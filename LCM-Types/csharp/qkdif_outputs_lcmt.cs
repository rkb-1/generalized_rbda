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
    public sealed class qkdif_outputs_lcmt : LCM.LCM.LCMEncodable
    {
        public int NUM_OPT_VAR_TRAJ;
        public double[] Xopt;
        public double obj_val;
        public double t_solve;
        public double t_NN_eval;
        public int opt_solved;
        public int iter;
 
        public qkdif_outputs_lcmt()
        {
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0x0f825d87a60d5262L;
 
        static qkdif_outputs_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.qkdif_outputs_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.qkdif_outputs_lcmt");
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
            outs.Write(this.NUM_OPT_VAR_TRAJ); 
 
            for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
                outs.Write(this.Xopt[a]); 
            }
 
            outs.Write(this.obj_val); 
 
            outs.Write(this.t_solve); 
 
            outs.Write(this.t_NN_eval); 
 
            outs.Write(this.opt_solved); 
 
            outs.Write(this.iter); 
 
        }
 
        public qkdif_outputs_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public qkdif_outputs_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.qkdif_outputs_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.qkdif_outputs_lcmt o = new LCMTypes.qkdif_outputs_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.NUM_OPT_VAR_TRAJ = ins.ReadInt32();
 
            this.Xopt = new double[(int) NUM_OPT_VAR_TRAJ];
            for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
                this.Xopt[a] = ins.ReadDouble();
            }
 
            this.obj_val = ins.ReadDouble();
 
            this.t_solve = ins.ReadDouble();
 
            this.t_NN_eval = ins.ReadDouble();
 
            this.opt_solved = ins.ReadInt32();
 
            this.iter = ins.ReadInt32();
 
        }
 
        public LCMTypes.qkdif_outputs_lcmt Copy()
        {
            LCMTypes.qkdif_outputs_lcmt outobj = new LCMTypes.qkdif_outputs_lcmt();
            outobj.NUM_OPT_VAR_TRAJ = this.NUM_OPT_VAR_TRAJ;
 
            outobj.Xopt = new double[(int) NUM_OPT_VAR_TRAJ];
            for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
                outobj.Xopt[a] = this.Xopt[a];
            }
 
            outobj.obj_val = this.obj_val;
 
            outobj.t_solve = this.t_solve;
 
            outobj.t_NN_eval = this.t_NN_eval;
 
            outobj.opt_solved = this.opt_solved;
 
            outobj.iter = this.iter;
 
            return outobj;
        }
    }
}

