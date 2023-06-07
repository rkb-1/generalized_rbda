/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class jto_inputs_casadi_lcmt implements lcm.lcm.LCMEncodable
{
    public int NUM_X_VAR;
    public int NUM_U_VAR;
    public int NUM_TIMESTEPS;
    public int NUM_U_TIMESTEPS;
    public int NUM_X_VAR_TRAJ;
    public int NUM_U_VAR_TRAJ;
    public int NUM_OPT_VAR_TRAJ;
    public int NUM_LEGS;
    public int NUM_LEGS_x3;
    public int NUM_GAIT_TABLE;
    public double Xref[];
    public double Uref[];
    public double x0[];
    public double gait_schedule[];
    public double gait_schedule_TD[];
    public double dt_opt[];
    public double q_min[];
    public double q_max[];
    public double qd_min[];
    public double qd_max[];
    public double q_init[];
    public double qd_init[];
    public double c_init[];
    public double q_term_min[];
    public double q_term_max[];
    public double qd_term_min[];
    public double qd_term_max[];
    public double QX[];
    public double QN[];
    public double Qc[];
    public double Qf[];
    public double mu_ground;
    public double l_leg_max;
    public double f_max;
    public double mass;
    public double Ib[];
    public double Ib_inv[];
    public double flight_duration;
 
    public jto_inputs_casadi_lcmt()
    {
        q_min = new double[6];
        q_max = new double[6];
        qd_min = new double[6];
        qd_max = new double[6];
        q_init = new double[6];
        qd_init = new double[6];
        q_term_min = new double[6];
        q_term_max = new double[6];
        qd_term_min = new double[6];
        qd_term_max = new double[6];
        QX = new double[12];
        QN = new double[12];
        Qc = new double[3];
        Qf = new double[3];
        Ib = new double[3];
        Ib_inv = new double[3];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x4a09cf8e00593dc6L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.jto_inputs_casadi_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.jto_inputs_casadi_lcmt.class);
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
        outs.writeInt(this.NUM_X_VAR); 
 
        outs.writeInt(this.NUM_U_VAR); 
 
        outs.writeInt(this.NUM_TIMESTEPS); 
 
        outs.writeInt(this.NUM_U_TIMESTEPS); 
 
        outs.writeInt(this.NUM_X_VAR_TRAJ); 
 
        outs.writeInt(this.NUM_U_VAR_TRAJ); 
 
        outs.writeInt(this.NUM_OPT_VAR_TRAJ); 
 
        outs.writeInt(this.NUM_LEGS); 
 
        outs.writeInt(this.NUM_LEGS_x3); 
 
        outs.writeInt(this.NUM_GAIT_TABLE); 
 
        for (int a = 0; a < this.NUM_X_VAR_TRAJ; a++) {
            outs.writeDouble(this.Xref[a]); 
        }
 
        for (int a = 0; a < this.NUM_U_VAR_TRAJ; a++) {
            outs.writeDouble(this.Uref[a]); 
        }
 
        for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
            outs.writeDouble(this.x0[a]); 
        }
 
        for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
            outs.writeDouble(this.gait_schedule[a]); 
        }
 
        for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
            outs.writeDouble(this.gait_schedule_TD[a]); 
        }
 
        for (int a = 0; a < this.NUM_U_TIMESTEPS; a++) {
            outs.writeDouble(this.dt_opt[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.q_min[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.q_max[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.qd_min[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.qd_max[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.q_init[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.qd_init[a]); 
        }
 
        for (int a = 0; a < this.NUM_LEGS_x3; a++) {
            outs.writeDouble(this.c_init[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.q_term_min[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.q_term_max[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.qd_term_min[a]); 
        }
 
        for (int a = 0; a < 6; a++) {
            outs.writeDouble(this.qd_term_max[a]); 
        }
 
        for (int a = 0; a < 12; a++) {
            outs.writeDouble(this.QX[a]); 
        }
 
        for (int a = 0; a < 12; a++) {
            outs.writeDouble(this.QN[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Qc[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Qf[a]); 
        }
 
        outs.writeDouble(this.mu_ground); 
 
        outs.writeDouble(this.l_leg_max); 
 
        outs.writeDouble(this.f_max); 
 
        outs.writeDouble(this.mass); 
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Ib[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Ib_inv[a]); 
        }
 
        outs.writeDouble(this.flight_duration); 
 
    }
 
    public jto_inputs_casadi_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public jto_inputs_casadi_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.jto_inputs_casadi_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.jto_inputs_casadi_lcmt o = new lcmtypes.jto_inputs_casadi_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.NUM_X_VAR = ins.readInt();
 
        this.NUM_U_VAR = ins.readInt();
 
        this.NUM_TIMESTEPS = ins.readInt();
 
        this.NUM_U_TIMESTEPS = ins.readInt();
 
        this.NUM_X_VAR_TRAJ = ins.readInt();
 
        this.NUM_U_VAR_TRAJ = ins.readInt();
 
        this.NUM_OPT_VAR_TRAJ = ins.readInt();
 
        this.NUM_LEGS = ins.readInt();
 
        this.NUM_LEGS_x3 = ins.readInt();
 
        this.NUM_GAIT_TABLE = ins.readInt();
 
        this.Xref = new double[(int) NUM_X_VAR_TRAJ];
        for (int a = 0; a < this.NUM_X_VAR_TRAJ; a++) {
            this.Xref[a] = ins.readDouble();
        }
 
        this.Uref = new double[(int) NUM_U_VAR_TRAJ];
        for (int a = 0; a < this.NUM_U_VAR_TRAJ; a++) {
            this.Uref[a] = ins.readDouble();
        }
 
        this.x0 = new double[(int) NUM_OPT_VAR_TRAJ];
        for (int a = 0; a < this.NUM_OPT_VAR_TRAJ; a++) {
            this.x0[a] = ins.readDouble();
        }
 
        this.gait_schedule = new double[(int) NUM_GAIT_TABLE];
        for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
            this.gait_schedule[a] = ins.readDouble();
        }
 
        this.gait_schedule_TD = new double[(int) NUM_GAIT_TABLE];
        for (int a = 0; a < this.NUM_GAIT_TABLE; a++) {
            this.gait_schedule_TD[a] = ins.readDouble();
        }
 
        this.dt_opt = new double[(int) NUM_U_TIMESTEPS];
        for (int a = 0; a < this.NUM_U_TIMESTEPS; a++) {
            this.dt_opt[a] = ins.readDouble();
        }
 
        this.q_min = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.q_min[a] = ins.readDouble();
        }
 
        this.q_max = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.q_max[a] = ins.readDouble();
        }
 
        this.qd_min = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.qd_min[a] = ins.readDouble();
        }
 
        this.qd_max = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
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
 
        this.c_init = new double[(int) NUM_LEGS_x3];
        for (int a = 0; a < this.NUM_LEGS_x3; a++) {
            this.c_init[a] = ins.readDouble();
        }
 
        this.q_term_min = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.q_term_min[a] = ins.readDouble();
        }
 
        this.q_term_max = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.q_term_max[a] = ins.readDouble();
        }
 
        this.qd_term_min = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.qd_term_min[a] = ins.readDouble();
        }
 
        this.qd_term_max = new double[(int) 6];
        for (int a = 0; a < 6; a++) {
            this.qd_term_max[a] = ins.readDouble();
        }
 
        this.QX = new double[(int) 12];
        for (int a = 0; a < 12; a++) {
            this.QX[a] = ins.readDouble();
        }
 
        this.QN = new double[(int) 12];
        for (int a = 0; a < 12; a++) {
            this.QN[a] = ins.readDouble();
        }
 
        this.Qc = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Qc[a] = ins.readDouble();
        }
 
        this.Qf = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Qf[a] = ins.readDouble();
        }
 
        this.mu_ground = ins.readDouble();
 
        this.l_leg_max = ins.readDouble();
 
        this.f_max = ins.readDouble();
 
        this.mass = ins.readDouble();
 
        this.Ib = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Ib[a] = ins.readDouble();
        }
 
        this.Ib_inv = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Ib_inv[a] = ins.readDouble();
        }
 
        this.flight_duration = ins.readDouble();
 
    }
 
    public lcmtypes.jto_inputs_casadi_lcmt copy()
    {
        lcmtypes.jto_inputs_casadi_lcmt outobj = new lcmtypes.jto_inputs_casadi_lcmt();
        outobj.NUM_X_VAR = this.NUM_X_VAR;
 
        outobj.NUM_U_VAR = this.NUM_U_VAR;
 
        outobj.NUM_TIMESTEPS = this.NUM_TIMESTEPS;
 
        outobj.NUM_U_TIMESTEPS = this.NUM_U_TIMESTEPS;
 
        outobj.NUM_X_VAR_TRAJ = this.NUM_X_VAR_TRAJ;
 
        outobj.NUM_U_VAR_TRAJ = this.NUM_U_VAR_TRAJ;
 
        outobj.NUM_OPT_VAR_TRAJ = this.NUM_OPT_VAR_TRAJ;
 
        outobj.NUM_LEGS = this.NUM_LEGS;
 
        outobj.NUM_LEGS_x3 = this.NUM_LEGS_x3;
 
        outobj.NUM_GAIT_TABLE = this.NUM_GAIT_TABLE;
 
        outobj.Xref = new double[(int) NUM_X_VAR_TRAJ];
        if (this.NUM_X_VAR_TRAJ > 0)
            System.arraycopy(this.Xref, 0, outobj.Xref, 0, this.NUM_X_VAR_TRAJ); 
        outobj.Uref = new double[(int) NUM_U_VAR_TRAJ];
        if (this.NUM_U_VAR_TRAJ > 0)
            System.arraycopy(this.Uref, 0, outobj.Uref, 0, this.NUM_U_VAR_TRAJ); 
        outobj.x0 = new double[(int) NUM_OPT_VAR_TRAJ];
        if (this.NUM_OPT_VAR_TRAJ > 0)
            System.arraycopy(this.x0, 0, outobj.x0, 0, this.NUM_OPT_VAR_TRAJ); 
        outobj.gait_schedule = new double[(int) NUM_GAIT_TABLE];
        if (this.NUM_GAIT_TABLE > 0)
            System.arraycopy(this.gait_schedule, 0, outobj.gait_schedule, 0, this.NUM_GAIT_TABLE); 
        outobj.gait_schedule_TD = new double[(int) NUM_GAIT_TABLE];
        if (this.NUM_GAIT_TABLE > 0)
            System.arraycopy(this.gait_schedule_TD, 0, outobj.gait_schedule_TD, 0, this.NUM_GAIT_TABLE); 
        outobj.dt_opt = new double[(int) NUM_U_TIMESTEPS];
        if (this.NUM_U_TIMESTEPS > 0)
            System.arraycopy(this.dt_opt, 0, outobj.dt_opt, 0, this.NUM_U_TIMESTEPS); 
        outobj.q_min = new double[(int) 6];
        System.arraycopy(this.q_min, 0, outobj.q_min, 0, 6); 
        outobj.q_max = new double[(int) 6];
        System.arraycopy(this.q_max, 0, outobj.q_max, 0, 6); 
        outobj.qd_min = new double[(int) 6];
        System.arraycopy(this.qd_min, 0, outobj.qd_min, 0, 6); 
        outobj.qd_max = new double[(int) 6];
        System.arraycopy(this.qd_max, 0, outobj.qd_max, 0, 6); 
        outobj.q_init = new double[(int) 6];
        System.arraycopy(this.q_init, 0, outobj.q_init, 0, 6); 
        outobj.qd_init = new double[(int) 6];
        System.arraycopy(this.qd_init, 0, outobj.qd_init, 0, 6); 
        outobj.c_init = new double[(int) NUM_LEGS_x3];
        if (this.NUM_LEGS_x3 > 0)
            System.arraycopy(this.c_init, 0, outobj.c_init, 0, this.NUM_LEGS_x3); 
        outobj.q_term_min = new double[(int) 6];
        System.arraycopy(this.q_term_min, 0, outobj.q_term_min, 0, 6); 
        outobj.q_term_max = new double[(int) 6];
        System.arraycopy(this.q_term_max, 0, outobj.q_term_max, 0, 6); 
        outobj.qd_term_min = new double[(int) 6];
        System.arraycopy(this.qd_term_min, 0, outobj.qd_term_min, 0, 6); 
        outobj.qd_term_max = new double[(int) 6];
        System.arraycopy(this.qd_term_max, 0, outobj.qd_term_max, 0, 6); 
        outobj.QX = new double[(int) 12];
        System.arraycopy(this.QX, 0, outobj.QX, 0, 12); 
        outobj.QN = new double[(int) 12];
        System.arraycopy(this.QN, 0, outobj.QN, 0, 12); 
        outobj.Qc = new double[(int) 3];
        System.arraycopy(this.Qc, 0, outobj.Qc, 0, 3); 
        outobj.Qf = new double[(int) 3];
        System.arraycopy(this.Qf, 0, outobj.Qf, 0, 3); 
        outobj.mu_ground = this.mu_ground;
 
        outobj.l_leg_max = this.l_leg_max;
 
        outobj.f_max = this.f_max;
 
        outobj.mass = this.mass;
 
        outobj.Ib = new double[(int) 3];
        System.arraycopy(this.Ib, 0, outobj.Ib, 0, 3); 
        outobj.Ib_inv = new double[(int) 3];
        System.arraycopy(this.Ib_inv, 0, outobj.Ib_inv, 0, 3); 
        outobj.flight_duration = this.flight_duration;
 
        return outobj;
    }
 
}

