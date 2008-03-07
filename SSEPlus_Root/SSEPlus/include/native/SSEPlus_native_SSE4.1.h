//
// Copyright (c) 2006-2008 Advanced Micro Devices, Inc. All Rights Reserved.
// This software is subject to the Apache v2.0 License.
//
#ifndef __SSEPLUS_NATIVE_SSE4_1_H__
#define __SSEPLUS_NATIVE_SSE4_1_H__

#include "../SSEPlus_base.h"
#include <smmintrin.h> // SSE4.1

/** @defgroup SSE41 SSE4.1 Optimized
 *  @{
 *  @name Native Instructions
 *  @{ */

/** \IMP{SSE4.1 Native,_mm_ceil_pd,SSE4.1} */ 
SSP_FORCEINLINE __m128d ssp_ceil_pd_SSE4_1(__m128d a)
{
    return _mm_ceil_pd( a );
}
/** \IMP{SSE4.1 Native,_mm_ceil_sd,SSE4.1} */ 
SSP_FORCEINLINE __m128d ssp_ceil_sd_SSE4_1(__m128d dst, __m128d a)
{
    return _mm_ceil_sd( dst, a );
}
/** \IMP{SSE4.1 Native,_mm_floor_pd,SSE4.1} */ 
SSP_FORCEINLINE __m128d ssp_floor_pd_SSE4_1(__m128d a)
{
    return _mm_floor_pd( a );
}
/** \IMP{SSE4.1 Native,_mm_floor_sd,SSE4.1} */ 
SSP_FORCEINLINE __m128d ssp_floor_sd_SSE4_1(__m128d dst, __m128d a)
{
    return _mm_floor_sd( dst, a );
}
/** \IMP{SSE4.1 Native,_mm_ceil_ps,SSE4.1} */ 
SSP_FORCEINLINE __m128 ssp_ceil_ps_SSE4_1(__m128 a)
{
    return _mm_ceil_ps( a );
}
/** \IMP{SSE4.1 Native,_mm_ceil_ss,SSE4.1} */ 
SSP_FORCEINLINE __m128 ssp_ceil_ss_SSE4_1(__m128 dst, __m128 a)
{
    return _mm_ceil_ss( dst, a );
}
/** \IMP{SSE4.1 Native,_mm_floor_ps,SSE4.1} */ 
SSP_FORCEINLINE __m128 ssp_floor_ps_SSE4_1(__m128 a)
{
    return _mm_floor_ps( a );
}
/** \IMP{SSE4.1 Native,_mm_floor_ss,SSE4.1} */ 
SSP_FORCEINLINE __m128 ssp_floor_ss_SSE4_1(__m128 dst, __m128 a)
{
    return _mm_floor_ss( dst, a );
}
/** \IMP{SSE4.1 Native,_mm_blend_epi16,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_blend_epi16_SSE4_1(__m128i a, __m128i b,const int mask)
{
    switch( mask & 0xFF )
    {
        CASE_256( _mm_blend_epi16, a, b );
    }
}
/** \IMP{SSE4.1 Native,_mm_blendv_epi8,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_blendv_epi8_SSE4_1(__m128i a, __m128i b, __m128i mask)
{
    return _mm_blendv_epi8( a, b, mask );
}
/** \IMP{SSE4.1 Native,_mm_blend_ps,SSE4.1} */ 
SSP_FORCEINLINE __m128 ssp_blend_ps_SSE4_1(__m128  a, __m128  b, const int mask)
{
    switch( mask & 0x0F )
    {
        CASE_16( _mm_blend_ps, a, b );
    }
}
/** \IMP{SSE4.1 Native,_mm_blendv_ps,SSE4.1} */ 
SSP_FORCEINLINE __m128 ssp_blendv_ps_SSE4_1(__m128  a, __m128  b, __m128 mask)
{
    return _mm_blendv_ps( a, b, mask);
}
/** \IMP{SSE4.1 Native,_mm_blend_pd,SSE4.1} */ 
SSP_FORCEINLINE __m128d ssp_blend_pd_SSE4_1(__m128d a, __m128d b, const int mask)
{
    switch(mask&0x3)
    {
        CASE_4( _mm_blend_pd, a, b );
    }
}
/** \IMP{SSE4.1 Native,_mm_blendv_pd,SSE4.1} */ 
SSP_FORCEINLINE __m128d ssp_blendv_pd_SSE4_1(__m128d a, __m128d b, __m128d mask)
{
    return _mm_blendv_pd( a, b, mask);
}
/** \IMP{SSE4.1 Native,_mm_dp_ps,SSE4.1} */ 
SSP_FORCEINLINE __m128 ssp_dp_ps_SSE4_1(__m128  a, __m128  b, const int mask)
{
    switch( mask & 0xFF )
    {
        CASE_256( _mm_dp_ps, a, b );
    }
}
/** \IMP{SSE4.1 Native,_mm_dp_pd,SSE4.1} */ 
SSP_FORCEINLINE __m128d ssp_dp_pd_SSE4_1(__m128d a, __m128d b, const int mask)
{
    switch( mask & 0x3F )
    {
        CASE_128( _mm_dp_pd, a, b );
    }
}
/** \IMP{SSE4.1 Native,_mm_cmpeq_epi64,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cmpeq_epi64_SSE4_1(__m128i a, __m128i b)
{
    return _mm_cmpeq_epi64( a, b);
}
/** \IMP{SSE4.1 Native,_mm_min_epi8,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_min_epi8_SSE4_1(__m128i a, __m128i b)
{
    return _mm_min_epi8( a, b);
}
/** \IMP{SSE4.1 Native,_mm_max_epi8,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_max_epi8_SSE4_1(__m128i a, __m128i b)
{
    return _mm_max_epi8( a, b);
}
/** \IMP{SSE4.1 Native,_mm_min_epu16,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_min_epu16_SSE4_1(__m128i a, __m128i b)
{
    return _mm_min_epu16( a, b);
}
/** \IMP{SSE4.1 Native,_mm_max_epu16,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_max_epu16_SSE4_1(__m128i a, __m128i b)
{
    return _mm_max_epu16( a, b);
}
/** \IMP{SSE4.1 Native,_mm_min_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_min_epi32_SSE4_1(__m128i a, __m128i b)
{
    return _mm_min_epi32( a, b);
}
/** \IMP{SSE4.1 Native,_mm_max_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_max_epi32_SSE4_1(__m128i a, __m128i b)
{
    return _mm_max_epi32( a, b);
}
/** \IMP{SSE4.1 Native,_mm_min_epu32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_min_epu32_SSE4_1(__m128i a, __m128i b)
{
    return _mm_min_epu32( a, b);
}
/** \IMP{SSE4.1 Native,_mm_max_epu32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_max_epu32_SSE4_1(__m128i a, __m128i b)
{
    return _mm_max_epu32( a, b);
}
/** \IMP{SSE4.1 Native,_mm_mullo_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_mullo_epi32_SSE4_1(__m128i a, __m128i b)
{
    return _mm_mullo_epi32( a, b);
}
/** \IMP{SSE4.1 Native,_mm_mul_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_mul_epi32_SSE4_1(__m128i a, __m128i b)
{
    return _mm_mul_epi32( a, b);
}

/** \IMP{SSE4.1 Native,_mm_insert_ps,SSE4.1} */ 
SSP_FORCEINLINE __m128 ssp_insert_ps_SSE4_1(__m128 dst, __m128 src, const int ndx)
{
    switch( ndx & 0xFF )
    {
        CASE_256( _mm_insert_ps, dst, src );
    }
}
/** \IMP{SSE4.1 Native,_mm_extract_ps,SSE4.1} */ 
SSP_FORCEINLINE int ssp_extract_ps_SSE4_1(__m128 src, const int ndx)
{
    switch(ndx&0x3)
    {
        CASE_4( _mm_extract_ps, src )
    }
}
/** \IMP{SSE4.1 Native,_mm_insert_epi8,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_insert_epi8_SSE4_1(__m128i dst, int s, const int ndx)
{
    switch( ndx & 0xF )
    {
        CASE_16( _mm_insert_epi8, dst, s );
    }
}
/** \IMP{SSE4.1 Native,_mm_insert_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_insert_epi32_SSE4_1(__m128i dst, int s, const int ndx)
{
    switch( ndx & 0x3 )
    {
        CASE_4( _mm_insert_epi32, dst, s );
    }
}

#ifdef SYS64
/** \IMP{SSE4.1 Native,_mm_insert_epi64,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_insert_epi64_SSE4_1(__m128i dst, ssp_s64 s, const int ndx)
{
    switch( ndx & 0x1 )
    {
        CASE_2( _mm_insert_epi64, dst, s );
    }
}
#endif

/** \IMP{SSE4.1 Native,_mm_extract_epi8,SSE4.1} */ 
SSP_FORCEINLINE int ssp_extract_epi8_SSE4_1(__m128i src, const int ndx)
{
    switch( ndx & 0xF )
    {
        CASE_16( _mm_extract_epi8, src );
    }
}
/** \IMP{SSE4.1 Native,_mm_extract_epi32,SSE4.1} */ 
SSP_FORCEINLINE int ssp_extract_epi32_SSE4_1(__m128i src, const int ndx)
{
    switch( ndx & 0x3 )
    {
        CASE_4( _mm_extract_epi32, src );
    }
}

