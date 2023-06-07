/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class actuator_lcmt implements lcm.lcm.LCMEncodable
{
    public int iter;
    public float qdot[];
    public float tau[];
 
    public actuator_lcmt()
    {
        qdot = new float[10];
        tau = new float[10];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x645f6201325e366dL;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.actuator_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.actuator_lcmt.class);
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
        outs.writeInt(this.iter); 
 
        for (int a = 0; a < 10; a++) {
            outs.writeFloat(this.qdot[a]); 
        }
 
        for (int a = 0; a < 10; a++) {
            outs.writeFloat(this.tau[a]); 
        }
 
    }
 
    public actuator_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public actuator_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.actuator_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.actuator_lcmt o = new lcmtypes.actuator_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.iter = ins.readInt();
 
        this.qdot = new float[(int) 10];
        for (int a = 0; a < 10; a++) {
            this.qdot[a] = ins.readFloat();
        }
 
        this.tau = new float[(int) 10];
        for (int a = 0; a < 10; a++) {
            this.tau[a] = ins.readFloat();
        }
 
    }
 
    public lcmtypes.actuator_lcmt copy()
    {
        lcmtypes.actuator_lcmt outobj = new lcmtypes.actuator_lcmt();
        outobj.iter = this.iter;
 
        outobj.qdot = new float[(int) 10];
        System.arraycopy(this.qdot, 0, outobj.qdot, 0, 10); 
        outobj.tau = new float[(int) 10];
        System.arraycopy(this.tau, 0, outobj.tau, 0, 10); 
        return outobj;
    }
 
}

