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
    public sealed class control_parameter_request_lcmt : LCM.LCM.LCMEncodable
    {
        public byte[] name;
        public long requestNumber;
        public byte[] value;
        public byte parameterKind;
        public byte requestKind;
 
        public control_parameter_request_lcmt()
        {
            name = new byte[64];
            value = new byte[64];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0xe827e9f6525296b9L;
 
        static control_parameter_request_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.control_parameter_request_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.control_parameter_request_lcmt");
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
            for (int a = 0; a < 64; a++) {
                outs.Write(this.name[a]); 
            }
 
            outs.Write(this.requestNumber); 
 
            for (int a = 0; a < 64; a++) {
                outs.Write(this.value[a]); 
            }
 
            outs.Write(this.parameterKind); 
 
            outs.Write(this.requestKind); 
 
        }
 
        public control_parameter_request_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public control_parameter_request_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.control_parameter_request_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.control_parameter_request_lcmt o = new LCMTypes.control_parameter_request_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.name = new byte[(int) 64];
            for (int a = 0; a < 64; a++) {
                this.name[a] = ins.ReadByte();
            }
 
            this.requestNumber = ins.ReadInt64();
 
            this.value = new byte[(int) 64];
            for (int a = 0; a < 64; a++) {
                this.value[a] = ins.ReadByte();
            }
 
            this.parameterKind = ins.ReadByte();
 
            this.requestKind = ins.ReadByte();
 
        }
 
        public LCMTypes.control_parameter_request_lcmt Copy()
        {
            LCMTypes.control_parameter_request_lcmt outobj = new LCMTypes.control_parameter_request_lcmt();
            outobj.name = new byte[(int) 64];
            for (int a = 0; a < 64; a++) {
                outobj.name[a] = this.name[a];
            }
 
            outobj.requestNumber = this.requestNumber;
 
            outobj.value = new byte[(int) 64];
            for (int a = 0; a < 64; a++) {
                outobj.value[a] = this.value[a];
            }
 
            outobj.parameterKind = this.parameterKind;
 
            outobj.requestKind = this.requestKind;
 
            return outobj;
        }
    }
}

