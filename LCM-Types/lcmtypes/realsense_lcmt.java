/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class realsense_lcmt implements lcm.lcm.LCMEncodable
{
    public double pos_Rs_Rs[][];
    public double pos_Rs_World[][];
    public double pos_Robot_World[][];
    public double vRs_Rs[][];
    public double accelRs_Rs[][];
    public double omegaRs_Rs[][];
    public double quat_Rs_to_RsRel[][];
    public double rpy_Rs_to_RsRel[][];
    public double tracker_conf[];
    public double rpy_Robot_World[][];
 
    public realsense_lcmt()
    {
        pos_Rs_Rs = new double[2][3];
        pos_Rs_World = new double[2][3];
        pos_Robot_World = new double[2][3];
        vRs_Rs = new double[2][3];
        accelRs_Rs = new double[2][3];
        omegaRs_Rs = new double[2][3];
        quat_Rs_to_RsRel = new double[2][4];
        rpy_Rs_to_RsRel = new double[2][3];
        tracker_conf = new double[2];
        rpy_Robot_World = new double[2][3];
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0xdb86d09bbd2b0740L;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.realsense_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.realsense_lcmt.class);
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
            for (int b = 0; b < 3; b++) {
                outs.writeDouble(this.pos_Rs_Rs[a][b]); 
            }
        }
 
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                outs.writeDouble(this.pos_Rs_World[a][b]); 
            }
        }
 
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                outs.writeDouble(this.pos_Robot_World[a][b]); 
            }
        }
 
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                outs.writeDouble(this.vRs_Rs[a][b]); 
            }
        }
 
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                outs.writeDouble(this.accelRs_Rs[a][b]); 
            }
        }
 
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                outs.writeDouble(this.omegaRs_Rs[a][b]); 
            }
        }
 
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 4; b++) {
                outs.writeDouble(this.quat_Rs_to_RsRel[a][b]); 
            }
        }
 
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                outs.writeDouble(this.rpy_Rs_to_RsRel[a][b]); 
            }
        }
 
        for (int a = 0; a < 2; a++) {
            outs.writeDouble(this.tracker_conf[a]); 
        }
 
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                outs.writeDouble(this.rpy_Robot_World[a][b]); 
            }
        }
 
    }
 
    public realsense_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public realsense_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.realsense_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.realsense_lcmt o = new lcmtypes.realsense_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        this.pos_Rs_Rs = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                this.pos_Rs_Rs[a][b] = ins.readDouble();
            }
        }
 
        this.pos_Rs_World = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                this.pos_Rs_World[a][b] = ins.readDouble();
            }
        }
 
        this.pos_Robot_World = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                this.pos_Robot_World[a][b] = ins.readDouble();
            }
        }
 
        this.vRs_Rs = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                this.vRs_Rs[a][b] = ins.readDouble();
            }
        }
 
        this.accelRs_Rs = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                this.accelRs_Rs[a][b] = ins.readDouble();
            }
        }
 
        this.omegaRs_Rs = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                this.omegaRs_Rs[a][b] = ins.readDouble();
            }
        }
 
        this.quat_Rs_to_RsRel = new double[(int) 2][(int) 4];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 4; b++) {
                this.quat_Rs_to_RsRel[a][b] = ins.readDouble();
            }
        }
 
        this.rpy_Rs_to_RsRel = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                this.rpy_Rs_to_RsRel[a][b] = ins.readDouble();
            }
        }
 
        this.tracker_conf = new double[(int) 2];
        for (int a = 0; a < 2; a++) {
            this.tracker_conf[a] = ins.readDouble();
        }
 
        this.rpy_Robot_World = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                this.rpy_Robot_World[a][b] = ins.readDouble();
            }
        }
 
    }
 
    public lcmtypes.realsense_lcmt copy()
    {
        lcmtypes.realsense_lcmt outobj = new lcmtypes.realsense_lcmt();
        outobj.pos_Rs_Rs = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.pos_Rs_Rs[a], 0, outobj.pos_Rs_Rs[a], 0, 3);        }
 
        outobj.pos_Rs_World = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.pos_Rs_World[a], 0, outobj.pos_Rs_World[a], 0, 3);        }
 
        outobj.pos_Robot_World = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.pos_Robot_World[a], 0, outobj.pos_Robot_World[a], 0, 3);        }
 
        outobj.vRs_Rs = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.vRs_Rs[a], 0, outobj.vRs_Rs[a], 0, 3);        }
 
        outobj.accelRs_Rs = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.accelRs_Rs[a], 0, outobj.accelRs_Rs[a], 0, 3);        }
 
        outobj.omegaRs_Rs = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.omegaRs_Rs[a], 0, outobj.omegaRs_Rs[a], 0, 3);        }
 
        outobj.quat_Rs_to_RsRel = new double[(int) 2][(int) 4];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.quat_Rs_to_RsRel[a], 0, outobj.quat_Rs_to_RsRel[a], 0, 4);        }
 
        outobj.rpy_Rs_to_RsRel = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.rpy_Rs_to_RsRel[a], 0, outobj.rpy_Rs_to_RsRel[a], 0, 3);        }
 
        outobj.tracker_conf = new double[(int) 2];
        System.arraycopy(this.tracker_conf, 0, outobj.tracker_conf, 0, 2); 
        outobj.rpy_Robot_World = new double[(int) 2][(int) 3];
        for (int a = 0; a < 2; a++) {
            System.arraycopy(this.rpy_Robot_World[a], 0, outobj.rpy_Robot_World[a], 0, 3);        }
 
        return outobj;
    }
 
}

