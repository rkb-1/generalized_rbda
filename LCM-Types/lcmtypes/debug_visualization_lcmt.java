/* LCM type definition class file
 * This file was automatically generated by lcm-gen
 * DO NOT MODIFY BY HAND!!!!
 */

package lcmtypes;
 
import java.io.*;
import java.util.*;
import lcm.lcm.*;
 
public final class debug_visualization_lcmt implements lcm.lcm.LCMEncodable
{
    public int sphere_count;
    public int sphere_elements;
    public int sphere_position_elements;
    public int sphere_color_elements;
    public float sphere_positions[];
    public float sphere_radii[];
    public float sphere_colors[];
    public int obst_count;
    public int obst_elements;
    public int obst_position_elements;
    public int obst_dim_elements;
    public int obst_rpy_elements;
    public int obst_color_elements;
    public float obst_positions[];
    public float obst_oris[];
    public float obst_dims[];
    public float obst_colors[];
    public int path_count;
    public int path_elements;
    public int path_position_elements;
    public int path_color_elements;
    public int path_lengths[];
    public int path_start_idxs[];
    public float path_widths[];
    public float path_positions[];
    public float path_colors[];
    public int arrow_count;
    public int arrow_elements;
    public int arrow_position_elements;
    public int arrow_color_elements;
    public String arrow_ids[];
    public float arrow_nom[];
    public float arrow_base_positions[];
    public float arrow_directions[];
    public float arrow_colors[];
 
    public debug_visualization_lcmt()
    {
    }
 
    public static final long LCM_FINGERPRINT;
    public static final long LCM_FINGERPRINT_BASE = 0x0b9dfd6fd3533d6fL;
 
    static {
        LCM_FINGERPRINT = _hashRecursive(new ArrayList<Class<?>>());
    }
 
    public static long _hashRecursive(ArrayList<Class<?>> classes)
    {
        if (classes.contains(lcmtypes.debug_visualization_lcmt.class))
            return 0L;
 
        classes.add(lcmtypes.debug_visualization_lcmt.class);
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
        char[] __strbuf = null;
        outs.writeInt(this.sphere_count); 
 
        outs.writeInt(this.sphere_elements); 
 
        outs.writeInt(this.sphere_position_elements); 
 
        outs.writeInt(this.sphere_color_elements); 
 
        for (int a = 0; a < this.sphere_position_elements; a++) {
            outs.writeFloat(this.sphere_positions[a]); 
        }
 
        for (int a = 0; a < this.sphere_elements; a++) {
            outs.writeFloat(this.sphere_radii[a]); 
        }
 
        for (int a = 0; a < this.sphere_color_elements; a++) {
            outs.writeFloat(this.sphere_colors[a]); 
        }
 
        outs.writeInt(this.obst_count); 
 
        outs.writeInt(this.obst_elements); 
 
        outs.writeInt(this.obst_position_elements); 
 
        outs.writeInt(this.obst_dim_elements); 
 
        outs.writeInt(this.obst_rpy_elements); 
 
        outs.writeInt(this.obst_color_elements); 
 
        for (int a = 0; a < this.obst_position_elements; a++) {
            outs.writeFloat(this.obst_positions[a]); 
        }
 
        for (int a = 0; a < this.obst_rpy_elements; a++) {
            outs.writeFloat(this.obst_oris[a]); 
        }
 
        for (int a = 0; a < this.obst_position_elements; a++) {
            outs.writeFloat(this.obst_dims[a]); 
        }
 
        for (int a = 0; a < this.obst_color_elements; a++) {
            outs.writeFloat(this.obst_colors[a]); 
        }
 
        outs.writeInt(this.path_count); 
 
        outs.writeInt(this.path_elements); 
 
        outs.writeInt(this.path_position_elements); 
 
        outs.writeInt(this.path_color_elements); 
 
        for (int a = 0; a < this.path_elements; a++) {
            outs.writeInt(this.path_lengths[a]); 
        }
 
        for (int a = 0; a < this.path_elements; a++) {
            outs.writeInt(this.path_start_idxs[a]); 
        }
 
        for (int a = 0; a < this.path_elements; a++) {
            outs.writeFloat(this.path_widths[a]); 
        }
 
        for (int a = 0; a < this.path_position_elements; a++) {
            outs.writeFloat(this.path_positions[a]); 
        }
 
        for (int a = 0; a < this.path_color_elements; a++) {
            outs.writeFloat(this.path_colors[a]); 
        }
 
        outs.writeInt(this.arrow_count); 
 
        outs.writeInt(this.arrow_elements); 
 
        outs.writeInt(this.arrow_position_elements); 
 
        outs.writeInt(this.arrow_color_elements); 
 
        for (int a = 0; a < this.arrow_elements; a++) {
            __strbuf = new char[this.arrow_ids[a].length()]; this.arrow_ids[a].getChars(0, this.arrow_ids[a].length(), __strbuf, 0); outs.writeInt(__strbuf.length+1); for (int _i = 0; _i < __strbuf.length; _i++) outs.write(__strbuf[_i]); outs.writeByte(0); 
        }
 
        for (int a = 0; a < this.arrow_elements; a++) {
            outs.writeFloat(this.arrow_nom[a]); 
        }
 
        for (int a = 0; a < this.arrow_position_elements; a++) {
            outs.writeFloat(this.arrow_base_positions[a]); 
        }
 
        for (int a = 0; a < this.arrow_position_elements; a++) {
            outs.writeFloat(this.arrow_directions[a]); 
        }
 
        for (int a = 0; a < this.arrow_color_elements; a++) {
            outs.writeFloat(this.arrow_colors[a]); 
        }
 
    }
 
