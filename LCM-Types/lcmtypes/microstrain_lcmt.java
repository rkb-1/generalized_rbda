/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class microstrain_lcmt implements lcm.lcm.LCMEncodable
{
    public float quat[];
    public float rpy[];
    public float omega[];
    public float acc[];
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
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0xe40c2cc978338f68L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.microstrain_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.microstrain_lcmt.class);
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
        for (int a = 0; a < 4; a++) {
            outs.writeFloat(this.quat[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.rpy[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.omega[a]); 
        }
 
        for (int a = 0; a < 3; a++) {
            outs.writeFloat(this.acc[a]); 
        }
 
        outs.writeLong(this.lcm_published_timestamp); 
 
        outs.writeLong(this.good_packets); 
 
        outs.writeLong(this.bad_packets); 
 
    }
 
    public microstrain_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public microstrain_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.microstrain_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.microstrain_lcmt o = new lcmtypes.microstrain_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.quat = new float[(int) 4];
        for (int a = 0; a < 4; a++) {
            this.quat[a] = ins.readFloat();
        }
 
        this.rpy = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.rpy[a] = ins.readFloat();
        }
 
        this.omega = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.omega[a] = ins.readFloat();
        }
 
        this.acc = new float[(int) 3];
        for (int a = 0; a < 3; a++) {
            this.acc[a] = ins.readFloat();
        }
 
        this.lcm_published_timestamp = ins.readLong();
 
        this.good_packets = ins.readLong();
 
        this.bad_packets = ins.readLong();
 
    }
 
    public lcmtypes.microstrain_lcmt copy()
    {
        lcmtypes.microstrain_lcmt outobj = new lcmtypes.microstrain_lcmt();
        outobj.quat = new float[(int) 4];
        System.arraycopy(this.quat, 0, outobj.quat, 0, 4); 
        outobj.rpy = new float[(int) 3];
        System.arraycopy(this.rpy, 0, outobj.rpy, 0, 3); 
        outobj.omega = new float[(int) 3];
        System.arraycopy(this.omega, 0, outobj.omega, 0, 3); 
        outobj.acc = new float[(int) 3];
        System.arraycopy(this.acc, 0, outobj.acc, 0, 3); 
        outobj.lcm_published_timestamp = this.lcm_published_timestamp;
 
        outobj.good_packets = this.good_packets;
 
        outobj.bad_packets = this.bad_packets;
 
        return outobj;
    }
 
}