#ifdef SYS64
/** \IMP{SSE4.1 Native,_mm_extract_epi64,SSE4.1} */ 
SSP_FORCEINLINE ssp_s64 ssp_extract_epi64_SSE4_1(__m128i src, const int ndx)
{
    switch( ndx & 0x1 )
    {
        CASE_2( _mm_extract_epi64, src );
    }
}
#endif

/** \IMP{SSE4.1 Native,_mm_minpos_epu16,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_minpos_epu16_SSE4_1(__m128i shortValues)
{
    return _mm_minpos_epu16( shortValues );
}

/** \IMP{SSE4.1 Native,_mm_cvtepi8_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepi8_epi32_SSE4_1(__m128i byteValues)
{
    return _mm_cvtepi8_epi32( byteValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepi16_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepi16_epi32_SSE4_1(__m128i shortValues)
{
    return _mm_cvtepi16_epi32( shortValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepi8_epi64,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepi8_epi64_SSE4_1(__m128i byteValues)
{
    return _mm_cvtepi8_epi64( byteValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepi32_epi64,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepi32_epi64_SSE4_1(__m128i intValues)
{
    return _mm_cvtepi32_epi64( intValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepi16_epi64,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepi16_epi64_SSE4_1(__m128i shortValues)
{
    return _mm_cvtepi16_epi64( shortValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepi8_epi16,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepi8_epi16_SSE4_1(__m128i byteValues)
{
    return _mm_cvtepi8_epi16( byteValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepu8_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepu8_epi32_SSE4_1(__m128i byteValues)
{
    return _mm_cvtepu8_epi32( byteValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepu16_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepu16_epi32_SSE4_1(__m128i shortValues)
{
    return _mm_cvtepu16_epi32( shortValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepu8_epi64,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepu8_epi64_SSE4_1(__m128i shortValues)
{
    return _mm_cvtepu8_epi64( shortValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepu32_epi64,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepu32_epi64_SSE4_1(__m128i intValues)
{
    return _mm_cvtepu32_epi64( intValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepu16_epi64,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepu16_epi64_SSE4_1(__m128i shortValues)
{
    return _mm_cvtepu16_epi64( shortValues );
}
/** \IMP{SSE4.1 Native,_mm_cvtepu8_epi16,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_cvtepu8_epi16_SSE4_1(__m128i byteValues)
{
    return _mm_cvtepu8_epi16( byteValues );
}
/** \IMP{SSE4.1 Native,_mm_packus_epi32,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_packus_epi32_SSE4_1(__m128i a, __m128i b)
{
    return _mm_packus_epi32( a, b );
}
/** \IMP{SSE4.1 Native,_mm_mpsadbw_epu8,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_mpsadbw_epu8_SSE4_1(__m128i a, __m128i b, const int msk)
{
    switch( msk & 0x7 )
    {
        CASE_8( _mm_mpsadbw_epu8, a, b );
    }
}
/** \IMP{SSE4.1 Native,_mm_stream_load_si128,SSE4.1} */ 
SSP_FORCEINLINE __m128i ssp_stream_load_si128_SSE4_1(__m128i* a)
{
    return _mm_stream_load_si128( a );
}


