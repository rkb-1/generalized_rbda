/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class landingTO_input_lcmt implements lcm.lcm.LCMEncodable
{
    public double falling_conditions[];
    public double Xref[];
    public double Uref[];
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
    public double QN[];
    public double jpos_min[];
    public double jpos_max[];
    public double kin_box[];
    public double mu;
    public double l_leg_max;
    public double mass;
    public double Ib[];
    public double Ib_inv[];
 
    public landingTO_input_lcmt()
    {
        falling_conditions = new double[9];
        Xref = new double[252];
        Uref = new double[480];
        dt_opt = new double[20];
        q_min = new double[6];
        q_max = new double[6];
        qd_min = new double[6];
        qd_max = new double[6];
        q_init = new double[6];
        qd_init = new double[6];
        c_init = new double[12];
        q_term_min = new double[6];
        q_term_max = new double[6];
        qd_term_min = new double[6];
        qd_term_max = new double[6];
        QN = new double[12];
        jpos_min = new double[12];
        jpos_max = new double[12];
        kin_box = new double[2];
        Ib = new double[3];
        Ib_inv = new double[3];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x67286e14bdaa9318L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.landingTO_input_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.landingTO_input_lcmt.class);
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
        for (int a = 0; a < 9; a++) {
            outs.writeDouble(this.falling_conditions[a]); 
        }
 
        for (int a = 0; a < 252; a++) {
            outs.writeDouble(this.Xref[a]); 
        }
 
        for (int a = 0; a < 480; a++) {
            outs.writeDouble(this.Uref[a]); 
        }
 
        for (int a = 0; a < 20; a++) {
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
 
        for (int a = 0; a < 12; a++) {
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
            outs.writeDouble(this.QN[a]); 
        }
 
        for (int a = 0; a < 12; a++) {
            outs.writeDouble(this.jpos_min[a]); 
        }
 
        for (int a = 0; a < 12; a++) {
            outs.writeDouble(this.jpos_max[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeDouble(this.kin_box[a]); 
        }
 
        outs.writeDouble(this.mu); 
 
        outs.writeDouble(this.l_leg_max); 
 
        outs.writeDouble(this.mass); 
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Ib[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeDouble(this.Ib_inv[a]); 
        }
 
    }
 
    public landingTO_input_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public landingTO_input_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.landingTO_input_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.landingTO_input_lcmt o = new lcmtypes.landingTO_input_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.falling_conditions = new double[(int) 9];
        for (int a = 0; a < 9; a++) {
            this.falling_conditions[a] = ins.readDouble();
        }
 
        this.Xref = new double[(int) 252];
        for (int a = 0; a < 252; a++) {
            this.Xref[a] = ins.readDouble();
        }
 
        this.Uref = new double[(int) 480];
        for (int a = 0; a < 480; a++) {
            this.Uref[a] = ins.readDouble();
        }
 
        this.dt_opt = new double[(int) 20];
        for (int a = 0; a < 20; a++) {
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
 
        this.c_init = new double[(int) 12];
        for (int a = 0; a < 12; a++) {
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
 
        this.QN = new double[(int) 12];
        for (int a = 0; a < 12; a++) {
            this.QN[a] = ins.readDouble();
        }
 
        this.jpos_min = new double[(int) 12];
        for (int a = 0; a < 12; a++) {
            this.jpos_min[a] = ins.readDouble();
        }
 
        this.jpos_max = new double[(int) 12];
        for (int a = 0; a < 12; a++) {
            this.jpos_max[a] = ins.readDouble();
        }
 
        this.kin_box = new double[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kin_box[a] = ins.readDouble();
        }
 
        this.mu = ins.readDouble();
 
        this.l_leg_max = ins.readDouble();
 
        this.mass = ins.readDouble();
 
        this.Ib = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Ib[a] = ins.readDouble();
        }
 
        this.Ib_inv = new double[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.Ib_inv[a] = ins.readDouble();
        }
 
    }
 
    public lcmtypes.landingTO_input_lcmt copy()
    {
        lcmtypes.landingTO_input_lcmt outobj = new lcmtypes.landingTO_input_lcmt();
        outobj.falling_conditions = new double[(int) 9];
        System.arraycopy(this.falling_conditions, 0, outobj.falling_conditions, 0, 9); 
        outobj.Xref = new double[(int) 252];
        System.arraycopy(this.Xref, 0, outobj.Xref, 0, 252); 
        outobj.Uref = new double[(int) 480];
        System.arraycopy(this.Uref, 0, outobj.Uref, 0, 480); 
        outobj.dt_opt = new double[(int) 20];
        System.arraycopy(this.dt_opt, 0, outobj.dt_opt, 0, 20); 
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
        outobj.c_init = new double[(int) 12];
        System.arraycopy(this.c_init, 0, outobj.c_init, 0, 12); 
        outobj.q_term_min = new double[(int) 6];
        System.arraycopy(this.q_term_min, 0, outobj.q_term_min, 0, 6); 
        outobj.q_term_max = new double[(int) 6];
        System.arraycopy(this.q_term_max, 0, outobj.q_term_max, 0, 6); 
        outobj.qd_term_min = new double[(int) 6];
        System.arraycopy(this.qd_term_min, 0, outobj.qd_term_min, 0, 6); 
        outobj.qd_term_max = new double[(int) 6];
        System.arraycopy(this.qd_term_max, 0, outobj.qd_term_max, 0, 6); 
        outobj.QN = new double[(int) 12];
        System.arraycopy(this.QN, 0, outobj.QN, 0, 12); 
        outobj.jpos_min = new double[(int) 12];
        System.arraycopy(this.jpos_min, 0, outobj.jpos_min, 0, 12); 
        outobj.jpos_max = new double[(int) 12];
        System.arraycopy(this.jpos_max, 0, outobj.jpos_max, 0, 12); 
        outobj.kin_box = new double[(int) 2];
        System.arraycopy(this.kin_box, 0, outobj.kin_box, 0, 2); 
        outobj.mu = this.mu;
 
        outobj.l_leg_max = this.l_leg_max;
 
        outobj.mass = this.mass;
 
        outobj.Ib = new double[(int) 3];
        System.arraycopy(this.Ib, 0, outobj.Ib, 0, 3); 
        outobj.Ib_inv = new double[(int) 3];
        System.arraycopy(this.Ib_inv, 0, outobj.Ib_inv, 0, 3); 
        return outobj;
    }
 
}

