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
    public sealed class teleop_visualization_info_lcmt : LCM.LCM.LCMEncodable
    {
        public float[] body_pos;
        public float[] body_ori_quat;
        public float[] jpos;
 
        public teleop_visualization_info_lcmt()
        {
            body_pos = new float[3];
            body_ori_quat = new float[4];
            jpos = new float[7];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0x558c1691dfc937acL;
 
        static teleop_visualization_info_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.teleop_visualization_info_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.teleop_visualization_info_lcmt");
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
            for (int a = 0; a < 3; a++) {
                outs.Write(this.body_pos[a]); 
            }
 
            for (int a = 0; a < 4; a++) {
                outs.Write(this.body_ori_quat[a]); 
            }
 
            for (int a = 0; a < 7; a++) {
                outs.Write(this.jpos[a]); 
            }
 
        }
 
        public teleop_visualization_info_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public teleop_visualization_info_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.teleop_visualization_info_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.teleop_visualization_info_lcmt o = new LCMTypes.teleop_visualization_info_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.body_pos = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.body_pos[a] = ins.ReadSingle();
            }
 
            this.body_ori_quat = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                this.body_ori_quat[a] = ins.ReadSingle();
            }
 
            this.jpos = new float[(int) 7];
            for (int a = 0; a < 7; a++) {
                this.jpos[a] = ins.ReadSingle();
            }
 
        }
 
        public LCMTypes.teleop_visualization_info_lcmt Copy()
        {
            LCMTypes.teleop_visualization_info_lcmt outobj = new LCMTypes.teleop_visualization_info_lcmt();
            outobj.body_pos = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.body_pos[a] = this.body_pos[a];
            }
 
            outobj.body_ori_quat = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                outobj.body_ori_quat[a] = this.body_ori_quat[a];
            }
 
            outobj.jpos = new float[(int) 7];
            for (int a = 0; a < 7; a++) {
                outobj.jpos[a] = this.jpos[a];
            }
 
            return outobj;
        }
    }
}

