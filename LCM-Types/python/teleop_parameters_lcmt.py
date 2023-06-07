"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class teleop_parameters_lcmt(object):
    __slots__ = ["control_mode", "key_vertical", "key_horizontal", "key_turn", "key_pitch", "stick_right_vertical", "stick_right_horizontal", "stick_left_vertical", "stick_left_horizontal", "jump_trigger", "xbox_ctrl"]

    __typenames__ = ["int64_t", "float", "float", "float", "float", "float", "float", "float", "float", "boolean", "boolean"]

    __dimensions__ = [None, None, None, None, None, None, None, None, None, None, None]

    def __init__(self):
        self.control_mode = 0
        self.key_vertical = 0.0
        self.key_horizontal = 0.0
        self.key_turn = 0.0
        self.key_pitch = 0.0
        self.stick_right_vertical = 0.0
        self.stick_right_horizontal = 0.0
        self.stick_left_vertical = 0.0
        self.stick_left_horizontal = 0.0
        self.jump_trigger = False
        self.xbox_ctrl = False

    def encode(self):
        buf = BytesIO()
        buf.write(teleop_parameters_lcmt._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">qffffffffbb", self.control_mode, self.key_vertical, self.key_horizontal, self.key_turn, self.key_pitch, self.stick_right_vertical, self.stick_right_horizontal, self.stick_left_vertical, self.stick_left_horizontal, self.jump_trigger, self.xbox_ctrl))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != teleop_parameters_lcmt._get_packed_fingerprint():
            raise ValueError("Decode error")
        return teleop_parameters_lcmt._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = teleop_parameters_lcmt()
        self.control_mode, self.key_vertical, self.key_horizontal, self.key_turn, self.key_pitch, self.stick_right_vertical, self.stick_right_horizontal, self.stick_left_vertical, self.stick_left_horizontal = struct.unpack(">qffffffff", buf.read(40))
        self.jump_trigger = bool(struct.unpack('b', buf.read(1))[0])
        self.xbox_ctrl = bool(struct.unpack('b', buf.read(1))[0])
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if teleop_parameters_lcmt in parents: return 0
        tmphash = (0x422d537ae0414949) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if teleop_parameters_lcmt._packed_fingerprint is None:
            teleop_parameters_lcmt._packed_fingerprint = struct.pack(">Q", teleop_parameters_lcmt._get_hash_recursive([]))
        return teleop_parameters_lcmt._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

