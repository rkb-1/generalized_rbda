/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __qkdmpc_inputs_lcmt_hpp__
#define __qkdmpc_inputs_lcmt_hpp__

#include <lcm/lcm_coretypes.h>

#include <vector>


class qkdmpc_inputs_lcmt
{
    public:
        int32_t    NUM_X_VAR;

        int32_t    NUM_U_VAR;

        int32_t    NUM_TIMESTEPS;

        int32_t    NUM_U_TIMESTEPS;

        int32_t    NUM_X_VAR_TRAJ;

        int32_t    NUM_U_VAR_TRAJ;

        int32_t    NUM_OPT_VAR_TRAJ;

        int32_t    NUM_G_CONSTRAINTS;

        int32_t    NUM_X_CONSTRAINTS;

        int32_t    NUM_LEGS;

        int32_t    NUM_LEGS_x3;

        int32_t    NUM_FB_DOF;

        int32_t    NUM_GAIT_TABLE;

        int32_t    NUM_GAIT_PHASE;

        int32_t    DETECT_SIMPLE_BOUNDS;

        std::vector< double > Xref;

        std::vector< double > Uref;

        std::vector< double > gait_schedule;

        std::vector< double > dt;

        std::vector< double > t_opt;

        std::vector< double > q_min;

        std::vector< double > q_max;

        std::vector< double > qd_min;

        std::vector< double > qd_max;

        double     rd_init[3];

        double     q_init[6];

        double     qd_init[3];

        std::vector< double > c_init;

        std::vector< double > q_term_min;

        std::vector< double > q_term_max;

        std::vector< double > qd_term_min;

        std::vector< double > qd_term_max;

        double     r_term_min[3];

        double     r_term_max[3];

        double     rd_term_min[3];

        double     rd_term_max[3];

        double     h_term_min[3];

        double     h_term_max[3];

        std::vector< double > Qq;

        std::vector< double > Qv;

        double     Qr[6];

        double     Qh[3];

        std::vector< double > Qc;

        std::vector< double > QNq;

        std::vector< double > QNv;

        double     QNr[6];

        double     QNh[3];

        std::vector< double > QNc;

        std::vector< double > X_init_guess;

        std::vector< double > lambdaG_init_guess;

        std::vector< double > lambdaX_init_guess;

