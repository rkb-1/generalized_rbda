"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class network_evaluation_lcmt(object):
    __slots__ = ["fr_network_x", "fr_network_y", "fr_network_z", "fr_mpc_x", "fr_mpc_y", "fr_mpc_z"]

    __typenames__ = ["float", "float", "float", "float", "float", "float"]

    __dimensions__ = [[4], [4], [4], [4], [4], [4]]

    def __init__(self):
        self.fr_network_x = [ 0.0 for dim0 in range(4) ]
        self.fr_network_y = [ 0.0 for dim0 in range(4) ]
        self.fr_network_z = [ 0.0 for dim0 in range(4) ]
        self.fr_mpc_x = [ 0.0 for dim0 in range(4) ]
        self.fr_mpc_y = [ 0.0 for dim0 in range(4) ]
        self.fr_mpc_z = [ 0.0 for dim0 in range(4) ]

    def encode(self):
        buf = BytesIO()
        buf.write(network_evaluation_lcmt._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack('>4f', *self.fr_network_x[:4]))
        buf.write(struct.pack('>4f', *self.fr_network_y[:4]))
        buf.write(struct.pack('>4f', *self.fr_network_z[:4]))
        buf.write(struct.pack('>4f', *self.fr_mpc_x[:4]))
        buf.write(struct.pack('>4f', *self.fr_mpc_y[:4]))
        buf.write(struct.pack('>4f', *self.fr_mpc_z[:4]))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != network_evaluation_lcmt._get_packed_fingerprint():
            raise ValueError("Decode error")
        return network_evaluation_lcmt._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = network_evaluation_lcmt()
        self.fr_network_x = struct.unpack('>4f', buf.read(16))
        self.fr_network_y = struct.unpack('>4f', buf.read(16))
        self.fr_network_z = struct.unpack('>4f', buf.read(16))
        self.fr_mpc_x = struct.unpack('>4f', buf.read(16))
        self.fr_mpc_y = struct.unpack('>4f', buf.read(16))
        self.fr_mpc_z = struct.unpack('>4f', buf.read(16))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if network_evaluation_lcmt in parents: return 0
        tmphash = (0xd353cbda286a2d64) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if network_evaluation_lcmt._packed_fingerprint is None:
            network_evaluation_lcmt._packed_fingerprint = struct.pack(">Q", network_evaluation_lcmt._get_hash_recursive([]))
        return network_evaluation_lcmt._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

