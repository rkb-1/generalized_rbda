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
    public sealed class microstrain_lcmt : LCM.LCM.LCMEncodable
    {
        public float[] quat;
        public float[] rpy;
        public float[] omega;
        public float[] acc;
        public long lcm_published_timestamp;
        public long good_packets;
        public long bad_packets;
 
        public microstrain_lcmt()
        {
            quat = new float[4];
            rpy = new float[3];
            omega = new float[3];
            acc = new float[3];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0xe40c2cc978338f68L;
 
        static microstrain_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.microstrain_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.microstrain_lcmt");
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
                outs.Write(this.quat[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.rpy[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.omega[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.acc[a]); 
            }
 
            outs.Write(this.lcm_published_timestamp); 
 
            outs.Write(this.good_packets); 
 
            outs.Write(this.bad_packets); 
 
        }
 
        public microstrain_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public microstrain_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.microstrain_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.microstrain_lcmt o = new LCMTypes.microstrain_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.quat = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                this.quat[a] = ins.ReadSingle();
            }
 
            this.rpy = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.rpy[a] = ins.ReadSingle();
            }
 
            this.omega = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.omega[a] = ins.ReadSingle();
            }
 
            this.acc = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.acc[a] = ins.ReadSingle();
            }
 
            this.lcm_published_timestamp = ins.ReadInt64();
 
            this.good_packets = ins.ReadInt64();
 
            this.bad_packets = ins.ReadInt64();
 
        }
 
        public LCMTypes.microstrain_lcmt Copy()
        {
            LCMTypes.microstrain_lcmt outobj = new LCMTypes.microstrain_lcmt();
            outobj.quat = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                outobj.quat[a] = this.quat[a];
            }
 
            outobj.rpy = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.rpy[a] = this.rpy[a];
            }
 
            outobj.omega = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.omega[a] = this.omega[a];
            }
 
            outobj.acc = new float[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.acc[a] = this.acc[a];
            }
 
            outobj.lcm_published_timestamp = this.lcm_published_timestamp;
 
            outobj.good_packets = this.good_packets;
 
            outobj.bad_packets = this.bad_packets;
 
            return outobj;
        }
    }
}