        std::vector< double > Phi;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "qkdmpc_inputs_lcmt"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int qkdmpc_inputs_lcmt::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int qkdmpc_inputs_lcmt::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int qkdmpc_inputs_lcmt::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t qkdmpc_inputs_lcmt::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* qkdmpc_inputs_lcmt::getTypeName()
{
    return "qkdmpc_inputs_lcmt";
}

int qkdmpc_inputs_lcmt::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_X_VAR, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_U_VAR, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_TIMESTEPS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_U_TIMESTEPS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_X_VAR_TRAJ, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_U_VAR_TRAJ, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_OPT_VAR_TRAJ, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_G_CONSTRAINTS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_X_CONSTRAINTS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_LEGS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_LEGS_x3, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_FB_DOF, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_GAIT_TABLE, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->NUM_GAIT_PHASE, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->DETECT_SIMPLE_BOUNDS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_X_VAR_TRAJ > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->Xref[0], this->NUM_X_VAR_TRAJ);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_U_VAR_TRAJ > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->Uref[0], this->NUM_U_VAR_TRAJ);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_GAIT_TABLE > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->gait_schedule[0], this->NUM_GAIT_TABLE);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_U_TIMESTEPS > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->dt[0], this->NUM_U_TIMESTEPS);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_TIMESTEPS > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->t_opt[0], this->NUM_TIMESTEPS);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->q_min[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->q_max[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->qd_min[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->qd_max[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->rd_init[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->q_init[0], 6);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->qd_init[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_LEGS_x3 > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->c_init[0], this->NUM_LEGS_x3);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->q_term_min[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->q_term_max[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->qd_term_min[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->qd_term_max[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->r_term_min[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->r_term_max[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->rd_term_min[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->rd_term_max[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->h_term_min[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->h_term_max[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->Qq[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->Qv[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->Qr[0], 6);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->Qh[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_LEGS_x3 > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->Qc[0], this->NUM_LEGS_x3);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->QNq[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->QNv[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->QNr[0], 6);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->QNh[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_LEGS_x3 > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->QNc[0], this->NUM_LEGS_x3);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_OPT_VAR_TRAJ > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->X_init_guess[0], this->NUM_OPT_VAR_TRAJ);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_G_CONSTRAINTS > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->lambdaG_init_guess[0], this->NUM_G_CONSTRAINTS);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_X_CONSTRAINTS > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->lambdaX_init_guess[0], this->NUM_X_CONSTRAINTS);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_GAIT_PHASE > 0) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->Phi[0], this->NUM_GAIT_PHASE);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int qkdmpc_inputs_lcmt::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_X_VAR, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_U_VAR, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_TIMESTEPS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_U_TIMESTEPS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_X_VAR_TRAJ, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_U_VAR_TRAJ, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_OPT_VAR_TRAJ, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_G_CONSTRAINTS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_X_CONSTRAINTS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_LEGS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_LEGS_x3, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_FB_DOF, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_GAIT_TABLE, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->NUM_GAIT_PHASE, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->DETECT_SIMPLE_BOUNDS, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_X_VAR_TRAJ) {
        this->Xref.resize(this->NUM_X_VAR_TRAJ);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->Xref[0], this->NUM_X_VAR_TRAJ);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_U_VAR_TRAJ) {
        this->Uref.resize(this->NUM_U_VAR_TRAJ);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->Uref[0], this->NUM_U_VAR_TRAJ);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_GAIT_TABLE) {
        this->gait_schedule.resize(this->NUM_GAIT_TABLE);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->gait_schedule[0], this->NUM_GAIT_TABLE);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_U_TIMESTEPS) {
        this->dt.resize(this->NUM_U_TIMESTEPS);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->dt[0], this->NUM_U_TIMESTEPS);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_TIMESTEPS) {
        this->t_opt.resize(this->NUM_TIMESTEPS);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->t_opt[0], this->NUM_TIMESTEPS);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->q_min.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->q_min[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->q_max.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->q_max[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->qd_min.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->qd_min[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->qd_max.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->qd_max[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->rd_init[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->q_init[0], 6);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->qd_init[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_LEGS_x3) {
        this->c_init.resize(this->NUM_LEGS_x3);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->c_init[0], this->NUM_LEGS_x3);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->q_term_min.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->q_term_min[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->q_term_max.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->q_term_max[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->qd_term_min.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->qd_term_min[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->qd_term_max.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->qd_term_max[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->r_term_min[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->r_term_max[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->rd_term_min[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->rd_term_max[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->h_term_min[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->h_term_max[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_FB_DOF) {
        this->Qq.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->Qq[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->Qv.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->Qv[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->Qr[0], 6);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->Qh[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_LEGS_x3) {
        this->Qc.resize(this->NUM_LEGS_x3);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->Qc[0], this->NUM_LEGS_x3);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->QNq.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->QNq[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_FB_DOF) {
        this->QNv.resize(this->NUM_FB_DOF);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->QNv[0], this->NUM_FB_DOF);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->QNr[0], 6);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->QNh[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->NUM_LEGS_x3) {
        this->QNc.resize(this->NUM_LEGS_x3);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->QNc[0], this->NUM_LEGS_x3);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_OPT_VAR_TRAJ) {
        this->X_init_guess.resize(this->NUM_OPT_VAR_TRAJ);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->X_init_guess[0], this->NUM_OPT_VAR_TRAJ);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_G_CONSTRAINTS) {
        this->lambdaG_init_guess.resize(this->NUM_G_CONSTRAINTS);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->lambdaG_init_guess[0], this->NUM_G_CONSTRAINTS);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_X_CONSTRAINTS) {
        this->lambdaX_init_guess.resize(this->NUM_X_CONSTRAINTS);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->lambdaX_init_guess[0], this->NUM_X_CONSTRAINTS);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->NUM_GAIT_PHASE) {
        this->Phi.resize(this->NUM_GAIT_PHASE);
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->Phi[0], this->NUM_GAIT_PHASE);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int qkdmpc_inputs_lcmt::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, this->NUM_X_VAR_TRAJ);
    enc_size += __double_encoded_array_size(NULL, this->NUM_U_VAR_TRAJ);
    enc_size += __double_encoded_array_size(NULL, this->NUM_GAIT_TABLE);
    enc_size += __double_encoded_array_size(NULL, this->NUM_U_TIMESTEPS);
    enc_size += __double_encoded_array_size(NULL, this->NUM_TIMESTEPS);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, 6);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, this->NUM_LEGS_x3);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, 6);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, this->NUM_LEGS_x3);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, this->NUM_FB_DOF);
    enc_size += __double_encoded_array_size(NULL, 6);
    enc_size += __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, this->NUM_LEGS_x3);
    enc_size += __double_encoded_array_size(NULL, this->NUM_OPT_VAR_TRAJ);
    enc_size += __double_encoded_array_size(NULL, this->NUM_G_CONSTRAINTS);
    enc_size += __double_encoded_array_size(NULL, this->NUM_X_CONSTRAINTS);
    enc_size += __double_encoded_array_size(NULL, this->NUM_GAIT_PHASE);
    return enc_size;
}

uint64_t qkdmpc_inputs_lcmt::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x2bba20560214db4fLL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
