"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class taqokd_outputs_lcmt(object):
    __slots__ = ["NUM_OPT_VAR_TRAJ", "Xopt", "obj_val", "t_solve", "opt_solved", "iter"]

    __typenames__ = ["int32_t", "double", "double", "double", "int32_t", "int32_t"]

    __dimensions__ = [None, ["NUM_OPT_VAR_TRAJ"], None, None, None, None]

    def __init__(self):
        self.NUM_OPT_VAR_TRAJ = 0
        self.Xopt = []
        self.obj_val = 0.0
        self.t_solve = 0.0
        self.opt_solved = 0
        self.iter = 0

    def encode(self):
        buf = BytesIO()
        buf.write(taqokd_outputs_lcmt._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">i", self.NUM_OPT_VAR_TRAJ))
        buf.write(struct.pack('>%dd' % self.NUM_OPT_VAR_TRAJ, *self.Xopt[:self.NUM_OPT_VAR_TRAJ]))
        buf.write(struct.pack(">ddii", self.obj_val, self.t_solve, self.opt_solved, self.iter))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != taqokd_outputs_lcmt._get_packed_fingerprint():
            raise ValueError("Decode error")
        return taqokd_outputs_lcmt._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = taqokd_outputs_lcmt()
        self.NUM_OPT_VAR_TRAJ = struct.unpack(">i", buf.read(4))[0]
        self.Xopt = struct.unpack('>%dd' % self.NUM_OPT_VAR_TRAJ, buf.read(self.NUM_OPT_VAR_TRAJ * 8))
        self.obj_val, self.t_solve, self.opt_solved, self.iter = struct.unpack(">ddii", buf.read(24))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if taqokd_outputs_lcmt in parents: return 0
        tmphash = (0xf852c5d4497f4178) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if taqokd_outputs_lcmt._packed_fingerprint is None:
            taqokd_outputs_lcmt._packed_fingerprint = struct.pack(">Q", taqokd_outputs_lcmt._get_hash_recursive([]))
        return taqokd_outputs_lcmt._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

