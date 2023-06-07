/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class vel_cmd_lcmt implements lcm.lcm.LCMEncodable
{
    public double v_x;
    public double v_y;
    public double v_psi;
 
    public vel_cmd_lcmt()
    {
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x277222fa35358500L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.vel_cmd_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.vel_cmd_lcmt.class);
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
        outs.writeDouble(this.v_x); 
 
        outs.writeDouble(this.v_y); 
 
        outs.writeDouble(this.v_psi); 
 
    }
 
    public vel_cmd_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public vel_cmd_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.vel_cmd_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.vel_cmd_lcmt o = new lcmtypes.vel_cmd_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.v_x = ins.readDouble();
 
        this.v_y = ins.readDouble();
 
        this.v_psi = ins.readDouble();
 
    }
 
    public lcmtypes.vel_cmd_lcmt copy()
    {
        lcmtypes.vel_cmd_lcmt outobj = new lcmtypes.vel_cmd_lcmt();
        outobj.v_x = this.v_x;
 
        outobj.v_y = this.v_y;
 
        outobj.v_psi = this.v_psi;
 
        return outobj;
    }
 
}

