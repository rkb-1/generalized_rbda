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
    public sealed class jump3D_info_lcmt : LCM.LCM.LCMEncodable
    {
        public double obs_height;
        public double dist_to_obs;
        public double dist_past_obs_lb;
        public double dist_past_obs_ub;
        public double dist_past_obs_glub;
        public double yaw_init;
        public double yaw_term;
 
        public jump3D_info_lcmt()
        {
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0xd7f28e09ee0e1bb0L;
 
        static jump3D_info_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.jump3D_info_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.jump3D_info_lcmt");
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
            outs.Write(this.obs_height); 
 
            outs.Write(this.dist_to_obs); 
 
            outs.Write(this.dist_past_obs_lb); 
 
            outs.Write(this.dist_past_obs_ub); 
 
            outs.Write(this.dist_past_obs_glub); 
 
            outs.Write(this.yaw_init); 
 
            outs.Write(this.yaw_term); 
 
        }
 
        public jump3D_info_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public jump3D_info_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.jump3D_info_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.jump3D_info_lcmt o = new LCMTypes.jump3D_info_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.obs_height = ins.ReadDouble();
 
            this.dist_to_obs = ins.ReadDouble();
 
            this.dist_past_obs_lb = ins.ReadDouble();
 
            this.dist_past_obs_ub = ins.ReadDouble();
 
            this.dist_past_obs_glub = ins.ReadDouble();
 
            this.yaw_init = ins.ReadDouble();
 
            this.yaw_term = ins.ReadDouble();
 
        }
 
        public LCMTypes.jump3D_info_lcmt Copy()
        {
            LCMTypes.jump3D_info_lcmt outobj = new LCMTypes.jump3D_info_lcmt();
            outobj.obs_height = this.obs_height;
 
            outobj.dist_to_obs = this.dist_to_obs;
 
            outobj.dist_past_obs_lb = this.dist_past_obs_lb;
 
            outobj.dist_past_obs_ub = this.dist_past_obs_ub;
 
            outobj.dist_past_obs_glub = this.dist_past_obs_glub;
 
            outobj.yaw_init = this.yaw_init;
 
            outobj.yaw_term = this.yaw_term;
 
            return outobj;
        }
    }
}

