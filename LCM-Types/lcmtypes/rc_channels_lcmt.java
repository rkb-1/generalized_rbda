/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class rc_channels_lcmt implements lcm.lcm.LCMEncodable
{
    public double ch_1;
    public double ch_2;
    public double ch_3;
    public double ch_4;
    public double ch_5;
    public double ch_6;
    public double ch_7;
    public double ch_8;
    public double ch_9;
    public double ch_10;
    public double ch_11;
    public double ch_12;
    public double ch_13;
    public double ch_14;
    public double ch_15;
    public double ch_16;
 
    public rc_channels_lcmt()
    {
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x5fd71e3345a45040L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.rc_channels_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.rc_channels_lcmt.class);
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
        outs.writeDouble(this.ch_1); 
 
        outs.writeDouble(this.ch_2); 
 
        outs.writeDouble(this.ch_3); 
 
        outs.writeDouble(this.ch_4); 
 
        outs.writeDouble(this.ch_5); 
 
        outs.writeDouble(this.ch_6); 
 
        outs.writeDouble(this.ch_7); 
 
        outs.writeDouble(this.ch_8); 
 
        outs.writeDouble(this.ch_9); 
 
        outs.writeDouble(this.ch_10); 
 
        outs.writeDouble(this.ch_11); 
 
        outs.writeDouble(this.ch_12); 
 
        outs.writeDouble(this.ch_13); 
 
        outs.writeDouble(this.ch_14); 
 
        outs.writeDouble(this.ch_15); 
 
        outs.writeDouble(this.ch_16); 
 
    }
 
    public rc_channels_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public rc_channels_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.rc_channels_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.rc_channels_lcmt o = new lcmtypes.rc_channels_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.ch_1 = ins.readDouble();
 
        this.ch_2 = ins.readDouble();
 
        this.ch_3 = ins.readDouble();
 
        this.ch_4 = ins.readDouble();
 
        this.ch_5 = ins.readDouble();
 
        this.ch_6 = ins.readDouble();
 
        this.ch_7 = ins.readDouble();
 
        this.ch_8 = ins.readDouble();
 
        this.ch_9 = ins.readDouble();
 
        this.ch_10 = ins.readDouble();
 
        this.ch_11 = ins.readDouble();
 
        this.ch_12 = ins.readDouble();
 
        this.ch_13 = ins.readDouble();
 
        this.ch_14 = ins.readDouble();
 
        this.ch_15 = ins.readDouble();
 
        this.ch_16 = ins.readDouble();
 
    }
 
    public lcmtypes.rc_channels_lcmt copy()
    {
        lcmtypes.rc_channels_lcmt outobj = new lcmtypes.rc_channels_lcmt();
        outobj.ch_1 = this.ch_1;
 
        outobj.ch_2 = this.ch_2;
 
        outobj.ch_3 = this.ch_3;
 
        outobj.ch_4 = this.ch_4;
 
        outobj.ch_5 = this.ch_5;
 
        outobj.ch_6 = this.ch_6;
 
        outobj.ch_7 = this.ch_7;
 
        outobj.ch_8 = this.ch_8;
 
        outobj.ch_9 = this.ch_9;
 
        outobj.ch_10 = this.ch_10;
 
        outobj.ch_11 = this.ch_11;
 
        outobj.ch_12 = this.ch_12;
 
        outobj.ch_13 = this.ch_13;
 
        outobj.ch_14 = this.ch_14;
 
        outobj.ch_15 = this.ch_15;
 
        outobj.ch_16 = this.ch_16;
 
        return outobj;
    }
 
}

