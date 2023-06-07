"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class humanoid_arm_recovery_inputs_lcmt(object):
    __slots__ = ["RS_optim_iter", "fsm_iter", "ctrl_dt", "current_state", "desired_state", "gait_phase"]

    __typenames__ = ["int32_t", "int32_t", "double", "double", "double", "double"]

    __dimensions__ = [None, None, None, [48], [4], None]

    def __init__(self):
        self.RS_optim_iter = 0
        self.fsm_iter = 0
        self.ctrl_dt = 0.0
        self.current_state = [ 0.0 for dim0 in range(48) ]
        self.desired_state = [ 0.0 for dim0 in range(4) ]
        self.gait_phase = 0.0

    def encode(self):
        buf = BytesIO()
        buf.write(humanoid_arm_recovery_inputs_lcmt._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">iid", self.RS_optim_iter, self.fsm_iter, self.ctrl_dt))
        buf.write(struct.pack('>48d', *self.current_state[:48]))
        buf.write(struct.pack('>4d', *self.desired_state[:4]))
        buf.write(struct.pack(">d", self.gait_phase))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != humanoid_arm_recovery_inputs_lcmt._get_packed_fingerprint():
            raise ValueError("Decode error")
        return humanoid_arm_recovery_inputs_lcmt._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = humanoid_arm_recovery_inputs_lcmt()
        self.RS_optim_iter, self.fsm_iter, self.ctrl_dt = struct.unpack(">iid", buf.read(16))
        self.current_state = struct.unpack('>48d', buf.read(384))
        self.desired_state = struct.unpack('>4d', buf.read(32))
        self.gait_phase = struct.unpack(">d", buf.read(8))[0]
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if humanoid_arm_recovery_inputs_lcmt in parents: return 0
        tmphash = (0x9cce1eea0bab1479) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if humanoid_arm_recovery_inputs_lcmt._packed_fingerprint is None:
            humanoid_arm_recovery_inputs_lcmt._packed_fingerprint = struct.pack(">Q", humanoid_arm_recovery_inputs_lcmt._get_hash_recursive([]))
        return humanoid_arm_recovery_inputs_lcmt._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

