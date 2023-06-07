/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class jto_outputs_lcmt implements lcm.lcm.LCMEncodable
{
    public double x_opt[];
    public double u_opt[];
    public double b_solved;
 
    public jto_outputs_lcmt()
    {
        x_opt = new double[360];
        u_opt = new double[720];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0xd7cc1f0397b84077L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.jto_outputs_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.jto_outputs_lcmt.class);
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
        for (int a = 0; a < 360; a++) {
            outs.writeDouble(this.x_opt[a]); 
        }
 
        for (int a = 0; a < 720; a++) {
            outs.writeDouble(this.u_opt[a]); 
        }
 
        outs.writeDouble(this.b_solved); 
 
    }
 
    public jto_outputs_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public jto_outputs_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.jto_outputs_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.jto_outputs_lcmt o = new lcmtypes.jto_outputs_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.x_opt = new double[(int) 360];
        for (int a = 0; a < 360; a++) {
            this.x_opt[a] = ins.readDouble();
        }
 
        this.u_opt = new double[(int) 720];
        for (int a = 0; a < 720; a++) {
            this.u_opt[a] = ins.readDouble();
        }
 
        this.b_solved = ins.readDouble();
 
    }
 
    public lcmtypes.jto_outputs_lcmt copy()
    {
        lcmtypes.jto_outputs_lcmt outobj = new lcmtypes.jto_outputs_lcmt();
        outobj.x_opt = new double[(int) 360];
        System.arraycopy(this.x_opt, 0, outobj.x_opt, 0, 360); 
        outobj.u_opt = new double[(int) 720];
        System.arraycopy(this.u_opt, 0, outobj.u_opt, 0, 720); 
        outobj.b_solved = this.b_solved;
 
        return outobj;
    }
 
}

