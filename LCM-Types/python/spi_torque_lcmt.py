"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class spi_torque_lcmt(object):
    __slots__ = ["tau_abad", "tau_hip", "tau_knee"]

    __typenames__ = ["float", "float", "float"]

    __dimensions__ = [[4], [4], [4]]

    def __init__(self):
        self.tau_abad = [ 0.0 for dim0 in range(4) ]
        self.tau_hip = [ 0.0 for dim0 in range(4) ]
        self.tau_knee = [ 0.0 for dim0 in range(4) ]

    def encode(self):
        buf = BytesIO()
        buf.write(spi_torque_lcmt._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack('>4f', *self.tau_abad[:4]))
        buf.write(struct.pack('>4f', *self.tau_hip[:4]))
        buf.write(struct.pack('>4f', *self.tau_knee[:4]))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != spi_torque_lcmt._get_packed_fingerprint():
            raise ValueError("Decode error")
        return spi_torque_lcmt._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = spi_torque_lcmt()
        self.tau_abad = struct.unpack('>4f', buf.read(16))
        self.tau_hip = struct.unpack('>4f', buf.read(16))
        self.tau_knee = struct.unpack('>4f', buf.read(16))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if spi_torque_lcmt in parents: return 0
        tmphash = (0xa847131dd865b527) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if spi_torque_lcmt._packed_fingerprint is None:
            spi_torque_lcmt._packed_fingerprint = struct.pack(">Q", spi_torque_lcmt._get_hash_recursive([]))
        return spi_torque_lcmt._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

