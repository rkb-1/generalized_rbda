"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class two_contact_stand_data_lcmt(object):
    __slots__ = ["exit_flag", "nWSR", "cpu_time_microseconds", "f_opt", "f_ref", "f_control", "f_unc", "minForces", "maxForces", "contact_state", "stance_legs", "p_des", "p_act", "rpy", "rpy_act", "lbA", "ubA", "C_times_f", "s", "cost_to_go", "Q_lqr", "R_lqr", "R_fil"]

    __typenames__ = ["double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double"]

    __dimensions__ = [None, None, None, [12], [4], [12], [12], [4], [4], [4], None, [3], [3], [3], [3], [20], [20], [20], [12], None, [12], None, None]

    def __init__(self):
        self.exit_flag = 0.0
        self.nWSR = 0.0
        self.cpu_time_microseconds = 0.0
        self.f_opt = [ 0.0 for dim0 in range(12) ]
        self.f_ref = [ 0.0 for dim0 in range(4) ]
        self.f_control = [ 0.0 for dim0 in range(12) ]
        self.f_unc = [ 0.0 for dim0 in range(12) ]
        self.minForces = [ 0.0 for dim0 in range(4) ]
        self.maxForces = [ 0.0 for dim0 in range(4) ]
        self.contact_state = [ 0.0 for dim0 in range(4) ]
        self.stance_legs = 0.0
        self.p_des = [ 0.0 for dim0 in range(3) ]
        self.p_act = [ 0.0 for dim0 in range(3) ]
        self.rpy = [ 0.0 for dim0 in range(3) ]
        self.rpy_act = [ 0.0 for dim0 in range(3) ]
        self.lbA = [ 0.0 for dim0 in range(20) ]
        self.ubA = [ 0.0 for dim0 in range(20) ]
        self.C_times_f = [ 0.0 for dim0 in range(20) ]
        self.s = [ 0.0 for dim0 in range(12) ]
        self.cost_to_go = 0.0
        self.Q_lqr = [ 0.0 for dim0 in range(12) ]
        self.R_lqr = 0.0
        self.R_fil = 0.0

    def encode(self):
        buf = BytesIO()
        buf.write(two_contact_stand_data_lcmt._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">ddd", self.exit_flag, self.nWSR, self.cpu_time_microseconds))
        buf.write(struct.pack('>12d', *self.f_opt[:12]))
        buf.write(struct.pack('>4d', *self.f_ref[:4]))
        buf.write(struct.pack('>12d', *self.f_control[:12]))
        buf.write(struct.pack('>12d', *self.f_unc[:12]))
        buf.write(struct.pack('>4d', *self.minForces[:4]))
        buf.write(struct.pack('>4d', *self.maxForces[:4]))
        buf.write(struct.pack('>4d', *self.contact_state[:4]))
        buf.write(struct.pack(">d", self.stance_legs))
        buf.write(struct.pack('>3d', *self.p_des[:3]))
        buf.write(struct.pack('>3d', *self.p_act[:3]))
        buf.write(struct.pack('>3d', *self.rpy[:3]))
        buf.write(struct.pack('>3d', *self.rpy_act[:3]))
        buf.write(struct.pack('>20d', *self.lbA[:20]))
        buf.write(struct.pack('>20d', *self.ubA[:20]))
        buf.write(struct.pack('>20d', *self.C_times_f[:20]))
        buf.write(struct.pack('>12d', *self.s[:12]))
        buf.write(struct.pack(">d", self.cost_to_go))
        buf.write(struct.pack('>12d', *self.Q_lqr[:12]))
        buf.write(struct.pack(">dd", self.R_lqr, self.R_fil))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != two_contact_stand_data_lcmt._get_packed_fingerprint():
            raise ValueError("Decode error")
        return two_contact_stand_data_lcmt._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = two_contact_stand_data_lcmt()
        self.exit_flag, self.nWSR, self.cpu_time_microseconds = struct.unpack(">ddd", buf.read(24))
        self.f_opt = struct.unpack('>12d', buf.read(96))
        self.f_ref = struct.unpack('>4d', buf.read(32))
        self.f_control = struct.unpack('>12d', buf.read(96))
        self.f_unc = struct.unpack('>12d', buf.read(96))
        self.minForces = struct.unpack('>4d', buf.read(32))
        self.maxForces = struct.unpack('>4d', buf.read(32))
        self.contact_state = struct.unpack('>4d', buf.read(32))
        self.stance_legs = struct.unpack(">d", buf.read(8))[0]
        self.p_des = struct.unpack('>3d', buf.read(24))
        self.p_act = struct.unpack('>3d', buf.read(24))
        self.rpy = struct.unpack('>3d', buf.read(24))
        self.rpy_act = struct.unpack('>3d', buf.read(24))
        self.lbA = struct.unpack('>20d', buf.read(160))
        self.ubA = struct.unpack('>20d', buf.read(160))
        self.C_times_f = struct.unpack('>20d', buf.read(160))
        self.s = struct.unpack('>12d', buf.read(96))
        self.cost_to_go = struct.unpack(">d", buf.read(8))[0]
        self.Q_lqr = struct.unpack('>12d', buf.read(96))
        self.R_lqr, self.R_fil = struct.unpack(">dd", buf.read(16))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if two_contact_stand_data_lcmt in parents: return 0
        tmphash = (0x1d23a52a90d0daac) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if two_contact_stand_data_lcmt._packed_fingerprint is None:
            two_contact_stand_data_lcmt._packed_fingerprint = struct.pack(">Q", two_contact_stand_data_lcmt._get_hash_recursive([]))
        return two_contact_stand_data_lcmt._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

