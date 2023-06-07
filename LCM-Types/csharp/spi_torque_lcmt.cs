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
    public sealed class spi_torque_lcmt : LCM.LCM.LCMEncodable
    {
        public float[] tau_abad;
        public float[] tau_hip;
        public float[] tau_knee;
 
        public spi_torque_lcmt()
        {
            tau_abad = new float[4];
            tau_hip = new float[4];
            tau_knee = new float[4];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0xa847131dd865b527L;
 
        static spi_torque_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.spi_torque_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.spi_torque_lcmt");
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
                outs.Write(this.tau_abad[a]); 
            }
 
            for (int a = 0; a < 4; a++) {
                outs.Write(this.tau_hip[a]); 
            }
 
            for (int a = 0; a < 4; a++) {
                outs.Write(this.tau_knee[a]); 
            }
 
        }
 
        public spi_torque_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public spi_torque_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.spi_torque_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.spi_torque_lcmt o = new LCMTypes.spi_torque_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.tau_abad = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                this.tau_abad[a] = ins.ReadSingle();
            }
 
            this.tau_hip = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                this.tau_hip[a] = ins.ReadSingle();
            }
 
            this.tau_knee = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                this.tau_knee[a] = ins.ReadSingle();
            }
 
        }
 
        public LCMTypes.spi_torque_lcmt Copy()
        {
            LCMTypes.spi_torque_lcmt outobj = new LCMTypes.spi_torque_lcmt();
            outobj.tau_abad = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                outobj.tau_abad[a] = this.tau_abad[a];
            }
 
            outobj.tau_hip = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                outobj.tau_hip[a] = this.tau_hip[a];
            }
 
            outobj.tau_knee = new float[(int) 4];
            for (int a = 0; a < 4; a++) {
                outobj.tau_knee[a] = this.tau_knee[a];
            }
 
            return outobj;
        }
    }
}