    public debug_visualization_lcmt(byte[] data) throws IOException
    {
        this(new LCMDataInputStream(data));
    }
 
    public debug_visualization_lcmt(DataInput ins) throws IOException
    {
        if (ins.readLong() != LCM_FINGERPRINT)
            throw new IOException("LCM Decode error: bad fingerprint");
 
        _decodeRecursive(ins);
    }
 
    public static lcmtypes.debug_visualization_lcmt _decodeRecursiveFactory(DataInput ins) throws IOException
    {
        lcmtypes.debug_visualization_lcmt o = new lcmtypes.debug_visualization_lcmt();
        o._decodeRecursive(ins);
        return o;
    }
 
    public void _decodeRecursive(DataInput ins) throws IOException
    {
        char[] __strbuf = null;
        this.sphere_count = ins.readInt();
 
        this.sphere_elements = ins.readInt();
 
        this.sphere_position_elements = ins.readInt();
 
        this.sphere_color_elements = ins.readInt();
 
        this.sphere_positions = new float[(int) sphere_position_elements];
        for (int a = 0; a < this.sphere_position_elements; a++) {
            this.sphere_positions[a] = ins.readFloat();
        }
 
        this.sphere_radii = new float[(int) sphere_elements];
        for (int a = 0; a < this.sphere_elements; a++) {
            this.sphere_radii[a] = ins.readFloat();
        }
 
        this.sphere_colors = new float[(int) sphere_color_elements];
        for (int a = 0; a < this.sphere_color_elements; a++) {
            this.sphere_colors[a] = ins.readFloat();
        }
 
        this.obst_count = ins.readInt();
 
        this.obst_elements = ins.readInt();
 
        this.obst_position_elements = ins.readInt();
 
        this.obst_dim_elements = ins.readInt();
 
        this.obst_rpy_elements = ins.readInt();
 
        this.obst_color_elements = ins.readInt();
 
        this.obst_positions = new float[(int) obst_position_elements];
        for (int a = 0; a < this.obst_position_elements; a++) {
            this.obst_positions[a] = ins.readFloat();
        }
 
        this.obst_oris = new float[(int) obst_rpy_elements];
        for (int a = 0; a < this.obst_rpy_elements; a++) {
            this.obst_oris[a] = ins.readFloat();
        }
 
        this.obst_dims = new float[(int) obst_position_elements];
        for (int a = 0; a < this.obst_position_elements; a++) {
            this.obst_dims[a] = ins.readFloat();
        }
 
        this.obst_colors = new float[(int) obst_color_elements];
        for (int a = 0; a < this.obst_color_elements; a++) {
            this.obst_colors[a] = ins.readFloat();
        }
 
        this.path_count = ins.readInt();
 
        this.path_elements = ins.readInt();
 
        this.path_position_elements = ins.readInt();
 
        this.path_color_elements = ins.readInt();
 
        this.path_lengths = new int[(int) path_elements];
        for (int a = 0; a < this.path_elements; a++) {
            this.path_lengths[a] = ins.readInt();
        }
 
        this.path_start_idxs = new int[(int) path_elements];
        for (int a = 0; a < this.path_elements; a++) {
            this.path_start_idxs[a] = ins.readInt();
        }
 
        this.path_widths = new float[(int) path_elements];
        for (int a = 0; a < this.path_elements; a++) {
            this.path_widths[a] = ins.readFloat();
        }
 
        this.path_positions = new float[(int) path_position_elements];
        for (int a = 0; a < this.path_position_elements; a++) {
            this.path_positions[a] = ins.readFloat();
        }
 
        this.path_colors = new float[(int) path_color_elements];
        for (int a = 0; a < this.path_color_elements; a++) {
            this.path_colors[a] = ins.readFloat();
        }
 
        this.arrow_count = ins.readInt();
 
        this.arrow_elements = ins.readInt();
 
        this.arrow_position_elements = ins.readInt();
 
        this.arrow_color_elements = ins.readInt();
 
        this.arrow_ids = new String[(int) arrow_elements];
        for (int a = 0; a < this.arrow_elements; a++) {
            __strbuf = new char[ins.readInt()-1]; for (int _i = 0; _i < __strbuf.length; _i++) __strbuf[_i] = (char) (ins.readByte()&0xff); ins.readByte(); this.arrow_ids[a] = new String(__strbuf);
        }
 
        this.arrow_nom = new float[(int) arrow_elements];
        for (int a = 0; a < this.arrow_elements; a++) {
            this.arrow_nom[a] = ins.readFloat();
        }
 
        this.arrow_base_positions = new float[(int) arrow_position_elements];
        for (int a = 0; a < this.arrow_position_elements; a++) {
            this.arrow_base_positions[a] = ins.readFloat();
        }
 
        this.arrow_directions = new float[(int) arrow_position_elements];
        for (int a = 0; a < this.arrow_position_elements; a++) {
            this.arrow_directions[a] = ins.readFloat();
        }
 
        this.arrow_colors = new float[(int) arrow_color_elements];
        for (int a = 0; a < this.arrow_color_elements; a++) {
            this.arrow_colors[a] = ins.readFloat();
        }
 
    }
 