//
// Functions common with SSE5
//

/** \IMP{SSE4.1 Native,_mm_testz_si128,SSE4.1} */ 
SSP_FORCEINLINE int ssp_testz_si128_SSE4_1(__m128i mask, __m128i a)
{
    return _mm_testz_si128( mask, a);
}
/** \IMP{SSE4.1 Native,_mm_testc_si128,SSE4.1} */ 
SSP_FORCEINLINE int ssp_testc_si128_SSE4_1(__m128i mask, __m128i a)
{
    return _mm_testc_si128( mask, a);
}
/** \IMP{SSE4.1 Native,_mm_testnzc_si128,SSE4.1} */ 
SSP_FORCEINLINE int ssp_testnzc_si128_SSE4_1(__m128i mask, __m128i b)
{
    return _mm_testnzc_si128( mask, b);
}

/** \IMP{SSE4.1 Native,_mm_round_pd,SSE4.1 and SSE5} */ 
SSP_FORCEINLINE __m128d ssp_round_pd_SSE4_1(__m128d a, int iRoundMode)
{
    switch( iRoundMode & 0xF )
    {
        CASE_16( _mm_round_pd, a );
    }
}
/** \IMP{SSE4.1 Native,_mm_round_sd,SSE4.1 and SSE5} */ 
SSP_FORCEINLINE __m128d ssp_round_sd_SSE4_1(__m128d dst, __m128d a, int iRoundMode)
{
    switch( iRoundMode & 0xF )
    {
        CASE_16( _mm_round_sd, dst, a );
    }
}
/** \IMP{SSE4.1 Native,_mm_round_ps,SSE4.1 and SSE5} */ 
SSP_FORCEINLINE __m128 ssp_round_ps_SSE4_1(__m128  a, int iRoundMode)
{
    switch( iRoundMode & 0xF )
    {
        CASE_16( _mm_round_ps, a );
    }
}
/** \IMP{SSE4.1 Native,_mm_round_ss,SSE4.1 and SSE5} */ 
SSP_FORCEINLINE __m128 ssp_round_ss_SSE4_1(__m128 dst, __m128  a, int iRoundMode)
{
    switch( iRoundMode & 0xF )
    {
        CASE_16( _mm_round_ss, dst, a );
    }
}


//@}
//@}

#endif // __SSEPLUS_NATIVE_SSE4_1_H__