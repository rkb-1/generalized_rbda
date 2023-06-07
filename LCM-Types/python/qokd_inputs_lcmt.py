"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class qokd_inputs_lcmt(object):
    __slots__ = ["NUM_U_TIMESTEPS", "NUM_X_VAR_TRAJ", "NUM_U_VAR_TRAJ", "NUM_OPT_VAR_TRAJ", "NUM_GC", "NUM_GC_x3", "NUM_GAIT_TABLE", "NUM_FB_DOF", "Xref", "Uref", "gait_schedule", "dt_opt", "mass", "mu", "f_max", "q_min", "q_max", "qd_min", "qd_max", "q_init", "qd_init", "c_init", "q_term_min", "q_term_max", "qd_term_min", "qd_term_max", "r_term_min", "r_term_max", "rd_term_min", "rd_term_max", "h_term_min", "h_term_max", "Qq", "Qv", "Qr", "Qc", "Qh", "Qf", "Qrdd", "Qhd", "QNq", "QNv", "QNr", "QNc", "QNh", "init_guess"]

    __typenames__ = ["int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double"]

    __dimensions__ = [None, None, None, None, None, None, None, None, ["NUM_X_VAR_TRAJ"], ["NUM_U_VAR_TRAJ"], ["NUM_GAIT_TABLE"], ["NUM_U_TIMESTEPS"], None, None, ["NUM_GC"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], [6], [6], ["NUM_GC_x3"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], [3], [3], [3], [3], [3], [3], ["NUM_FB_DOF"], ["NUM_FB_DOF"], [6], ["NUM_GC_x3"], [3], ["NUM_GC_x3"], [3], [3], ["NUM_FB_DOF"], ["NUM_FB_DOF"], [6], ["NUM_GC_x3"], [3], ["NUM_OPT_VAR_TRAJ"]]

    def __init__(self):
        self.NUM_U_TIMESTEPS = 0
        self.NUM_X_VAR_TRAJ = 0
        self.NUM_U_VAR_TRAJ = 0
        self.NUM_OPT_VAR_TRAJ = 0
        self.NUM_GC = 0
        self.NUM_GC_x3 = 0
        self.NUM_GAIT_TABLE = 0
        self.NUM_FB_DOF = 0
        self.Xref = []
        self.Uref = []
        self.gait_schedule = []
        self.dt_opt = []
        self.mass = 0.0
        self.mu = 0.0
        self.f_max = []
        self.q_min = []
        self.q_max = []
        self.qd_min = []
        self.qd_max = []
        self.q_init = [ 0.0 for dim0 in range(6) ]
        self.qd_init = [ 0.0 for dim0 in range(6) ]
        self.c_init = []
        self.q_term_min = []
        self.q_term_max = []
        self.qd_term_min = []
        self.qd_term_max = []
        self.r_term_min = [ 0.0 for dim0 in range(3) ]
        self.r_term_max = [ 0.0 for dim0 in range(3) ]
        self.rd_term_min = [ 0.0 for dim0 in range(3) ]
        self.rd_term_max = [ 0.0 for dim0 in range(3) ]
        self.h_term_min = [ 0.0 for dim0 in range(3) ]
        self.h_term_max = [ 0.0 for dim0 in range(3) ]
        self.Qq = []
        self.Qv = []
        self.Qr = [ 0.0 for dim0 in range(6) ]
        self.Qc = []
        self.Qh = [ 0.0 for dim0 in range(3) ]
        self.Qf = []
        self.Qrdd = [ 0.0 for dim0 in range(3) ]
        self.Qhd = [ 0.0 for dim0 in range(3) ]
        self.QNq = []
        self.QNv = []
        self.QNr = [ 0.0 for dim0 in range(6) ]
        self.QNc = []
        self.QNh = [ 0.0 for dim0 in range(3) ]
        self.init_guess = []

    def encode(self):
        buf = BytesIO()
        buf.write(qokd_inputs_lcmt._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">iiiiiiii", self.NUM_U_TIMESTEPS, self.NUM_X_VAR_TRAJ, self.NUM_U_VAR_TRAJ, self.NUM_OPT_VAR_TRAJ, self.NUM_GC, self.NUM_GC_x3, self.NUM_GAIT_TABLE, self.NUM_FB_DOF))
        buf.write(struct.pack('>%dd' % self.NUM_X_VAR_TRAJ, *self.Xref[:self.NUM_X_VAR_TRAJ]))
        buf.write(struct.pack('>%dd' % self.NUM_U_VAR_TRAJ, *self.Uref[:self.NUM_U_VAR_TRAJ]))
        buf.write(struct.pack('>%dd' % self.NUM_GAIT_TABLE, *self.gait_schedule[:self.NUM_GAIT_TABLE]))
        buf.write(struct.pack('>%dd' % self.NUM_U_TIMESTEPS, *self.dt_opt[:self.NUM_U_TIMESTEPS]))
        buf.write(struct.pack(">dd", self.mass, self.mu))
        buf.write(struct.pack('>%dd' % self.NUM_GC, *self.f_max[:self.NUM_GC]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.q_min[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.q_max[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.qd_min[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.qd_max[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>6d', *self.q_init[:6]))
        buf.write(struct.pack('>6d', *self.qd_init[:6]))
        buf.write(struct.pack('>%dd' % self.NUM_GC_x3, *self.c_init[:self.NUM_GC_x3]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.q_term_min[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.q_term_max[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.qd_term_min[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.qd_term_max[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>3d', *self.r_term_min[:3]))
        buf.write(struct.pack('>3d', *self.r_term_max[:3]))
        buf.write(struct.pack('>3d', *self.rd_term_min[:3]))
        buf.write(struct.pack('>3d', *self.rd_term_max[:3]))
        buf.write(struct.pack('>3d', *self.h_term_min[:3]))
        buf.write(struct.pack('>3d', *self.h_term_max[:3]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.Qq[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.Qv[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>6d', *self.Qr[:6]))
        buf.write(struct.pack('>%dd' % self.NUM_GC_x3, *self.Qc[:self.NUM_GC_x3]))
        buf.write(struct.pack('>3d', *self.Qh[:3]))
        buf.write(struct.pack('>%dd' % self.NUM_GC_x3, *self.Qf[:self.NUM_GC_x3]))
        buf.write(struct.pack('>3d', *self.Qrdd[:3]))
        buf.write(struct.pack('>3d', *self.Qhd[:3]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.QNq[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.QNv[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>6d', *self.QNr[:6]))
        buf.write(struct.pack('>%dd' % self.NUM_GC_x3, *self.QNc[:self.NUM_GC_x3]))
        buf.write(struct.pack('>3d', *self.QNh[:3]))
        buf.write(struct.pack('>%dd' % self.NUM_OPT_VAR_TRAJ, *self.init_guess[:self.NUM_OPT_VAR_TRAJ]))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != qokd_inputs_lcmt._get_packed_fingerprint():
            raise ValueError("Decode error")
        return qokd_inputs_lcmt._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = qokd_inputs_lcmt()
        self.NUM_U_TIMESTEPS, self.NUM_X_VAR_TRAJ, self.NUM_U_VAR_TRAJ, self.NUM_OPT_VAR_TRAJ, self.NUM_GC, self.NUM_GC_x3, self.NUM_GAIT_TABLE, self.NUM_FB_DOF = struct.unpack(">iiiiiiii", buf.read(32))
        self.Xref = struct.unpack('>%dd' % self.NUM_X_VAR_TRAJ, buf.read(self.NUM_X_VAR_TRAJ * 8))
        self.Uref = struct.unpack('>%dd' % self.NUM_U_VAR_TRAJ, buf.read(self.NUM_U_VAR_TRAJ * 8))
        self.gait_schedule = struct.unpack('>%dd' % self.NUM_GAIT_TABLE, buf.read(self.NUM_GAIT_TABLE * 8))
        self.dt_opt = struct.unpack('>%dd' % self.NUM_U_TIMESTEPS, buf.read(self.NUM_U_TIMESTEPS * 8))
        self.mass, self.mu = struct.unpack(">dd", buf.read(16))
        self.f_max = struct.unpack('>%dd' % self.NUM_GC, buf.read(self.NUM_GC * 8))
        self.q_min = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.q_max = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.qd_min = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.qd_max = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.q_init = struct.unpack('>6d', buf.read(48))
        self.qd_init = struct.unpack('>6d', buf.read(48))
        self.c_init = struct.unpack('>%dd' % self.NUM_GC_x3, buf.read(self.NUM_GC_x3 * 8))
        self.q_term_min = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.q_term_max = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.qd_term_min = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.qd_term_max = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.r_term_min = struct.unpack('>3d', buf.read(24))
        self.r_term_max = struct.unpack('>3d', buf.read(24))
        self.rd_term_min = struct.unpack('>3d', buf.read(24))
        self.rd_term_max = struct.unpack('>3d', buf.read(24))
        self.h_term_min = struct.unpack('>3d', buf.read(24))
        self.h_term_max = struct.unpack('>3d', buf.read(24))
        self.Qq = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.Qv = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.Qr = struct.unpack('>6d', buf.read(48))
        self.Qc = struct.unpack('>%dd' % self.NUM_GC_x3, buf.read(self.NUM_GC_x3 * 8))
        self.Qh = struct.unpack('>3d', buf.read(24))
        self.Qf = struct.unpack('>%dd' % self.NUM_GC_x3, buf.read(self.NUM_GC_x3 * 8))
        self.Qrdd = struct.unpack('>3d', buf.read(24))
        self.Qhd = struct.unpack('>3d', buf.read(24))
        self.QNq = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.QNv = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.QNr = struct.unpack('>6d', buf.read(48))
        self.QNc = struct.unpack('>%dd' % self.NUM_GC_x3, buf.read(self.NUM_GC_x3 * 8))
        self.QNh = struct.unpack('>3d', buf.read(24))
        self.init_guess = struct.unpack('>%dd' % self.NUM_OPT_VAR_TRAJ, buf.read(self.NUM_OPT_VAR_TRAJ * 8))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if qokd_inputs_lcmt in parents: return 0
        tmphash = (0x36dd1fbfa2fb8c35) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if qokd_inputs_lcmt._packed_fingerprint is None:
            qokd_inputs_lcmt._packed_fingerprint = struct.pack(">Q", qokd_inputs_lcmt._get_hash_recursive([]))
        return qokd_inputs_lcmt._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

