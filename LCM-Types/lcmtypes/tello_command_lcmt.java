/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class tello_command_lcmt implements lcm.lcm.LCMEncodable
{
    public float q_des_hipz[];
    public float q_des_hipx[];
    public float q_des_hipy[];
    public float q_des_knee[];
    public float q_des_ankle[];
    public float qd_des_hipz[];
    public float qd_des_hipx[];
    public float qd_des_hipy[];
    public float qd_des_knee[];
    public float qd_des_ankle[];
    public float kp_hipz[];
    public float kp_hipx[];
    public float kp_hipy[];
    public float kp_knee[];
    public float kp_ankle[];
    public float kd_hipz[];
    public float kd_hipx[];
    public float kd_hipy[];
    public float kd_knee[];
    public float kd_ankle[];
    public float tau_hipz_ff[];
    public float tau_hipx_ff[];
    public float tau_hipy_ff[];
    public float tau_knee_ff[];
    public float tau_ankle_ff[];
    public int flags[];
 
    public tello_command_lcmt()
    {
        q_des_hipz = new float[2];
        q_des_hipx = new float[2];
        q_des_hipy = new float[2];
        q_des_knee = new float[2];
        q_des_ankle = new float[2];
        qd_des_hipz = new float[2];
        qd_des_hipx = new float[2];
        qd_des_hipy = new float[2];
        qd_des_knee = new float[2];
        qd_des_ankle = new float[2];
        kp_hipz = new float[2];
        kp_hipx = new float[2];
        kp_hipy = new float[2];
        kp_knee = new float[2];
        kp_ankle = new float[2];
        kd_hipz = new float[2];
        kd_hipx = new float[2];
        kd_hipy = new float[2];
        kd_knee = new float[2];
        kd_ankle = new float[2];
        tau_hipz_ff = new float[2];
        tau_hipx_ff = new float[2];
        tau_hipy_ff = new float[2];
        tau_knee_ff = new float[2];
        tau_ankle_ff = new float[2];
        flags = new int[4];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x11e6adc393f0b759L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.tello_command_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.tello_command_lcmt.class);
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
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.q_des_hipz[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.q_des_hipx[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.q_des_hipy[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.q_des_knee[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.q_des_ankle[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.qd_des_hipz[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.qd_des_hipx[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.qd_des_hipy[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.qd_des_knee[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.qd_des_ankle[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kp_hipz[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kp_hipx[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kp_hipy[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kp_knee[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kp_ankle[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kd_hipz[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kd_hipx[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kd_hipy[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kd_knee[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.kd_ankle[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.tau_hipz_ff[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.tau_hipx_ff[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.tau_hipy_ff[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.tau_knee_ff[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeFloat(this.tau_ankle_ff[a]); 
        }
 
        for (int a = 0; a < 4; a++) {
            outs.writeInt(this.flags[a]); 
        }
 
    }
 
    public tello_command_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public tello_command_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.tello_command_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.tello_command_lcmt o = new lcmtypes.tello_command_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.q_des_hipz = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.q_des_hipz[a] = ins.readFloat();
        }
 
        this.q_des_hipx = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.q_des_hipx[a] = ins.readFloat();
        }
 
        this.q_des_hipy = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.q_des_hipy[a] = ins.readFloat();
        }
 
        this.q_des_knee = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.q_des_knee[a] = ins.readFloat();
        }
 
        this.q_des_ankle = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.q_des_ankle[a] = ins.readFloat();
        }
 
        this.qd_des_hipz = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.qd_des_hipz[a] = ins.readFloat();
        }
 
        this.qd_des_hipx = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.qd_des_hipx[a] = ins.readFloat();
        }
 
        this.qd_des_hipy = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.qd_des_hipy[a] = ins.readFloat();
        }
 
        this.qd_des_knee = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.qd_des_knee[a] = ins.readFloat();
        }
 
        this.qd_des_ankle = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.qd_des_ankle[a] = ins.readFloat();
        }
 
        this.kp_hipz = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kp_hipz[a] = ins.readFloat();
        }
 
        this.kp_hipx = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kp_hipx[a] = ins.readFloat();
        }
 
        this.kp_hipy = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kp_hipy[a] = ins.readFloat();
        }
 
        this.kp_knee = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kp_knee[a] = ins.readFloat();
        }
 
        this.kp_ankle = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kp_ankle[a] = ins.readFloat();
        }
 
        this.kd_hipz = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kd_hipz[a] = ins.readFloat();
        }
 
        this.kd_hipx = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kd_hipx[a] = ins.readFloat();
        }
 
        this.kd_hipy = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kd_hipy[a] = ins.readFloat();
        }
 
        this.kd_knee = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kd_knee[a] = ins.readFloat();
        }
 
        this.kd_ankle = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.kd_ankle[a] = ins.readFloat();
        }
 
        this.tau_hipz_ff = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.tau_hipz_ff[a] = ins.readFloat();
        }
 
        this.tau_hipx_ff = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.tau_hipx_ff[a] = ins.readFloat();
        }
 
        this.tau_hipy_ff = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.tau_hipy_ff[a] = ins.readFloat();
        }
 
        this.tau_knee_ff = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.tau_knee_ff[a] = ins.readFloat();
        }
 
        this.tau_ankle_ff = new float[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.tau_ankle_ff[a] = ins.readFloat();
        }
 
        this.flags = new int[(int) 4];
        for (int a = 0; a < 4; a++) {
            this.flags[a] = ins.readInt();
        }
 
    }
 
    public lcmtypes.tello_command_lcmt copy()
    {
        lcmtypes.tello_command_lcmt outobj = new lcmtypes.tello_command_lcmt();
        outobj.q_des_hipz = new float[(int) 2];
        System.arraycopy(this.q_des_hipz, 0, outobj.q_des_hipz, 0, 2); 
        outobj.q_des_hipx = new float[(int) 2];
        System.arraycopy(this.q_des_hipx, 0, outobj.q_des_hipx, 0, 2); 
        outobj.q_des_hipy = new float[(int) 2];
        System.arraycopy(this.q_des_hipy, 0, outobj.q_des_hipy, 0, 2); 
        outobj.q_des_knee = new float[(int) 2];
        System.arraycopy(this.q_des_knee, 0, outobj.q_des_knee, 0, 2); 
        outobj.q_des_ankle = new float[(int) 2];
        System.arraycopy(this.q_des_ankle, 0, outobj.q_des_ankle, 0, 2); 
        outobj.qd_des_hipz = new float[(int) 2];
        System.arraycopy(this.qd_des_hipz, 0, outobj.qd_des_hipz, 0, 2); 
        outobj.qd_des_hipx = new float[(int) 2];
        System.arraycopy(this.qd_des_hipx, 0, outobj.qd_des_hipx, 0, 2); 
        outobj.qd_des_hipy = new float[(int) 2];
        System.arraycopy(this.qd_des_hipy, 0, outobj.qd_des_hipy, 0, 2); 
        outobj.qd_des_knee = new float[(int) 2];
        System.arraycopy(this.qd_des_knee, 0, outobj.qd_des_knee, 0, 2); 
        outobj.qd_des_ankle = new float[(int) 2];
        System.arraycopy(this.qd_des_ankle, 0, outobj.qd_des_ankle, 0, 2); 
        outobj.kp_hipz = new float[(int) 2];
        System.arraycopy(this.kp_hipz, 0, outobj.kp_hipz, 0, 2); 
        outobj.kp_hipx = new float[(int) 2];
        System.arraycopy(this.kp_hipx, 0, outobj.kp_hipx, 0, 2); 
        outobj.kp_hipy = new float[(int) 2];
        System.arraycopy(this.kp_hipy, 0, outobj.kp_hipy, 0, 2); 
        outobj.kp_knee = new float[(int) 2];
        System.arraycopy(this.kp_knee, 0, outobj.kp_knee, 0, 2); 
        outobj.kp_ankle = new float[(int) 2];
        System.arraycopy(this.kp_ankle, 0, outobj.kp_ankle, 0, 2); 
        outobj.kd_hipz = new float[(int) 2];
        System.arraycopy(this.kd_hipz, 0, outobj.kd_hipz, 0, 2); 
        outobj.kd_hipx = new float[(int) 2];
        System.arraycopy(this.kd_hipx, 0, outobj.kd_hipx, 0, 2); 
        outobj.kd_hipy = new float[(int) 2];
        System.arraycopy(this.kd_hipy, 0, outobj.kd_hipy, 0, 2); 
        outobj.kd_knee = new float[(int) 2];
        System.arraycopy(this.kd_knee, 0, outobj.kd_knee, 0, 2); 
        outobj.kd_ankle = new float[(int) 2];
        System.arraycopy(this.kd_ankle, 0, outobj.kd_ankle, 0, 2); 
        outobj.tau_hipz_ff = new float[(int) 2];
        System.arraycopy(this.tau_hipz_ff, 0, outobj.tau_hipz_ff, 0, 2); 
        outobj.tau_hipx_ff = new float[(int) 2];
        System.arraycopy(this.tau_hipx_ff, 0, outobj.tau_hipx_ff, 0, 2); 
        outobj.tau_hipy_ff = new float[(int) 2];
        System.arraycopy(this.tau_hipy_ff, 0, outobj.tau_hipy_ff, 0, 2); 
        outobj.tau_knee_ff = new float[(int) 2];
        System.arraycopy(this.tau_knee_ff, 0, outobj.tau_knee_ff, 0, 2); 
        outobj.tau_ankle_ff = new float[(int) 2];
        System.arraycopy(this.tau_ankle_ff, 0, outobj.tau_ankle_ff, 0, 2); 
        outobj.flags = new int[(int) 4];
        System.arraycopy(this.flags, 0, outobj.flags, 0, 4); 
        return outobj;
    }
 
}

