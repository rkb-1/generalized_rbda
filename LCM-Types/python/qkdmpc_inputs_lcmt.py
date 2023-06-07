"""LCM type definitions
This file automatically generated by lcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class qkdmpc_inputs_lcmt(object):
    __slots__ = ["NUM_X_VAR", "NUM_U_VAR", "NUM_TIMESTEPS", "NUM_U_TIMESTEPS", "NUM_X_VAR_TRAJ", "NUM_U_VAR_TRAJ", "NUM_OPT_VAR_TRAJ", "NUM_G_CONSTRAINTS", "NUM_X_CONSTRAINTS", "NUM_LEGS", "NUM_LEGS_x3", "NUM_FB_DOF", "NUM_GAIT_TABLE", "NUM_GAIT_PHASE", "DETECT_SIMPLE_BOUNDS", "Xref", "Uref", "gait_schedule", "dt", "t_opt", "q_min", "q_max", "qd_min", "qd_max", "rd_init", "q_init", "qd_init", "c_init", "q_term_min", "q_term_max", "qd_term_min", "qd_term_max", "r_term_min", "r_term_max", "rd_term_min", "rd_term_max", "h_term_min", "h_term_max", "Qq", "Qv", "Qr", "Qh", "Qc", "QNq", "QNv", "QNr", "QNh", "QNc", "X_init_guess", "lambdaG_init_guess", "lambdaX_init_guess", "Phi"]

    __typenames__ = ["int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "int32_t", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double", "double"]

    __dimensions__ = [None, None, None, None, None, None, None, None, None, None, None, None, None, None, None, ["NUM_X_VAR_TRAJ"], ["NUM_U_VAR_TRAJ"], ["NUM_GAIT_TABLE"], ["NUM_U_TIMESTEPS"], ["NUM_TIMESTEPS"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], [3], [6], [3], ["NUM_LEGS_x3"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], [3], [3], [3], [3], [3], [3], ["NUM_FB_DOF"], ["NUM_FB_DOF"], [6], [3], ["NUM_LEGS_x3"], ["NUM_FB_DOF"], ["NUM_FB_DOF"], [6], [3], ["NUM_LEGS_x3"], ["NUM_OPT_VAR_TRAJ"], ["NUM_G_CONSTRAINTS"], ["NUM_X_CONSTRAINTS"], ["NUM_GAIT_PHASE"]]

    def __init__(self):
        self.NUM_X_VAR = 0
        self.NUM_U_VAR = 0
        self.NUM_TIMESTEPS = 0
        self.NUM_U_TIMESTEPS = 0
        self.NUM_X_VAR_TRAJ = 0
        self.NUM_U_VAR_TRAJ = 0
        self.NUM_OPT_VAR_TRAJ = 0
        self.NUM_G_CONSTRAINTS = 0
        self.NUM_X_CONSTRAINTS = 0
        self.NUM_LEGS = 0
        self.NUM_LEGS_x3 = 0
        self.NUM_FB_DOF = 0
        self.NUM_GAIT_TABLE = 0
        self.NUM_GAIT_PHASE = 0
        self.DETECT_SIMPLE_BOUNDS = 0
        self.Xref = []
        self.Uref = []
        self.gait_schedule = []
        self.dt = []
        self.t_opt = []
        self.q_min = []
        self.q_max = []
        self.qd_min = []
        self.qd_max = []
        self.rd_init = [ 0.0 for dim0 in range(3) ]
        self.q_init = [ 0.0 for dim0 in range(6) ]
        self.qd_init = [ 0.0 for dim0 in range(3) ]
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
        self.Qh = [ 0.0 for dim0 in range(3) ]
        self.Qc = []
        self.QNq = []
        self.QNv = []
        self.QNr = [ 0.0 for dim0 in range(6) ]
        self.QNh = [ 0.0 for dim0 in range(3) ]
        self.QNc = []
        self.X_init_guess = []
        self.lambdaG_init_guess = []
        self.lambdaX_init_guess = []
        self.Phi = []

    def encode(self):
        buf = BytesIO()
        buf.write(qkdmpc_inputs_lcmt._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">iiiiiiiiiiiiiii", self.NUM_X_VAR, self.NUM_U_VAR, self.NUM_TIMESTEPS, self.NUM_U_TIMESTEPS, self.NUM_X_VAR_TRAJ, self.NUM_U_VAR_TRAJ, self.NUM_OPT_VAR_TRAJ, self.NUM_G_CONSTRAINTS, self.NUM_X_CONSTRAINTS, self.NUM_LEGS, self.NUM_LEGS_x3, self.NUM_FB_DOF, self.NUM_GAIT_TABLE, self.NUM_GAIT_PHASE, self.DETECT_SIMPLE_BOUNDS))
        buf.write(struct.pack('>%dd' % self.NUM_X_VAR_TRAJ, *self.Xref[:self.NUM_X_VAR_TRAJ]))
        buf.write(struct.pack('>%dd' % self.NUM_U_VAR_TRAJ, *self.Uref[:self.NUM_U_VAR_TRAJ]))
        buf.write(struct.pack('>%dd' % self.NUM_GAIT_TABLE, *self.gait_schedule[:self.NUM_GAIT_TABLE]))
        buf.write(struct.pack('>%dd' % self.NUM_U_TIMESTEPS, *self.dt[:self.NUM_U_TIMESTEPS]))
        buf.write(struct.pack('>%dd' % self.NUM_TIMESTEPS, *self.t_opt[:self.NUM_TIMESTEPS]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.q_min[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.q_max[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.qd_min[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.qd_max[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>3d', *self.rd_init[:3]))
        buf.write(struct.pack('>6d', *self.q_init[:6]))
        buf.write(struct.pack('>3d', *self.qd_init[:3]))
        buf.write(struct.pack('>%dd' % self.NUM_LEGS_x3, *self.c_init[:self.NUM_LEGS_x3]))
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
        buf.write(struct.pack('>3d', *self.Qh[:3]))
        buf.write(struct.pack('>%dd' % self.NUM_LEGS_x3, *self.Qc[:self.NUM_LEGS_x3]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.QNq[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>%dd' % self.NUM_FB_DOF, *self.QNv[:self.NUM_FB_DOF]))
        buf.write(struct.pack('>6d', *self.QNr[:6]))
        buf.write(struct.pack('>3d', *self.QNh[:3]))
        buf.write(struct.pack('>%dd' % self.NUM_LEGS_x3, *self.QNc[:self.NUM_LEGS_x3]))
        buf.write(struct.pack('>%dd' % self.NUM_OPT_VAR_TRAJ, *self.X_init_guess[:self.NUM_OPT_VAR_TRAJ]))
        buf.write(struct.pack('>%dd' % self.NUM_G_CONSTRAINTS, *self.lambdaG_init_guess[:self.NUM_G_CONSTRAINTS]))
        buf.write(struct.pack('>%dd' % self.NUM_X_CONSTRAINTS, *self.lambdaX_init_guess[:self.NUM_X_CONSTRAINTS]))
        buf.write(struct.pack('>%dd' % self.NUM_GAIT_PHASE, *self.Phi[:self.NUM_GAIT_PHASE]))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != qkdmpc_inputs_lcmt._get_packed_fingerprint():
            raise ValueError("Decode error")
        return qkdmpc_inputs_lcmt._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = qkdmpc_inputs_lcmt()
        self.NUM_X_VAR, self.NUM_U_VAR, self.NUM_TIMESTEPS, self.NUM_U_TIMESTEPS, self.NUM_X_VAR_TRAJ, self.NUM_U_VAR_TRAJ, self.NUM_OPT_VAR_TRAJ, self.NUM_G_CONSTRAINTS, self.NUM_X_CONSTRAINTS, self.NUM_LEGS, self.NUM_LEGS_x3, self.NUM_FB_DOF, self.NUM_GAIT_TABLE, self.NUM_GAIT_PHASE, self.DETECT_SIMPLE_BOUNDS = struct.unpack(">iiiiiiiiiiiiiii", buf.read(60))
        self.Xref = struct.unpack('>%dd' % self.NUM_X_VAR_TRAJ, buf.read(self.NUM_X_VAR_TRAJ * 8))
        self.Uref = struct.unpack('>%dd' % self.NUM_U_VAR_TRAJ, buf.read(self.NUM_U_VAR_TRAJ * 8))
        self.gait_schedule = struct.unpack('>%dd' % self.NUM_GAIT_TABLE, buf.read(self.NUM_GAIT_TABLE * 8))
        self.dt = struct.unpack('>%dd' % self.NUM_U_TIMESTEPS, buf.read(self.NUM_U_TIMESTEPS * 8))
        self.t_opt = struct.unpack('>%dd' % self.NUM_TIMESTEPS, buf.read(self.NUM_TIMESTEPS * 8))
        self.q_min = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.q_max = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.qd_min = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.qd_max = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.rd_init = struct.unpack('>3d', buf.read(24))
        self.q_init = struct.unpack('>6d', buf.read(48))
        self.qd_init = struct.unpack('>3d', buf.read(24))
        self.c_init = struct.unpack('>%dd' % self.NUM_LEGS_x3, buf.read(self.NUM_LEGS_x3 * 8))
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
        self.Qh = struct.unpack('>3d', buf.read(24))
        self.Qc = struct.unpack('>%dd' % self.NUM_LEGS_x3, buf.read(self.NUM_LEGS_x3 * 8))
        self.QNq = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.QNv = struct.unpack('>%dd' % self.NUM_FB_DOF, buf.read(self.NUM_FB_DOF * 8))
        self.QNr = struct.unpack('>6d', buf.read(48))
        self.QNh = struct.unpack('>3d', buf.read(24))
        self.QNc = struct.unpack('>%dd' % self.NUM_LEGS_x3, buf.read(self.NUM_LEGS_x3 * 8))
        self.X_init_guess = struct.unpack('>%dd' % self.NUM_OPT_VAR_TRAJ, buf.read(self.NUM_OPT_VAR_TRAJ * 8))
        self.lambdaG_init_guess = struct.unpack('>%dd' % self.NUM_G_CONSTRAINTS, buf.read(self.NUM_G_CONSTRAINTS * 8))
        self.lambdaX_init_guess = struct.unpack('>%dd' % self.NUM_X_CONSTRAINTS, buf.read(self.NUM_X_CONSTRAINTS * 8))
        self.Phi = struct.unpack('>%dd' % self.NUM_GAIT_PHASE, buf.read(self.NUM_GAIT_PHASE * 8))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if qkdmpc_inputs_lcmt in parents: return 0
        tmphash = (0x2bba20560214db4f) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff) + (tmphash>>63)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if qkdmpc_inputs_lcmt._packed_fingerprint is None:
            qkdmpc_inputs_lcmt._packed_fingerprint = struct.pack(">Q", qkdmpc_inputs_lcmt._get_hash_recursive([]))
        return qkdmpc_inputs_lcmt._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

