/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class humanoid_visualization_info_lcmt implements lcm.lcm.LCMEncodable
{
    public float link_ori_quat[][];
    public float link_pos[][];
 
    public humanoid_visualization_info_lcmt()
    {
        link_ori_quat = new float[17][4];
        link_pos = new float[17][3];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0xdbf7873c1703b02fL;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.humanoid_visualization_info_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.humanoid_visualization_info_lcmt.class);
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
        for (int a = 0; a < 17; a++) {
            for (int b = 0; b < 4; b++) {
                outs.writeFloat(this.link_ori_quat[a][b]); 
            }
        }
 
        for (int a = 0; a < 17; a++) {
            for (int b = 0; b < 3; b++) {
                outs.writeFloat(this.link_pos[a][b]); 
            }
        }
 
    }
 
    public humanoid_visualization_info_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public humanoid_visualization_info_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.humanoid_visualization_info_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.humanoid_visualization_info_lcmt o = new lcmtypes.humanoid_visualization_info_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.link_ori_quat = new float[(int) 17][(int) 4];
        for (int a = 0; a < 17; a++) {
            for (int b = 0; b < 4; b++) {
                this.link_ori_quat[a][b] = ins.readFloat();
            }
        }
 
        this.link_pos = new float[(int) 17][(int) 3];
        for (int a = 0; a < 17; a++) {
            for (int b = 0; b < 3; b++) {
                this.link_pos[a][b] = ins.readFloat();
            }
        }
 
    }
 
    public lcmtypes.humanoid_visualization_info_lcmt copy()
    {
        lcmtypes.humanoid_visualization_info_lcmt outobj = new lcmtypes.humanoid_visualization_info_lcmt();
        outobj.link_ori_quat = new float[(int) 17][(int) 4];
        for (int a = 0; a < 17; a++) {
            System.arraycopy(this.link_ori_quat[a], 0, outobj.link_ori_quat[a], 0, 4);        }
 
        outobj.link_pos = new float[(int) 17][(int) 3];
        for (int a = 0; a < 17; a++) {
            System.arraycopy(this.link_pos[a], 0, outobj.link_pos[a], 0, 3);        }
 
        return outobj;
    }
 
}

