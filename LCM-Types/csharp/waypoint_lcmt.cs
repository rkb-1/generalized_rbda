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
    public sealed class waypoint_lcmt : LCM.LCM.LCMEncodable
    {
        public double[] point;
 
        public waypoint_lcmt()
        {
            point = new double[3];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0x56413f75b8665927L;
 
        static waypoint_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.waypoint_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.waypoint_lcmt");
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
                outs.Write(this.point[a]); 
            }
 
        }
 
        public waypoint_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public waypoint_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.waypoint_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.waypoint_lcmt o = new LCMTypes.waypoint_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.point = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.point[a] = ins.ReadDouble();
            }
 
        }
 
        public LCMTypes.waypoint_lcmt Copy()
        {
            LCMTypes.waypoint_lcmt outobj = new LCMTypes.waypoint_lcmt();
            outobj.point = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.point[a] = this.point[a];
            }
 
            return outobj;
        }
    }
}

