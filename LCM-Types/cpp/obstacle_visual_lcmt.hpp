/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __obstacle_visual_lcmt_hpp__
#define __obstacle_visual_lcmt_hpp__

#include <lcm/lcm_coretypes.h>



class obstacle_visual_lcmt
{
    public:
        int32_t    num_obs;

        double     location[100][3];

        double     sigma;

        double     height;

        double     mesh_center_pos[3];

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
         * Returns "obstacle_visual_lcmt"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int obstacle_visual_lcmt::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int obstacle_visual_lcmt::decode(const void *buf, int offset, int maxlen)
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

int obstacle_visual_lcmt::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t obstacle_visual_lcmt::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* obstacle_visual_lcmt::getTypeName()
{
    return "obstacle_visual_lcmt";
}

int obstacle_visual_lcmt::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_obs, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < 100; a0++) {
        tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->location[a0][0], 3);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->sigma, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->height, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->mesh_center_pos[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int obstacle_visual_lcmt::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_obs, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < 100; a0++) {
        tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->location[a0][0], 3);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->sigma, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->height, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->mesh_center_pos[0], 3);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int obstacle_visual_lcmt::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += 100 * __double_encoded_array_size(NULL, 3);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 3);
    return enc_size;
}

uint64_t obstacle_visual_lcmt::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0xf74f22add035377dLL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