    public lcmtypes.debug_visualization_lcmt copy()
    {
        lcmtypes.debug_visualization_lcmt outobj = new lcmtypes.debug_visualization_lcmt();
        outobj.sphere_count = this.sphere_count;
 
        outobj.sphere_elements = this.sphere_elements;
 
        outobj.sphere_position_elements = this.sphere_position_elements;
 
        outobj.sphere_color_elements = this.sphere_color_elements;
 
        outobj.sphere_positions = new float[(int) sphere_position_elements];
        if (this.sphere_position_elements > 0)
            System.arraycopy(this.sphere_positions, 0, outobj.sphere_positions, 0, this.sphere_position_elements); 
        outobj.sphere_radii = new float[(int) sphere_elements];
        if (this.sphere_elements > 0)
            System.arraycopy(this.sphere_radii, 0, outobj.sphere_radii, 0, this.sphere_elements); 
        outobj.sphere_colors = new float[(int) sphere_color_elements];
        if (this.sphere_color_elements > 0)
            System.arraycopy(this.sphere_colors, 0, outobj.sphere_colors, 0, this.sphere_color_elements); 
        outobj.obst_count = this.obst_count;
 
        outobj.obst_elements = this.obst_elements;
 
        outobj.obst_position_elements = this.obst_position_elements;
 
        outobj.obst_dim_elements = this.obst_dim_elements;
 
        outobj.obst_rpy_elements = this.obst_rpy_elements;
 
        outobj.obst_color_elements = this.obst_color_elements;
 
        outobj.obst_positions = new float[(int) obst_position_elements];
        if (this.obst_position_elements > 0)
            System.arraycopy(this.obst_positions, 0, outobj.obst_positions, 0, this.obst_position_elements); 
        outobj.obst_oris = new float[(int) obst_rpy_elements];
        if (this.obst_rpy_elements > 0)
            System.arraycopy(this.obst_oris, 0, outobj.obst_oris, 0, this.obst_rpy_elements); 
        outobj.obst_dims = new float[(int) obst_position_elements];
        if (this.obst_position_elements > 0)
            System.arraycopy(this.obst_dims, 0, outobj.obst_dims, 0, this.obst_position_elements); 
        outobj.obst_colors = new float[(int) obst_color_elements];
        if (this.obst_color_elements > 0)
            System.arraycopy(this.obst_colors, 0, outobj.obst_colors, 0, this.obst_color_elements); 
        outobj.path_count = this.path_count;
 
        outobj.path_elements = this.path_elements;
 
        outobj.path_position_elements = this.path_position_elements;
 
        outobj.path_color_elements = this.path_color_elements;
 
        outobj.path_lengths = new int[(int) path_elements];
        if (this.path_elements > 0)
            System.arraycopy(this.path_lengths, 0, outobj.path_lengths, 0, this.path_elements); 
        outobj.path_start_idxs = new int[(int) path_elements];
        if (this.path_elements > 0)
            System.arraycopy(this.path_start_idxs, 0, outobj.path_start_idxs, 0, this.path_elements); 
        outobj.path_widths = new float[(int) path_elements];
        if (this.path_elements > 0)
            System.arraycopy(this.path_widths, 0, outobj.path_widths, 0, this.path_elements); 
        outobj.path_positions = new float[(int) path_position_elements];
        if (this.path_position_elements > 0)
            System.arraycopy(this.path_positions, 0, outobj.path_positions, 0, this.path_position_elements); 
        outobj.path_colors = new float[(int) path_color_elements];
        if (this.path_color_elements > 0)
            System.arraycopy(this.path_colors, 0, outobj.path_colors, 0, this.path_color_elements); 
        outobj.arrow_count = this.arrow_count;
 
        outobj.arrow_elements = this.arrow_elements;
 
        outobj.arrow_position_elements = this.arrow_position_elements;
 
        outobj.arrow_color_elements = this.arrow_color_elements;
 
        outobj.arrow_ids = new String[(int) arrow_elements];
        if (this.arrow_elements > 0)
            System.arraycopy(this.arrow_ids, 0, outobj.arrow_ids, 0, this.arrow_elements); 
        outobj.arrow_nom = new float[(int) arrow_elements];
        if (this.arrow_elements > 0)
            System.arraycopy(this.arrow_nom, 0, outobj.arrow_nom, 0, this.arrow_elements); 
        outobj.arrow_base_positions = new float[(int) arrow_position_elements];
        if (this.arrow_position_elements > 0)
            System.arraycopy(this.arrow_base_positions, 0, outobj.arrow_base_positions, 0, this.arrow_position_elements); 
        outobj.arrow_directions = new float[(int) arrow_position_elements];
        if (this.arrow_position_elements > 0)
            System.arraycopy(this.arrow_directions, 0, outobj.arrow_directions, 0, this.arrow_position_elements); 
        outobj.arrow_colors = new float[(int) arrow_color_elements];
        if (this.arrow_color_elements > 0)
            System.arraycopy(this.arrow_colors, 0, outobj.arrow_colors, 0, this.arrow_color_elements); 
        return outobj;
    }
 
}

