/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class taqokd_inputs_lcmt implements lcm.lcm.LCMEncodable
{
    public int NUM_TIMESTEPS;
    public int NUM_U_TIMESTEPS;
    public int NUM_X_VAR_TRAJ;
    public int NUM_U_VAR_TRAJ;
    public int NUM_OPT_VAR_TRAJ;
    public int NUM_GC;
    public int NUM_GC_x3;
    public int NUM_GAIT_TABLE;
    public int NUM_FB_DOF;
    public double Xref[];
    public double Uref[];
    public double tf_ref;
    public double gait_schedule[];
    public double dt_opt[];
    public double q_min[];
    public double q_max[];
    public double qd_min[];
    public double qd_max[];
    public double q_init[];
    public double qd_init[];
    public double c_init[];
    public double r_land_height;
    public double r_land_xy_sf[];
    public double rpy_land_min[];
    public double rpy_land_max[];
    public double k_softplus;
    public double terrain_z_height_actual;
    public double terrain_z_height;
    public double terrain_x_shift_actual;
    public double terrain_x_shift;
    public double terrain_steepness;
    public double terrain_y_angle;
    public double terrain_y_curvature;
    public double Qq[];
    public double Qv[];
    public double Qr[];
    public double Qc[];
    public double Qh[];
    public double Qf[];
    public double Qtau[];
    public double Qrdd[];
    public double Qhd[];
    public double QNq[];
    public double QNv[];
    public double QNr[];
    public double QNc[];
    public double QNh[];
    public double Qflight;
    public double mass;
    public double mu;
    public double f_max[];
    public double init_guess[];
 
    public taqokd_inputs_lcmt()
    {
        q_init = new double[6];
        qd_init = new double[6];
        r_land_xy_sf = new double[2];
        rpy_land_min = new double[3];
        rpy_land_max = new double[3];
        Qr = new double[6];
        Qh = new double[3];
        Qrdd = new double[3];
        Qhd = new double[3];
        QNr = new double[6];
        QNh = new double[3];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x0b822b6405fb66c1L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.taqokd_inputs_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.taqokd_inputs_lcmt.class);
        long hash = LCM_FINGERPRINT_BASE
            ;
        classes.remove(classes.size() - 1);
        return (hash<<1) + ((hash>>63)&1);
    }
 
    public void encode(DataOutput outs) throws IOException
    {
        outs.writeLong(LCM_FINGERPRINT);
        _encodeRecursive(outs);
    }
 
    public void _encodeRecursive(DataOutput outs) throws IOException
    {
        outs.writeInt(this.NUM_TIMESTEPS); 
 
        outs.writeInt(this.NUM_U_TIMESTEPS); 
 
        outs.writeInt(this.NUM_X_VAR_TRAJ); 
 
        outs.writeInt(this.NUM_U_VAR_TRAJ); 
 
        outs.writeInt(this.NUM_OPT_VAR_TRAJ); 
 
        outs.writeInt(this.NUM_GC); 
 
        outs.writeInt(this.NUM_GC_x3); 
 
        outs.writeInt(this.NUM_GAIT_TABLE); 
 
        outs.writeInt(this.NUM_FB_DOF); 
 
        for (int a = 0; a < this.NUM_X_VAR_TRAJ; a++) {
            outs.writeDouble(this.Xref[a]); 
        }
 
        for (int a = 0; a < this.NUM_U_VAR_TRAJ; a++) {
            outs.writeDouble(this.Uref[a]); 
        }
 
        outs.writeDouble(this.tf_ref); 
 
        for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
            outs.writeDouble(this.gait_schedule[a]); 
        }
 
        for (int a = 0; a < this.NUM_U_TIMESTEPS; a++) {
            outs.writeDouble(this.dt_opt[a]); 
        }
 
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            outs.writeDouble(this.q_min[a]); 
        }
 
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            outs.writeDouble(this.q_max[a]); 
        }
 
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            outs.writeDouble(this.qd_min[a]); 
        }
 
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            outs.writeDouble(this.qd_max[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.q_init[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.qd_init[a]); 
        }
 
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            outs.writeDouble(this.c_init[a]); 
        }
 
        outs.writeDouble(this.r_land_height); 
 
        for (int a = 0; a < 2; a++) {
            outs.writeDouble(this.r_land_xy_sf[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.rpy_land_min[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.rpy_land_max[a]); 
        }
 
        outs.writeDouble(this.k_softplus); 
 
        outs.writeDouble(this.terrain_z_height_actual); 
 
        outs.writeDouble(this.terrain_z_height); 
 
        outs.writeDouble(this.terrain_x_shift_actual); 
 
        outs.writeDouble(this.terrain_x_shift); 
 
        outs.writeDouble(this.terrain_steepness); 
 
        outs.writeDouble(this.terrain_y_angle); 
 
        outs.writeDouble(this.terrain_y_curvature); 
 
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            outs.writeDouble(this.Qq[a]); 
        }
 
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            outs.writeDouble(this.Qv[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.Qr[a]); 
        }
 
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            outs.writeDouble(this.Qc[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Qh[a]); 
        }
 
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            outs.writeDouble(this.Qf[a]); 
        }
 
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            outs.writeDouble(this.Qtau[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Qrdd[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Qhd[a]); 
        }
 
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            outs.writeDouble(this.QNq[a]); 
        }
 
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            outs.writeDouble(this.QNv[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.QNr[a]); 
        }
 
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            outs.writeDouble(this.QNc[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.QNh[a]); 
        }
 
        outs.writeDouble(this.Qflight); 
 
        outs.writeDouble(this.mass); 
 
        outs.writeDouble(this.mu); 
 
        for (int a = 0; a < this.NUM_GC; a++) {
            outs.writeDouble(this.f_max[a]); 
        }
 
        for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
            outs.writeDouble(this.init_guess[a]); 
        }
 
    }
 
    public taqokd_inputs_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public taqokd_inputs_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.taqokd_inputs_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.taqokd_inputs_lcmt o = new lcmtypes.taqokd_inputs_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.NUM_TIMESTEPS = ins.readInt();
 
        this.NUM_U_TIMESTEPS = ins.readInt();
 
        this.NUM_X_VAR_TRAJ = ins.readInt();
 
        this.NUM_U_VAR_TRAJ = ins.readInt();
 
        this.NUM_OPT_VAR_TRAJ = ins.readInt();
 
        this.NUM_GC = ins.readInt();
 
        this.NUM_GC_x3 = ins.readInt();
 
        this.NUM_GAIT_TABLE = ins.readInt();
 
        this.NUM_FB_DOF = ins.readInt();
 
        this.Xref = new double[(int) NUM_X_VAR_TRAJ];
        for (int a = 0; a < this.NUM_X_VAR_TRAJ; a++) {
            this.Xref[a] = ins.readDouble();
        }
 
        this.Uref = new double[(int) NUM_U_VAR_TRAJ];
        for (int a = 0; a < this.NUM_U_VAR_TRAJ; a++) {
            this.Uref[a] = ins.readDouble();
        }
 
        this.tf_ref = ins.readDouble();
 
        this.gait_schedule = new double[(int) NUM_GAIT_TABLE];
        for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
            this.gait_schedule[a] = ins.readDouble();
        }
 
        this.dt_opt = new double[(int) NUM_U_TIMESTEPS];
        for (int a = 0; a < this.NUM_U_TIMESTEPS; a++) {
            this.dt_opt[a] = ins.readDouble();
        }
 
        this.q_min = new double[(int) NUM_FB_DOF];
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            this.q_min[a] = ins.readDouble();
        }
 
        this.q_max = new double[(int) NUM_FB_DOF];
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            this.q_max[a] = ins.readDouble();
        }
 
        this.qd_min = new double[(int) NUM_FB_DOF];
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            this.qd_min[a] = ins.readDouble();
        }
 
        this.qd_max = new double[(int) NUM_FB_DOF];
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            this.qd_max[a] = ins.readDouble();
        }
 
        this.q_init = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.q_init[a] = ins.readDouble();
        }
 
        this.qd_init = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.qd_init[a] = ins.readDouble();
        }
 
        this.c_init = new double[(int) NUM_GC_x3];
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            this.c_init[a] = ins.readDouble();
        }
 
        this.r_land_height = ins.readDouble();
 
        this.r_land_xy_sf = new double[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.r_land_xy_sf[a] = ins.readDouble();
        }
 
        this.rpy_land_min = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.rpy_land_min[a] = ins.readDouble();
        }
 
        this.rpy_land_max = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.rpy_land_max[a] = ins.readDouble();
        }
 
        this.k_softplus = ins.readDouble();
 
        this.terrain_z_height_actual = ins.readDouble();
 
        this.terrain_z_height = ins.readDouble();
 
        this.terrain_x_shift_actual = ins.readDouble();
 
        this.terrain_x_shift = ins.readDouble();
 
        this.terrain_steepness = ins.readDouble();
 
        this.terrain_y_angle = ins.readDouble();
 
        this.terrain_y_curvature = ins.readDouble();
 
        this.Qq = new double[(int) NUM_FB_DOF];
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            this.Qq[a] = ins.readDouble();
        }
 
        this.Qv = new double[(int) NUM_FB_DOF];
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            this.Qv[a] = ins.readDouble();
        }
 
        this.Qr = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.Qr[a] = ins.readDouble();
        }
 
        this.Qc = new double[(int) NUM_GC_x3];
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            this.Qc[a] = ins.readDouble();
        }
 
        this.Qh = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Qh[a] = ins.readDouble();
        }
 
        this.Qf = new double[(int) NUM_GC_x3];
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            this.Qf[a] = ins.readDouble();
        }
 
        this.Qtau = new double[(int) NUM_GC_x3];
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            this.Qtau[a] = ins.readDouble();
        }
 
        this.Qrdd = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Qrdd[a] = ins.readDouble();
        }
 
        this.Qhd = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Qhd[a] = ins.readDouble();
        }
 
        this.QNq = new double[(int) NUM_FB_DOF];
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            this.QNq[a] = ins.readDouble();
        }
 
        this.QNv = new double[(int) NUM_FB_DOF];
        for (int a = 0; a < this.NUM_FB_DOF; a++) {
            this.QNv[a] = ins.readDouble();
        }
 
        this.QNr = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.QNr[a] = ins.readDouble();
        }
 
        this.QNc = new double[(int) NUM_GC_x3];
        for (int a = 0; a < this.NUM_GC_x3; a++) {
            this.QNc[a] = ins.readDouble();
        }
 
        this.QNh = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.QNh[a] = ins.readDouble();
        }
 
        this.Qflight = ins.readDouble();
 
        this.mass = ins.readDouble();
 
        this.mu = ins.readDouble();
 
        this.f_max = new double[(int) NUM_GC];
        for (int a = 0; a < this.NUM_GC; a++) {
            this.f_max[a] = ins.readDouble();
        }
 
        this.init_guess = new double[(int) NUM_OPT_VAR_TRAJ];
        for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
            this.init_guess[a] = ins.readDouble();
        }
 
    }
 
    public lcmtypes.taqokd_inputs_lcmt copy()
    {
        lcmtypes.taqokd_inputs_lcmt outobj = new lcmtypes.taqokd_inputs_lcmt();
        outobj.NUM_TIMESTEPS = this.NUM_TIMESTEPS;
 
        outobj.NUM_U_TIMESTEPS = this.NUM_U_TIMESTEPS;
 
        outobj.NUM_X_VAR_TRAJ = this.NUM_X_VAR_TRAJ;
 
        outobj.NUM_U_VAR_TRAJ = this.NUM_U_VAR_TRAJ;
 
        outobj.NUM_OPT_VAR_TRAJ = this.NUM_OPT_VAR_TRAJ;
 
        outobj.NUM_GC = this.NUM_GC;
 
        outobj.NUM_GC_x3 = this.NUM_GC_x3;
 
        outobj.NUM_GAIT_TABLE = this.NUM_GAIT_TABLE;
 
        outobj.NUM_FB_DOF = this.NUM_FB_DOF;
 
        outobj.Xref = new double[(int) NUM_X_VAR_TRAJ];
        if (this.NUM_X_VAR_TRAJ > 0)
            System.arraycopy(this.Xref, 0, outobj.Xref, 0, this.NUM_X_VAR_TRAJ); 
        outobj.Uref = new double[(int) NUM_U_VAR_TRAJ];
        if (this.NUM_U_VAR_TRAJ > 0)
            System.arraycopy(this.Uref, 0, outobj.Uref, 0, this.NUM_U_VAR_TRAJ); 
        outobj.tf_ref = this.tf_ref;
 
        outobj.gait_schedule = new double[(int) NUM_GAIT_TABLE];
        if (this.NUM_GAIT_TABLE > 0)
            System.arraycopy(this.gait_schedule, 0, outobj.gait_schedule, 0, this.NUM_GAIT_TABLE); 
        outobj.dt_opt = new double[(int) NUM_U_TIMESTEPS];
        if (this.NUM_U_TIMESTEPS > 0)
            System.arraycopy(this.dt_opt, 0, outobj.dt_opt, 0, this.NUM_U_TIMESTEPS); 
        outobj.q_min = new double[(int) NUM_FB_DOF];
        if (this.NUM_FB_DOF > 0)
            System.arraycopy(this.q_min, 0, outobj.q_min, 0, this.NUM_FB_DOF); 
        outobj.q_max = new double[(int) NUM_FB_DOF];
        if (this.NUM_FB_DOF > 0)
            System.arraycopy(this.q_max, 0, outobj.q_max, 0, this.NUM_FB_DOF); 
        outobj.qd_min = new double[(int) NUM_FB_DOF];
        if (this.NUM_FB_DOF > 0)
            System.arraycopy(this.qd_min, 0, outobj.qd_min, 0, this.NUM_FB_DOF); 
        outobj.qd_max = new double[(int) NUM_FB_DOF];
        if (this.NUM_FB_DOF > 0)
            System.arraycopy(this.qd_max, 0, outobj.qd_max, 0, this.NUM_FB_DOF); 
        outobj.q_init = new double[(int) 6];
        System.arraycopy(this.q_init, 0, outobj.q_init, 0, 6); 
        outobj.qd_init = new double[(int) 6];
        System.arraycopy(this.qd_init, 0, outobj.qd_init, 0, 6); 
        outobj.c_init = new double[(int) NUM_GC_x3];
        if (this.NUM_GC_x3 > 0)
            System.arraycopy(this.c_init, 0, outobj.c_init, 0, this.NUM_GC_x3); 
        outobj.r_land_height = this.r_land_height;
 
        outobj.r_land_xy_sf = new double[(int) 2];
        System.arraycopy(this.r_land_xy_sf, 0, outobj.r_land_xy_sf, 0, 2); 
        outobj.rpy_land_min = new double[(int) 3];
        System.arraycopy(this.rpy_land_min, 0, outobj.rpy_land_min, 0, 3); 
        outobj.rpy_land_max = new double[(int) 3];
        System.arraycopy(this.rpy_land_max, 0, outobj.rpy_land_max, 0, 3); 
        outobj.k_softplus = this.k_softplus;
 
        outobj.terrain_z_height_actual = this.terrain_z_height_actual;
 
        outobj.terrain_z_height = this.terrain_z_height;
 
        outobj.terrain_x_shift_actual = this.terrain_x_shift_actual;
 
        outobj.terrain_x_shift = this.terrain_x_shift;
 
        outobj.terrain_steepness = this.terrain_steepness;
 
        outobj.terrain_y_angle = this.terrain_y_angle;
 
        outobj.terrain_y_curvature = this.terrain_y_curvature;
 
        outobj.Qq = new double[(int) NUM_FB_DOF];
        if (this.NUM_FB_DOF > 0)
            System.arraycopy(this.Qq, 0, outobj.Qq, 0, this.NUM_FB_DOF); 
        outobj.Qv = new double[(int) NUM_FB_DOF];
        if (this.NUM_FB_DOF > 0)
            System.arraycopy(this.Qv, 0, outobj.Qv, 0, this.NUM_FB_DOF); 
        outobj.Qr = new double[(int) 6];
        System.arraycopy(this.Qr, 0, outobj.Qr, 0, 6); 
        outobj.Qc = new double[(int) NUM_GC_x3];
        if (this.NUM_GC_x3 > 0)
            System.arraycopy(this.Qc, 0, outobj.Qc, 0, this.NUM_GC_x3); 
        outobj.Qh = new double[(int) 3];
        System.arraycopy(this.Qh, 0, outobj.Qh, 0, 3); 
        outobj.Qf = new double[(int) NUM_GC_x3];
        if (this.NUM_GC_x3 > 0)
            System.arraycopy(this.Qf, 0, outobj.Qf, 0, this.NUM_GC_x3); 
        outobj.Qtau = new double[(int) NUM_GC_x3];
        if (this.NUM_GC_x3 > 0)
            System.arraycopy(this.Qtau, 0, outobj.Qtau, 0, this.NUM_GC_x3); 
        outobj.Qrdd = new double[(int) 3];
        System.arraycopy(this.Qrdd, 0, outobj.Qrdd, 0, 3); 
        outobj.Qhd = new double[(int) 3];
        System.arraycopy(this.Qhd, 0, outobj.Qhd, 0, 3); 
        outobj.QNq = new double[(int) NUM_FB_DOF];
        if (this.NUM_FB_DOF > 0)
            System.arraycopy(this.QNq, 0, outobj.QNq, 0, this.NUM_FB_DOF); 
        outobj.QNv = new double[(int) NUM_FB_DOF];
        if (this.NUM_FB_DOF > 0)
            System.arraycopy(this.QNv, 0, outobj.QNv, 0, this.NUM_FB_DOF); 
        outobj.QNr = new double[(int) 6];
        System.arraycopy(this.QNr, 0, outobj.QNr, 0, 6); 
        outobj.QNc = new double[(int) NUM_GC_x3];
        if (this.NUM_GC_x3 > 0)
            System.arraycopy(this.QNc, 0, outobj.QNc, 0, this.NUM_GC_x3); 
        outobj.QNh = new double[(int) 3];
        System.arraycopy(this.QNh, 0, outobj.QNh, 0, 3); 
        outobj.Qflight = this.Qflight;
 
        outobj.mass = this.mass;
 
        outobj.mu = this.mu;
 
        outobj.f_max = new double[(int) NUM_GC];
        if (this.NUM_GC > 0)
            System.arraycopy(this.f_max, 0, outobj.f_max, 0, this.NUM_GC); 
        outobj.init_guess = new double[(int) NUM_OPT_VAR_TRAJ];
        if (this.NUM_OPT_VAR_TRAJ > 0)
            System.arraycopy(this.init_guess, 0, outobj.init_guess, 0, this.NUM_OPT_VAR_TRAJ); 
        return outobj;
    }
 
}

