//
// Copyright (c) 2006-2008 Advanced Micro Devices, Inc. All Rights Reserved.
// This software is subject to the Apache v2.0 License.
//
#ifndef __SSEPLUS_NATIVE_SSE4A_H__
#define __SSEPLUS_NATIVE_SSE4A_H__

#include "../SSEPlus_base.h"

#ifdef SSEPLUS_MSVC
#include <intrin.h> // All intrinsis, including SSE4a
#endif

#ifdef SSEPLUS_GNUC
#include <ammintrin.h> // All intrinsis, including SSE4a
#endif

/** @defgroup SSE4A SSE4A Optimized
 *  @{
 *  @name Native Instructions */

/** \IMP{SSE4a Native,_mm_extract_si64,SSE4a} */ 
SSEPLUS_FORCEINLINE __m128i ssp_extract_si64_SSE4A( __m128i a ,__m128i b )
{
    return _mm_extract_si64( a, b );
}
/** \IMP{SSE4a Native,_mm_extracti_si64,SSE4a} */ 
SSEPLUS_FORCEINLINE __m128i ssp_extracti_si64_SSE4A( __m128i a, int len, int ndx )
{
    return _mm_extracti_si64( a, len, ndx );
}
/** \IMP{SSE4a Native,_mm_insert_si64,SSE4a} */ 
SSEPLUS_FORCEINLINE __m128i ssp_insert_si64_SSE4A( __m128i a, __m128i b )
{
    return _mm_insert_si64( a, b );
}
/** \IMP{SSE4a Native,_mm_inserti_si64,SSE4a} */ 
SSEPLUS_FORCEINLINE __m128i ssp_inserti_si64_SSE4A( __m128i a, __m128i b, int len, int ndx )
{
    return _mm_inserti_si64( a, b, len, ndx );
}
/** \IMP{SSE4a Native,_mm_stream_sd,SSE4a} */ 
SSEPLUS_FORCEINLINE void ssp_stream_sd_SSE4A( double *dst ,__m128d src )
{
    _mm_stream_sd( dst, src );
}
/** \IMP{SSE4a Native,_mm_stream_ss,SSE4a} */ 
SSEPLUS_FORCEINLINE void ssp_stream_ss_SSE4A( float *dst, __m128 src )
{
    _mm_stream_ss( dst, src );
}

/** \IMP{SSE4a Native,__lzcnt16,SSE4a} 
\n \b NOTE: Support for the LZCNT instruction is indicated by ECX bit 5 (LZCNT) as returned by CPUID function 8000_0001h. If the LZCNT instruction is not available, the encoding is treated as the BSR instruction. Software MUST check the CPUID bit once per program or library initialization before using the LZCNT instruction, or inconsistent behavior may result.
*/ 
SSEPLUS_FORCEINLINE unsigned short ssp_lzcnt16_SSE4A( unsigned short val )
{
    return __lzcnt16( val );
}
/** \IMP{SSE4a Native,__lzcnt,SSE4a} 
\n \b NOTE: Support for the LZCNT instruction is indicated by ECX bit 5 (LZCNT) as returned by CPUID function 8000_0001h. If the LZCNT instruction is not available, the encoding is treated as the BSR instruction. Software MUST check the CPUID bit once per program or library initialization before using the LZCNT instruction, or inconsistent behavior may result.
*/ 
SSEPLUS_FORCEINLINE unsigned int ssp_lzcnt_SSE4A( unsigned int val )
{
    return __lzcnt( val );
}

#ifdef SYS64
/** \IMP{SSE4a Native,__lzcnt64,SSE4a} */ 
SSEPLUS_FORCEINLINE ssp_u64 ssp_lzcnt64_SSE4A( ssp_u64 val )
{
    return __lzcnt64( val );
}
#endif

/** \IMP{SSE4a Native,__popcnt16,SSE4a} */ 
SSEPLUS_FORCEINLINE unsigned short ssp_popcnt16_SSE4A( unsigned short val )
{
    return __popcnt16( val );
}
/** \IMP{SSE4a Native,__popcnt,SSE4a} */ 
SSEPLUS_FORCEINLINE unsigned int ssp_popcnt_SSE4A( unsigned int val )
{
    return __popcnt( val );
}

#ifdef SYS64
/** \IMP{SSE4a Native,__popcnt64,SSE4a} */ 
SSEPLUS_FORCEINLINE ssp_u64 ssp_popcnt64_SSE4A( ssp_u64 val )
{
    return __popcnt64( val );
}
#endif

//@}
//@}

#endif // __SSEPLUS_NATIVE_SSE4A_H__