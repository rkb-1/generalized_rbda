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
    public sealed class basic_jump_info_lcmt : LCM.LCM.LCMEncodable
    {
        public double height_delta;
        public double dist_to_obst;
 
        public basic_jump_info_lcmt()
        {
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0xa5b0ac89c048c7a1L;
 
        static basic_jump_info_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.basic_jump_info_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.basic_jump_info_lcmt");
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
            outs.Write(this.height_delta); 
 
            outs.Write(this.dist_to_obst); 
 
        }
 
        public basic_jump_info_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public basic_jump_info_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.basic_jump_info_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.basic_jump_info_lcmt o = new LCMTypes.basic_jump_info_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.height_delta = ins.ReadDouble();
 
            this.dist_to_obst = ins.ReadDouble();
 
        }
 
        public LCMTypes.basic_jump_info_lcmt Copy()
        {
            LCMTypes.basic_jump_info_lcmt outobj = new LCMTypes.basic_jump_info_lcmt();
            outobj.height_delta = this.height_delta;
 
            outobj.dist_to_obst = this.dist_to_obst;
 
            return outobj;
        }
    }
}

