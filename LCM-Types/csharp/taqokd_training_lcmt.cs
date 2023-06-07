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
    public sealed class taqokd_training_lcmt : LCM.LCM.LCMEncodable
    {
        public double a;
        public double b;
        public double c;
        public double d;
        public double f;
        public double heading;
        public int train_iter_max;
        public double mu;
        public double f_max;
        public double dist_to_obs_sf;
        public double obs_height_sf;
        public double land_height_offset;
        public double land_dist_sf1;
        public double land_dist_sf2;
        public double px_flight;
        public double py_flight;
        public double k_softplus;
        public double vert_vel_sf;
        public double robot_mass_sf;
        public double wbc_fb_weight;
        public int b_use_wbc;
        public double[] pz_takeoff;
        public double[] roll_takeoff;
        public double[] pitch_takeoff;
        public double[] pz_flight;
        public double[] roll_flight;
        public double[] pitch_flight;
 
        public taqokd_training_lcmt()
        {
            pz_takeoff = new double[3];
            roll_takeoff = new double[3];
            pitch_takeoff = new double[3];
            pz_flight = new double[3];
            roll_flight = new double[3];
            pitch_flight = new double[3];
        }
 
        public static readonly ulong LCM_FINGERPRINT;
        public static readonly ulong LCM_FINGERPRINT_BASE = 0xe8ee047f2ac4fdd3L;
 
        static taqokd_training_lcmt()
        {
            LCM_FINGERPRINT = _hashRecursive(new List<String>());
        }
 
        public static ulong _hashRecursive(List<String> classes)
        {
            if (classes.Contains("LCMTypes.taqokd_training_lcmt"))
                return 0L;
 
            classes.Add("LCMTypes.taqokd_training_lcmt");
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
            outs.Write(this.a); 
 
            outs.Write(this.b); 
 
            outs.Write(this.c); 
 
            outs.Write(this.d); 
 
            outs.Write(this.f); 
 
            outs.Write(this.heading); 
 
            outs.Write(this.train_iter_max); 
 
            outs.Write(this.mu); 
 
            outs.Write(this.f_max); 
 
            outs.Write(this.dist_to_obs_sf); 
 
            outs.Write(this.obs_height_sf); 
 
            outs.Write(this.land_height_offset); 
 
            outs.Write(this.land_dist_sf1); 
 
            outs.Write(this.land_dist_sf2); 
 
            outs.Write(this.px_flight); 
 
            outs.Write(this.py_flight); 
 
            outs.Write(this.k_softplus); 
 
            outs.Write(this.vert_vel_sf); 
 
            outs.Write(this.robot_mass_sf); 
 
            outs.Write(this.wbc_fb_weight); 
 
            outs.Write(this.b_use_wbc); 
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.pz_takeoff[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.roll_takeoff[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.pitch_takeoff[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.pz_flight[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.roll_flight[a]); 
            }
 
            for (int a = 0; a < 3; a++) {
                outs.Write(this.pitch_flight[a]); 
            }
 
        }
 
        public taqokd_training_lcmt(byte[] data) : this(new LCMDataInputStream(data))
        {
        }
 
        public taqokd_training_lcmt(LCMDataInputStream ins)
        {
            if ((ulong) ins.ReadInt64() != LCM_FINGERPRINT)
                throw new System.IO.IOException("LCM Decode error: bad fingerprint");
 
            _decodeRecursive(ins);
        }
 
        public static LCMTypes.taqokd_training_lcmt _decodeRecursiveFactory(LCMDataInputStream ins)
        {
            LCMTypes.taqokd_training_lcmt o = new LCMTypes.taqokd_training_lcmt();
            o._decodeRecursive(ins);
            return o;
        }
 
        public void _decodeRecursive(LCMDataInputStream ins)
        {
            this.a = ins.ReadDouble();
 
            this.b = ins.ReadDouble();
 
            this.c = ins.ReadDouble();
 
            this.d = ins.ReadDouble();
 
            this.f = ins.ReadDouble();
 
            this.heading = ins.ReadDouble();
 
            this.train_iter_max = ins.ReadInt32();
 
            this.mu = ins.ReadDouble();
 
            this.f_max = ins.ReadDouble();
 
            this.dist_to_obs_sf = ins.ReadDouble();
 
            this.obs_height_sf = ins.ReadDouble();
 
            this.land_height_offset = ins.ReadDouble();
 
            this.land_dist_sf1 = ins.ReadDouble();
 
            this.land_dist_sf2 = ins.ReadDouble();
 
            this.px_flight = ins.ReadDouble();
 
            this.py_flight = ins.ReadDouble();
 
            this.k_softplus = ins.ReadDouble();
 
            this.vert_vel_sf = ins.ReadDouble();
 
            this.robot_mass_sf = ins.ReadDouble();
 
            this.wbc_fb_weight = ins.ReadDouble();
 
            this.b_use_wbc = ins.ReadInt32();
 
            this.pz_takeoff = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.pz_takeoff[a] = ins.ReadDouble();
            }
 
            this.roll_takeoff = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.roll_takeoff[a] = ins.ReadDouble();
            }
 
            this.pitch_takeoff = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.pitch_takeoff[a] = ins.ReadDouble();
            }
 
            this.pz_flight = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.pz_flight[a] = ins.ReadDouble();
            }
 
            this.roll_flight = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.roll_flight[a] = ins.ReadDouble();
            }
 
            this.pitch_flight = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                this.pitch_flight[a] = ins.ReadDouble();
            }
 
        }
 
        public LCMTypes.taqokd_training_lcmt Copy()
        {
            LCMTypes.taqokd_training_lcmt outobj = new LCMTypes.taqokd_training_lcmt();
            outobj.a = this.a;
 
            outobj.b = this.b;
 
            outobj.c = this.c;
 
            outobj.d = this.d;
 
            outobj.f = this.f;
 
            outobj.heading = this.heading;
 
            outobj.train_iter_max = this.train_iter_max;
 
            outobj.mu = this.mu;
 
            outobj.f_max = this.f_max;
 
            outobj.dist_to_obs_sf = this.dist_to_obs_sf;
 
            outobj.obs_height_sf = this.obs_height_sf;
 
            outobj.land_height_offset = this.land_height_offset;
 
            outobj.land_dist_sf1 = this.land_dist_sf1;
 
            outobj.land_dist_sf2 = this.land_dist_sf2;
 
            outobj.px_flight = this.px_flight;
 
            outobj.py_flight = this.py_flight;
 
            outobj.k_softplus = this.k_softplus;
 
            outobj.vert_vel_sf = this.vert_vel_sf;
 
            outobj.robot_mass_sf = this.robot_mass_sf;
 
            outobj.wbc_fb_weight = this.wbc_fb_weight;
 
            outobj.b_use_wbc = this.b_use_wbc;
 
            outobj.pz_takeoff = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.pz_takeoff[a] = this.pz_takeoff[a];
            }
 
            outobj.roll_takeoff = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.roll_takeoff[a] = this.roll_takeoff[a];
            }
 
            outobj.pitch_takeoff = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.pitch_takeoff[a] = this.pitch_takeoff[a];
            }
 
            outobj.pz_flight = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.pz_flight[a] = this.pz_flight[a];
            }
 
            outobj.roll_flight = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.roll_flight[a] = this.roll_flight[a];
            }
 
            outobj.pitch_flight = new double[(int) 3];
            for (int a = 0; a < 3; a++) {
                outobj.pitch_flight[a] = this.pitch_flight[a];
            }
 
            return outobj;
        }
    }
}

