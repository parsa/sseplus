//
// Copyright (c) 2006-2008 Advanced Micro Devices, Inc. All Rights Reserved.
// This software is subject to the Apache v2.0 License.
//
#ifndef __SSEPLUS_EMULATION_REF_H__
#define __SSEPLUS_EMULATION_REF_H__

#include "../SSEPlus_base.h"
#include "../number/SSEPlus_number_REF.h"
#include "../arithmetic/SSEPlus_arithmetic_REF.h"
#include <math.h>

/** @addtogroup emulated_REF   
 *  @{ 
 *  @name SSE[3,4A,...,5] implemented in reference
 */

//
// COM*(equal)*
//
/** \SSE5{Reference,_mm_comeq_epi16, pcomw } */
SSP_FORCEINLINE __m128i ssp_comeq_epi16_REF(__m128i a, __m128i b)
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.u16[0] = (A.s16[0]==B.s16[0]) ? 0xFFFF : 0;
    A.u16[1] = (A.s16[1]==B.s16[1]) ? 0xFFFF : 0;
    A.u16[2] = (A.s16[2]==B.s16[2]) ? 0xFFFF : 0;
    A.u16[3] = (A.s16[3]==B.s16[3]) ? 0xFFFF : 0;
    A.u16[4] = (A.s16[4]==B.s16[4]) ? 0xFFFF : 0;
    A.u16[5] = (A.s16[5]==B.s16[5]) ? 0xFFFF : 0;
    A.u16[6] = (A.s16[6]==B.s16[6]) ? 0xFFFF : 0;
    A.u16[7] = (A.s16[7]==B.s16[7]) ? 0xFFFF : 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comeq_epi32, pcomd } */
SSP_FORCEINLINE __m128i ssp_comeq_epi32_REF(__m128i a, __m128i b)
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.u32[0] = (A.s32[0]==B.s32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.s32[1]==B.s32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.s32[2]==B.s32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.s32[3]==B.s32[3]) ? 0xFFFFFFFF : 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comeq_epi64, pcomq } */
SSP_FORCEINLINE __m128i ssp_comeq_epi64_REF(__m128i a, __m128i b)
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.u64[0] = (A.s64[0]==B.s64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = (A.s64[1]==B.s64[1]) ? 0xFFFFFFFFFFFFFFFF : 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comeq_epi8, pcomb } */
SSP_FORCEINLINE __m128i ssp_comeq_epi8_REF(__m128i a, __m128i b)
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.u8[0] = (A.s8[0]==B.s8[0]) ? 0xFF : 0;
    A.u8[1] = (A.s8[1]==B.s8[1]) ? 0xFF : 0;
    A.u8[2] = (A.s8[2]==B.s8[2]) ? 0xFF : 0;
    A.u8[3] = (A.s8[3]==B.s8[3]) ? 0xFF : 0;
    A.u8[4] = (A.s8[4]==B.s8[4]) ? 0xFF : 0;
    A.u8[5] = (A.s8[5]==B.s8[5]) ? 0xFF : 0;
    A.u8[6] = (A.s8[6]==B.s8[6]) ? 0xFF : 0;
    A.u8[7] = (A.s8[7]==B.s8[7]) ? 0xFF : 0; 
	A.u8[8] = (A.s8[8]==B.s8[8]) ? 0xFF : 0;
    A.u8[9] = (A.s8[9]==B.s8[9]) ? 0xFF : 0;
    A.u8[10] = (A.s8[10]==B.s8[10]) ? 0xFF : 0;
    A.u8[11] = (A.s8[11]==B.s8[11]) ? 0xFF : 0;
    A.u8[12] = (A.s8[12]==B.s8[12]) ? 0xFF : 0;
    A.u8[13] = (A.s8[13]==B.s8[13]) ? 0xFF : 0;
    A.u8[14] = (A.s8[14]==B.s8[14]) ? 0xFF : 0;
    A.u8[15] = (A.s8[15]==B.s8[15]) ? 0xFF : 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comeq_epu16, pcomuw } */
SSP_FORCEINLINE __m128i ssp_comeq_epu16_REF(__m128i a, __m128i b)
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.u16[0] = (A.u16[0]==B.u16[0]) ? 0xFFFF : 0;
    A.u16[1] = (A.u16[1]==B.u16[1]) ? 0xFFFF : 0;
    A.u16[2] = (A.u16[2]==B.u16[2]) ? 0xFFFF : 0;
    A.u16[3] = (A.u16[3]==B.u16[3]) ? 0xFFFF : 0;
    A.u16[4] = (A.u16[4]==B.u16[4]) ? 0xFFFF : 0;
    A.u16[5] = (A.u16[5]==B.u16[5]) ? 0xFFFF : 0;
    A.u16[6] = (A.u16[6]==B.u16[6]) ? 0xFFFF : 0;
    A.u16[7] = (A.u16[7]==B.u16[7]) ? 0xFFFF : 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comeq_epu32, pcomud } */
SSP_FORCEINLINE __m128i ssp_comeq_epu32_REF(__m128i a, __m128i b)
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.u32[0] = (A.u32[0]==B.u32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.u32[1]==B.u32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.u32[2]==B.u32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.u32[3]==B.u32[3]) ? 0xFFFFFFFF : 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comeq_epu64, pcomuq } */
SSP_FORCEINLINE __m128i ssp_comeq_epu64_REF(__m128i a, __m128i b)
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.u64[0] = (A.u64[0]==B.u64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = (A.u64[1]==B.u64[1]) ? 0xFFFFFFFFFFFFFFFF : 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comeq_epu8, pcomub } */
SSP_FORCEINLINE __m128i ssp_comeq_epu8_REF(__m128i a, __m128i b)
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.u8[0] = (A.u8[0]==B.u8[0]) ? 0xFF : 0;
    A.u8[1] = (A.u8[1]==B.u8[1]) ? 0xFF : 0;
    A.u8[2] = (A.u8[2]==B.u8[2]) ? 0xFF : 0;
    A.u8[3] = (A.u8[3]==B.u8[3]) ? 0xFF : 0;
    A.u8[4] = (A.u8[4]==B.u8[4]) ? 0xFF : 0;
    A.u8[5] = (A.u8[5]==B.u8[5]) ? 0xFF : 0;
    A.u8[6] = (A.u8[6]==B.u8[6]) ? 0xFF : 0;
    A.u8[7] = (A.u8[7]==B.u8[7]) ? 0xFF : 0; 
	A.u8[8] = (A.u8[8]==B.u8[8]) ? 0xFF : 0;
    A.u8[9] = (A.u8[9]==B.u8[9]) ? 0xFF : 0;
    A.u8[10] = (A.u8[10]==B.u8[10]) ? 0xFF : 0;
    A.u8[11] = (A.u8[11]==B.u8[11]) ? 0xFF : 0;
    A.u8[12] = (A.u8[12]==B.u8[12]) ? 0xFF : 0;
    A.u8[13] = (A.u8[13]==B.u8[13]) ? 0xFF : 0;
    A.u8[14] = (A.u8[14]==B.u8[14]) ? 0xFF : 0;
    A.u8[15] = (A.u8[15]==B.u8[15]) ? 0xFF : 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comeq_pd, compd }*/
SSP_FORCEINLINE __m128d ssp_comeq_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;
    A.u64[0] = (A.f64[0]==B.f64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = (A.f64[1]==B.f64[1]) ? 0xFFFFFFFFFFFFFFFF : 0;

    return A.d;
}

/** \SSE5{Reference,_mm_comeq_ps, comps } 
*   See \link comps
*/
SSP_FORCEINLINE __m128 ssp_comeq_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]==B.f32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.f32[1]==B.f32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.f32[2]==B.f32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.f32[3]==B.f32[3]) ? 0xFFFFFFFF : 0;
    return A.f;
}

/** \SSE5{Reference,_mm_comeq_sd, comsd }*/
SSP_FORCEINLINE __m128d ssp_comeq_sd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;
    A.u64[0] = (A.f64[0]==B.f64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;

    return A.d;
}

/** \SSE5{Reference,_mm_comeq_ss, comss } */
SSP_FORCEINLINE __m128 ssp_comeq_ss_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]==B.f32[0]) ? 0xFFFFFFFF : 0;

    return A.f;
}

/** \SSE5{Reference,_mm_comneq_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comneq_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;
    
	A.u64[0] = (A.f64[0]!=B.f64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = (A.f64[1]!=B.f64[1]) ? 0xFFFFFFFFFFFFFFFF : 0;

    return A.d;
}

/** \SSE5{Reference,_mm_comneq_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comneq_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]!=B.f32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.f32[1]!=B.f32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.f32[2]!=B.f32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.f32[3]!=B.f32[3]) ? 0xFFFFFFFF : 0;
    return A.f;
}

/** \SSE5{Reference,_mm_comoneq_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comoneq_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b; 

    A.u64[0] = ((A.f64[0]<B.f64[0]) || (A.f64[0]>B.f64[0]))  ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = ((A.f64[1]<B.f64[1]) || (A.f64[1]>B.f64[1]))  ? 0xFFFFFFFFFFFFFFFF : 0;

    return A.d;   
}

/** \SSE5{Reference,_mm_comoneq_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comoneq_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b; 
    A.u32[0] = (A.f32[0]<B.f32[0]) || (A.f32[0]>B.f32[0])  ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.f32[1]<B.f32[1]) || (A.f32[1]>B.f32[1])  ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.f32[2]<B.f32[2]) || (A.f32[2]>B.f32[2])  ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.f32[3]<B.f32[3]) || (A.f32[3]>B.f32[3])  ? 0xFFFFFFFF : 0;
    return A.f;   
}

/** \SSE5{Reference,_mm_comueq_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comueq_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;             

	A.u64[0] = ((A.f64[0]<B.f64[0]) || (A.f64[0]>B.f64[0])) ? 0 : 0xFFFFFFFFFFFFFFFF;
    A.u64[1] = ((A.f64[1]<B.f64[1]) || (A.f64[1]>B.f64[1])) ? 0 : 0xFFFFFFFFFFFFFFFF;

    return A.d;
}

/** \SSE5{Reference,_mm_comueq_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comueq_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;             
    A.u32[0] = (A.f32[0]<B.f32[0]) || (A.f32[0]>B.f32[0]) ? 0 : 0xFFFFFFFF;
    A.u32[1] = (A.f32[1]<B.f32[1]) || (A.f32[1]>B.f32[1]) ? 0 : 0xFFFFFFFF;
    A.u32[2] = (A.f32[2]<B.f32[2]) || (A.f32[2]>B.f32[2]) ? 0 : 0xFFFFFFFF;
    A.u32[3] = (A.f32[3]<B.f32[3]) || (A.f32[3]>B.f32[3]) ? 0 : 0xFFFFFFFF;
    return A.f;
}

//
// COM*(less)*
//
/** \SSE5{Reference,_mm_comlt_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comlt_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;

	A.u64[0] = (A.f64[0]<B.f64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = (A.f64[1]<B.f64[1]) ? 0xFFFFFFFFFFFFFFFF : 0;

    return A.d;
}

/** \SSE5{Reference,_mm_comlt_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comlt_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]<B.f32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.f32[1]<B.f32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.f32[2]<B.f32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.f32[3]<B.f32[3]) ? 0xFFFFFFFF : 0;
    return A.f;
}

/** \SSE5{Reference,_mm_comle_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comle_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;
   
	A.u64[0] = (A.f64[0]<=B.f64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = (A.f64[1]<=B.f64[1]) ? 0xFFFFFFFFFFFFFFFF : 0;

    return A.d;
}

/** \SSE5{Reference,_mm_comle_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comle_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]<=B.f32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.f32[1]<=B.f32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.f32[2]<=B.f32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.f32[3]<=B.f32[3]) ? 0xFFFFFFFF : 0;
    return A.f;
}

/** \SSE5{Reference,_mm_comnlt_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comnlt_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;
 
	A.u64[0] = (A.f64[0]>=B.f64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = (A.f64[1]>=B.f64[1]) ? 0xFFFFFFFFFFFFFFFF : 0;
 
    return A.d;
}

/** \SSE5{Reference,_mm_comnlt_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comnlt_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]>=B.f32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.f32[1]>=B.f32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.f32[2]>=B.f32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.f32[3]>=B.f32[3]) ? 0xFFFFFFFF : 0;
    return A.f;
}

/** \SSE5{Reference,_mm_comnle_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comnle_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;

    A.u64[0] = (A.f64[0]<=B.f64[0]) ? 0 : 0xFFFFFFFFFFFFFFFF;
    A.u64[1] = (A.f64[1]<=B.f64[1]) ? 0 : 0xFFFFFFFFFFFFFFFF;
 
    return A.d;
}

/** \SSE5{Reference,_mm_comnle_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comnle_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]<=B.f32[0]) ? 0 : 0xFFFFFFFF;
    A.u32[1] = (A.f32[1]<=B.f32[1]) ? 0 : 0xFFFFFFFF;
    A.u32[2] = (A.f32[2]<=B.f32[2]) ? 0 : 0xFFFFFFFF;
    A.u32[3] = (A.f32[3]<=B.f32[3]) ? 0 : 0xFFFFFFFF;
    return A.f;
}

//
// COM*(greater)*
//
/** \SSE5{Reference,_mm_comge_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comge_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;

	A.u64[0] = (A.f64[0]<B.f64[0]) ? 0 : 0xFFFFFFFFFFFFFFFF;
    A.u64[1] = (A.f64[1]<B.f64[1]) ? 0 : 0xFFFFFFFFFFFFFFFF;

    return A.d;
}

/** \SSE5{Reference,_mm_comge_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comge_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]<B.f32[0]) ? 0 : 0xFFFFFFFF;
    A.u32[1] = (A.f32[1]<B.f32[1]) ? 0 : 0xFFFFFFFF;
    A.u32[2] = (A.f32[2]<B.f32[2]) ? 0 : 0xFFFFFFFF;
    A.u32[3] = (A.f32[3]<B.f32[3]) ? 0 : 0xFFFFFFFF;
    return A.f;
}

/** \SSE5{Reference,_mm_comgt_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comgt_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;

    A.u64[0] = (A.f64[0]>B.f64[0]) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = (A.f64[1]>B.f64[1]) ? 0xFFFFFFFFFFFFFFFF : 0;
 
    return A.d;
}

/** \SSE5{Reference,_mm_comgt_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comgt_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]>B.f32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.f32[1]>B.f32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.f32[2]>B.f32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.f32[3]>B.f32[3]) ? 0xFFFFFFFF : 0;
    return A.f;
}

/** \SSE5{Reference,_mm_comngt_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comngt_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;

	A.u64[0] = (A.f64[0]>B.f64[0]) ? 0 : 0xFFFFFFFFFFFFFFFF;
    A.u64[1] = (A.f64[1]>B.f64[1]) ? 0 : 0xFFFFFFFFFFFFFFFF;

    return A.d;
}

/** \SSE5{Reference,_mm_comngt_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comngt_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]>B.f32[0]) ? 0 : 0xFFFFFFFF;
    A.u32[1] = (A.f32[1]>B.f32[1]) ? 0 : 0xFFFFFFFF;
    A.u32[2] = (A.f32[2]>B.f32[2]) ? 0 : 0xFFFFFFFF;
    A.u32[3] = (A.f32[3]>B.f32[3]) ? 0 : 0xFFFFFFFF;
    return A.f;
}

/** \SSE5{Reference,_mm_comnge_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comnge_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;

	A.u64[0] = (A.f64[0]>=B.f64[0]) ? 0 : 0xFFFFFFFFFFFFFFFF;
    A.u64[1] = (A.f64[1]>=B.f64[1]) ? 0 : 0xFFFFFFFFFFFFFFFF;

    return A.d;
}

/** \SSE5{Reference,_mm_comnge_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comnge_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = (A.f32[0]>=B.f32[0]) ? 0 : 0xFFFFFFFF;
    A.u32[1] = (A.f32[1]>=B.f32[1]) ? 0 : 0xFFFFFFFF;
    A.u32[2] = (A.f32[2]>=B.f32[2]) ? 0 : 0xFFFFFFFF;
    A.u32[3] = (A.f32[3]>=B.f32[3]) ? 0 : 0xFFFFFFFF;
    return A.f;
}


//
// COM*(ordered)*
//
/** \SSE5{Reference,_mm_comord_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comord_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b; // NAN(A)              || NAN(B)         
    A.u64[0] = (A.f64[0]!=A.f64[0]) || (B.f64[0]!=B.f64[0]) ? 0 : 0xFFFFFFFFFFFFFFFF;
    A.u64[1] = (A.f64[1]!=A.f64[1]) || (B.f64[1]!=B.f64[1]) ? 0 : 0xFFFFFFFFFFFFFFFF;

    return A.d;
}

/** \SSE5{Reference,_mm_comord_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comord_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b; // NAN(A)              || NAN(B)         
    A.u32[0] = (A.f32[0]!=A.f32[0]) || (B.f32[0]!=B.f32[0]) ? 0 : 0xFFFFFFFF;
    A.u32[1] = (A.f32[1]!=A.f32[1]) || (B.f32[1]!=B.f32[1]) ? 0 : 0xFFFFFFFF;
    A.u32[2] = (A.f32[2]!=A.f32[2]) || (B.f32[2]!=B.f32[2]) ? 0 : 0xFFFFFFFF;
    A.u32[3] = (A.f32[3]!=A.f32[3]) || (B.f32[3]!=B.f32[3]) ? 0 : 0xFFFFFFFF;
    return A.f;
}

/** \SSE5{Reference,_mm_comunord_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comunord_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b; // NAN(A)              || NAN(B)         
    A.u64[0] = ((A.f64[0]!=A.f64[0]) || (B.f64[0]!=B.f64[0])) ? 0xFFFFFFFFFFFFFFFF : 0;
    A.u64[1] = ((A.f64[1]!=A.f64[1]) || (B.f64[1]!=B.f64[1])) ? 0xFFFFFFFFFFFFFFFF : 0;
    return A.d;
}

/** \SSE5{Reference,_mm_comunord_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comunord_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b; // NAN(A)              || NAN(B)         
    A.u32[0] = (A.f32[0]!=A.f32[0]) || (B.f32[0]!=B.f32[0]) ? 0xFFFFFFFF : 0;
    A.u32[1] = (A.f32[1]!=A.f32[1]) || (B.f32[1]!=B.f32[1]) ? 0xFFFFFFFF : 0;
    A.u32[2] = (A.f32[2]!=A.f32[2]) || (B.f32[2]!=B.f32[2]) ? 0xFFFFFFFF : 0;
    A.u32[3] = (A.f32[3]!=A.f32[3]) || (B.f32[3]!=B.f32[3]) ? 0xFFFFFFFF : 0;
    return A.f;
}

//
// COM*(TRUE/FALSE)*
//
/** \SSE5{Reference,_mm_comtrue_epi16, pcomw } */
SSP_FORCEINLINE __m128i ssp_comtrue_epi16_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;

    A.u16[0] = 0xffff;
    A.u16[1] = 0xffff;
    A.u16[2] = 0xffff;
    A.u16[3] = 0xffff;
    A.u16[4] = 0xffff;
    A.u16[5] = 0xffff;
    A.u16[6] = 0xffff;
    A.u16[7] = 0xffff;

	return A.i;
}

/** \SSE5{Reference,_mm_comtrue_epi32, pcomd } */
SSP_FORCEINLINE __m128i ssp_comtrue_epi32_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;

    A.u32[0] = 0xffffffff;
    A.u32[1] = 0xffffffff;
    A.u32[2] = 0xffffffff;
    A.u32[3] = 0xffffffff;

	return A.i;
}

/** \SSE5{Reference,_mm_comtrue_epi64, pcomq } */
SSP_FORCEINLINE __m128i ssp_comtrue_epi64_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u64[0] = 0xffffffffffffffff;
    A.u64[1] = 0xffffffffffffffff;

	return A.i;
}

/** \SSE5{Reference,_mm_comtrue_epi8, pcomb } */
SSP_FORCEINLINE __m128i ssp_comtrue_epi8_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u8[0] = 0xff;
    A.u8[1] = 0xff;
    A.u8[2] = 0xff;
    A.u8[3] = 0xff;
    A.u8[4] = 0xff;
    A.u8[5] = 0xff;
    A.u8[6] = 0xff;
    A.u8[7] = 0xff; 
	A.u8[8] = 0xff;
    A.u8[9] = 0xff;
    A.u8[10] = 0xff;
    A.u8[11] = 0xff;
    A.u8[12] = 0xff;
    A.u8[13] = 0xff;
    A.u8[14] = 0xff;
    A.u8[15] = 0xff;

	return A.i;
}

/** \SSE5{Reference,_mm_comtrue_epu16, pcomw } */
SSP_FORCEINLINE __m128i ssp_comtrue_epu16_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;

    A.u16[0] = 0xffff;
    A.u16[1] = 0xffff;
    A.u16[2] = 0xffff;
    A.u16[3] = 0xffff;
    A.u16[4] = 0xffff;
    A.u16[5] = 0xffff;
    A.u16[6] = 0xffff;
    A.u16[7] = 0xffff;

	return A.i;
}

/** \SSE5{Reference,_mm_comtrue_epu32, pcomd } */
SSP_FORCEINLINE __m128i ssp_comtrue_epu32_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;

    A.u32[0] = 0xffffffff;
    A.u32[1] = 0xffffffff;
    A.u32[2] = 0xffffffff;
    A.u32[3] = 0xffffffff;

	return A.i;
}

/** \SSE5{Reference,_mm_comtrue_epu64, pcomq } */
SSP_FORCEINLINE __m128i ssp_comtrue_epu64_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u64[0] = 0xffffffffffffffff;
    A.u64[1] = 0xffffffffffffffff;

	return A.i;
}

/** \SSE5{Reference,_mm_comtrue_epu8, pcomb } */
SSP_FORCEINLINE __m128i ssp_comtrue_epu8_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u8[0] = 0xff;
    A.u8[1] = 0xff;
    A.u8[2] = 0xff;
    A.u8[3] = 0xff;
    A.u8[4] = 0xff;
    A.u8[5] = 0xff;
    A.u8[6] = 0xff;
    A.u8[7] = 0xff; 
	A.u8[8] = 0xff;
    A.u8[9] = 0xff;
    A.u8[10] = 0xff;
    A.u8[11] = 0xff;
    A.u8[12] = 0xff;
    A.u8[13] = 0xff;
    A.u8[14] = 0xff;
    A.u8[15] = 0xff;

	return A.i;
}

/** \SSE5{Reference,_mm_comtrue_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comtrue_pd_REF(__m128d a, __m128d b)
{   
    ssp_m128 A;
    A.d = a;

    A.u64[0] = 0xFFFFFFFFFFFFFFFF;
    A.u64[1] = 0xFFFFFFFFFFFFFFFF;

	return A.d;
}

/** \SSE5{Reference,_mm_comtrue_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comtrue_ps_REF(__m128 a, __m128 b)
{   
    ssp_m128 A;
    A.f = a;

    A.u32[0] = 0xFFFFFFFF;
    A.u32[1] = 0xFFFFFFFF;
    A.u32[2] = 0xFFFFFFFF;
    A.u32[3] = 0xFFFFFFFF;

    return A.f;
}

/** \SSE5{Reference,_mm_comtrue_sd, comsd } */
SSP_FORCEINLINE __m128d ssp_comtrue_sd_REF(__m128d a, __m128d b)
{   
    ssp_m128 A;
    A.d = a;

    A.u64[0] = 0xFFFFFFFFFFFFFFFF;

    return A.d;
}

/** \SSE5{Reference,_mm_comtrue_ss, comss } */
SSP_FORCEINLINE __m128 ssp_comtrue_ss_REF(__m128 a, __m128 b)
{   
    ssp_m128 A;
    A.f = a;

    A.u32[0] = 0xFFFFFFFF;

    return A.f;
}

/** \SSE5{Reference,_mm_comfalse_pd, compd } */
SSP_FORCEINLINE __m128d ssp_comfalse_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;
    A.u64[0] = 0;
    A.u64[1] = 0;
    return A.d;
}

/** \SSE5{Reference,_mm_comfalse_ps, comps } */
SSP_FORCEINLINE __m128 ssp_comfalse_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;
    A.u32[0] = 0;
    A.u32[1] = 0;
    A.u32[2] = 0;
    A.u32[3] = 0;
    return A.f;
}

/** \SSE5{Reference,_mm_comfalse_epi16, pcomw } */
SSP_FORCEINLINE __m128i ssp_comfalse_epi16_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;

    A.u16[0] = 0;
    A.u16[1] = 0;
    A.u16[2] = 0;
    A.u16[3] = 0;
    A.u16[4] = 0;
    A.u16[5] = 0;
    A.u16[6] = 0;
    A.u16[7] = 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comfalse_epi32, pcomd } */
SSP_FORCEINLINE __m128i ssp_comfalse_epi32_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;

    A.u32[0] = 0;
    A.u32[1] = 0;
    A.u32[2] = 0;
    A.u32[3] = 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comfalse_epi64, pcomq } */
SSP_FORCEINLINE __m128i ssp_comfalse_epi64_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u64[0] = 0;
    A.u64[1] = 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comfalse_epi8, pcomb } */
SSP_FORCEINLINE __m128i ssp_comfalse_epi8_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u8[0] = 0;
    A.u8[1] = 0;
    A.u8[2] = 0;
    A.u8[3] = 0;
    A.u8[4] = 0;
    A.u8[5] = 0;
    A.u8[6] = 0;
    A.u8[7] = 0; 
	A.u8[8] = 0;
    A.u8[9] = 0;
    A.u8[10] = 0;
    A.u8[11] = 0;
    A.u8[12] = 0;
    A.u8[13] = 0;
    A.u8[14] = 0;
    A.u8[15] = 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comfalse_epu16, pcomuw } */
SSP_FORCEINLINE __m128i ssp_comfalse_epu16_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u16[0] = 0;
    A.u16[1] = 0;
    A.u16[2] = 0;
    A.u16[3] = 0;
    A.u16[4] = 0;
    A.u16[5] = 0;
    A.u16[6] = 0;
    A.u16[7] = 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comfalse_epu32, pcomud } */
SSP_FORCEINLINE __m128i ssp_comfalse_epu32_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u32[0] = 0;
    A.u32[1] = 0;
    A.u32[2] = 0;
    A.u32[3] = 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comfalse_epu64, pcomuq } */
SSP_FORCEINLINE __m128i ssp_comfalse_epu64_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u64[0] = 0;
    A.u64[1] = 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comfalse_epu8, pcomub } */
SSP_FORCEINLINE __m128i ssp_comfalse_epu8_REF(__m128i a, __m128i b)
{
    ssp_m128 A;
    A.i = a;
    
    A.u8[0] = 0;
    A.u8[1] = 0;
    A.u8[2] = 0;
    A.u8[3] = 0;
    A.u8[4] = 0;
    A.u8[5] = 0;
    A.u8[6] = 0;
    A.u8[7] = 0; 
	A.u8[8] = 0;
    A.u8[9] = 0;
    A.u8[10] = 0;
    A.u8[11] = 0;
    A.u8[12] = 0;
    A.u8[13] = 0;
    A.u8[14] = 0;
    A.u8[15] = 0;

	return A.i;
}

/** \SSE5{Reference,_mm_comfalse_sd, comsd } */
SSP_FORCEINLINE __m128d ssp_comfalse_sd_REF(__m128d a, __m128d b)
{
    ssp_m128 A;
    A.d = a;

    A.u64[0] = 0;

    return A.d;
}

/** \SSE5{Reference,_mm_comfalse_ss, comss } */
SSP_FORCEINLINE __m128 ssp_comfalse_ss_REF(__m128 a, __m128 b)
{
    ssp_m128 A;
    A.f = a;

    A.u32[0] = 0;

    return A.f;
}

//--------------------------------------
// Extract Fraction
//--------------------------------------
/** \SSE5{Reference,_mm_frcz_pd_REF, frczpd  } */
SSP_FORCEINLINE __m128d ssp_frcz_pd_REF(__m128d a)
{
	ssp_m128 A;
	long long temp;

	A.d = a;

	temp = (long long) A.f64[0];
	A.f64[0] -= temp;
	temp = (long long) A.f64[1];
	A.f64[1] -= temp;

	return A.d;
}

/** \SSE5{Reference,_mm_frcz_ps_REF, frczps  } */
SSP_FORCEINLINE __m128 ssp_frcz_ps_REF(__m128 a)
{
	ssp_m128 A;
	int temp;
	A.f = a;

	temp = (int) A.f32[0];
	A.f32[0] -= temp;
	temp = (int) A.f32[1];
	A.f32[1] -= temp;
	temp = (int) A.f32[2];
	A.f32[2] -= temp;
	temp = (int) A.f32[3];
	A.f32[3] -= temp;

	return A.f;
}

/** \SSE5{Reference,_mm_frcz_sd_REF, frczsd  } */
SSP_FORCEINLINE __m128d ssp_frcz_sd_REF(__m128d a)
{
	ssp_m128 A;
	long long temp;

	A.d = a;

	temp = (long long) A.f64[0];
	A.f64[0] -= temp;

	return A.d;
}

/** \SSE5{Reference,_mm_frcz_ss_REF, frczss  } */
SSP_FORCEINLINE __m128 ssp_frcz_ss_REF(__m128 a)
{
	ssp_m128 A;
	int temp;
	A.f = a;

	temp = (int) A.f32[0];
	A.f32[0] -= temp;

	return A.f;
}


//--------------------------------------
// Horizontal Add and Sub
//--------------------------------------
/** \SSE5{Reference,_mm_haddd_epi16, phaddwd  } */
SSP_FORCEINLINE __m128i ssp_haddd_epi16_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s32[0] = A.s16[0] + A.s16[1];
	B.s32[1] = A.s16[2] + A.s16[3];
	B.s32[2] = A.s16[4] + A.s16[5];
	B.s32[3] = A.s16[6] + A.s16[7];

	return B.i;
}

/** \SSE5{Reference,_mm_haddd_epi8, phaddbd  } */
SSP_FORCEINLINE __m128i ssp_haddd_epi8_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s32[0] = A.s8[ 0] + A.s8[ 1] + A.s8[ 2] + A.s8[ 3];
	B.s32[1] = A.s8[ 4] + A.s8[ 5] + A.s8[ 6] + A.s8[ 7];
	B.s32[2] = A.s8[ 8] + A.s8[ 9] + A.s8[10] + A.s8[11];
	B.s32[3] = A.s8[12] + A.s8[13] + A.s8[14] + A.s8[15];

	return B.i;
}

/** \SSE5{Reference,_mm_haddd_epu16, phadduwd  } */
SSP_FORCEINLINE __m128i ssp_haddd_epu16_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.u32[0] = A.u16[0] + A.u16[1];
	B.u32[1] = A.u16[2] + A.u16[3];
	B.u32[2] = A.u16[4] + A.u16[5];
	B.u32[3] = A.u16[6] + A.u16[7];

	return B.i;
}

/** \SSE5{Reference,_mm_haddd_epu8, phaddubd  } */
SSP_FORCEINLINE __m128i ssp_haddd_epu8_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.u32[0] = A.u8[ 0] + A.u8[ 1] + A.u8[ 2] + A.u8[ 3];
	B.u32[1] = A.u8[ 4] + A.u8[ 5] + A.u8[ 6] + A.u8[ 7];
	B.u32[2] = A.u8[ 8] + A.u8[ 9] + A.u8[10] + A.u8[11];
	B.u32[3] = A.u8[12] + A.u8[13] + A.u8[14] + A.u8[15];

	return B.i;
}

/** \SSE5{Reference,_mm_haddq_epi16, phaddwq  } */
SSP_FORCEINLINE __m128i ssp_haddq_epi16_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s64[0] = A.s16[0] + A.s16[1] + A.s16[2] + A.s16[3];
	B.s64[1] = A.s16[4] + A.s16[5] + A.s16[6] + A.s16[7];

	return B.i;
}

/** \SSE5{Reference,_mm_haddq_epi32, phadddq  } */
SSP_FORCEINLINE __m128i ssp_haddq_epi32_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s64[0] = A.s32[0] + (long long)A.s32[1];
	B.s64[1] = A.s32[2] + (long long)A.s32[3];

	return B.i;
}

/** \SSE5{Reference,_mm_haddq_epi8, phaddbq  } */
SSP_FORCEINLINE __m128i ssp_haddq_epi8_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s64[0] = A.s8[0] + A.s8[1] + A.s8[2] + A.s8[3] + A.s8[4] + A.s8[5] + A.s8[6] + A.s8[7];
	B.s64[1] = A.s8[8] + A.s8[9] + A.s8[10] + A.s8[11] + A.s8[12] + A.s8[13] + A.s8[14] + A.s8[15];

	return B.i;
}

/** \SSE5{Reference,_mm_haddq_epu16, phadduwq  } */
SSP_FORCEINLINE __m128i ssp_haddq_epu16_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.u64[0] = A.u16[0] + A.u16[1] + A.u16[2] + A.u16[3];
	B.u64[1] = A.u16[4] + A.u16[5] + A.u16[6] + A.u16[7];

	return B.i;
}

/** \SSE5{Reference,_mm_haddq_epu32, phaddudq  } */
SSP_FORCEINLINE __m128i ssp_haddq_epu32_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.u64[0] = A.u32[0] + (long long)A.u32[1];
	B.u64[1] = A.u32[2] + (long long)A.u32[3];

	return B.i;
}

/** \SSE5{Reference,_mm_haddq_epu8, phaddubq  } */
SSP_FORCEINLINE __m128i ssp_haddq_epu8_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.u64[0] = A.u8[0] + A.u8[1] + A.u8[2] + A.u8[3] + A.u8[4] + A.u8[5] + A.u8[6] + A.u8[7];
	B.u64[1] = A.u8[8] + A.u8[9] + A.u8[10] + A.u8[11] + A.u8[12] + A.u8[13] + A.u8[14] + A.u8[15];

	return B.i;
}

/** \SSE5{Reference,_mm_haddw_epi8, phaddbw  } */
SSP_FORCEINLINE __m128i ssp_haddw_epi8_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s16[0] = A.s8[0] + A.s8[1];
	B.s16[1] = A.s8[2] + A.s8[3];
	B.s16[2] = A.s8[4] + A.s8[5];
	B.s16[3] = A.s8[6] + A.s8[7];
	B.s16[4] = A.s8[8] + A.s8[9];
	B.s16[5] = A.s8[10] + A.s8[11];
	B.s16[6] = A.s8[12] + A.s8[13];
	B.s16[7] = A.s8[14] + A.s8[15];

	return B.i;
}

/** \SSE5{Reference,_mm_haddw_epu8, phaddubw  } */
SSP_FORCEINLINE __m128i ssp_haddw_epu8_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.u16[0] = A.u8[0] + A.u8[1];
	B.u16[1] = A.u8[2] + A.u8[3];
	B.u16[2] = A.u8[4] + A.u8[5];
	B.u16[3] = A.u8[6] + A.u8[7];
	B.u16[4] = A.u8[8] + A.u8[9];
	B.u16[5] = A.u8[10] + A.u8[11];
	B.u16[6] = A.u8[12] + A.u8[13];
	B.u16[7] = A.u8[14] + A.u8[15];

	return B.i;
}

/** \SSE5{Reference,_mm_hsubd_epi16, phsubwd  } */
SSP_FORCEINLINE __m128i ssp_hsubd_epi16_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s32[0] = A.s16[1] - A.s16[0];
	B.s32[1] = A.s16[3] - A.s16[2];
	B.s32[2] = A.s16[5] - A.s16[4];
	B.s32[3] = A.s16[7] - A.s16[6];

	return B.i;
}

/** \SSE5{Reference,_mm_hsubq_epi32, phsubdq  } */
SSP_FORCEINLINE __m128i ssp_hsubq_epi32_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s64[0] = (long long)A.s32[1] - A.s32[0];
	B.s64[1] = (long long)A.s32[3] - A.s32[2];

	return B.i;
}

/** \SSE5{Reference,_mm_hsubw_epi8, phsubbw  } */
SSP_FORCEINLINE __m128i ssp_hsubw_epi8_REF(__m128i a)
{
	ssp_m128 A, B;
	A.i = a;

	B.s16[0] = A.s8[1] - A.s8[0];
	B.s16[1] = A.s8[3] - A.s8[2];
	B.s16[2] = A.s8[5] - A.s8[4];
	B.s16[3] = A.s8[7] - A.s8[6];
	B.s16[4] = A.s8[9] - A.s8[8];
	B.s16[5] = A.s8[11] - A.s8[10];
	B.s16[6] = A.s8[13] - A.s8[12];
	B.s16[7] = A.s8[15] - A.s8[14];

	return B.i;
}

//--------------------------------------
// Multiply Add
//--------------------------------------

/** \SSE5{Reference,_mm_macc_epi16, pmacsww } */ 
SSP_FORCEINLINE __m128i ssp_macc_epi16_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A,B,C;
    A.i = a;
    B.i = b;
    C.i = c;

    A.s16[0] = A.s16[0] * B.s16[0] + C.s16[0];
    A.s16[1] = A.s16[1] * B.s16[1] + C.s16[1];
    A.s16[2] = A.s16[2] * B.s16[2] + C.s16[2];
    A.s16[3] = A.s16[3] * B.s16[3] + C.s16[3];
    A.s16[4] = A.s16[4] * B.s16[4] + C.s16[4];
    A.s16[5] = A.s16[5] * B.s16[5] + C.s16[5];
    A.s16[6] = A.s16[6] * B.s16[6] + C.s16[6];
    A.s16[7] = A.s16[7] * B.s16[7] + C.s16[7];

    return A.i;
}

/** \SSE5{Reference,_mm_macc_epi32, pmacsdd } */ 
SSP_FORCEINLINE __m128i ssp_macc_epi32_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A,B,C;
    A.i = a;
    B.i = b;
    C.i = c;

    A.s32[0] = A.s32[0] * B.s32[0] + C.s32[0];
    A.s32[1] = A.s32[1] * B.s32[1] + C.s32[1];
    A.s32[2] = A.s32[2] * B.s32[2] + C.s32[2];
    A.s32[3] = A.s32[3] * B.s32[3] + C.s32[3];

    return A.i;
}

/** \SSE5{Reference,_mm_macc_ps,fmaddps } */ 
SSP_FORCEINLINE __m128 ssp_macc_ps_REF( __m128 a, __m128 b, __m128 c )
{
    ssp_m128 A,B,C;
    A.f = a;
    B.f = b;
    C.f = c;

    A.f32[0] = A.f32[0] * B.f32[0] + C.f32[0];
    A.f32[1] = A.f32[1] * B.f32[1] + C.f32[1];
    A.f32[2] = A.f32[2] * B.f32[2] + C.f32[2];
    A.f32[3] = A.f32[3] * B.f32[3] + C.f32[3];
    return A.f;
}

/** \SSE5{Reference,_mm_macc_pd,fmaddpd} */ 
SSP_FORCEINLINE __m128d ssp_macc_pd_REF( __m128d a, __m128d b, __m128d c )
{
    ssp_m128 A,B,C;
    A.d = a;
    B.d = b;
    C.d = c;

    A.f64[0] = A.f64[0] * B.f64[0] + C.f64[0];
    A.f64[1] = A.f64[1] * B.f64[1] + C.f64[1]; 
    return A.d;
}

/** \SSE5{Reference,_mm_macc_ss,fmaddss} */ 
SSP_FORCEINLINE __m128 ssp_macc_ss_REF(__m128 a, __m128 b, __m128 c)   // Assuming SSE5 *_ss semantics are similar to _mm_add_ss. TODO: confirm
{
    ssp_m128 A,B,C;
    A.f = a;
    B.f = b;
    C.f = c;

    A.f32[0] = A.f32[0] * B.f32[0] + C.f32[0];   
    return A.f;
}

/** \SSE5{Reference,_mm_macc_sd,fmaddss} */ 
SSP_FORCEINLINE __m128d ssp_macc_sd_REF(__m128d a, __m128d b, __m128d c)   // Assuming SSE5 *_ss semantics are similar to _mm_add_ss. TODO: confirm
{
    ssp_m128 A,B,C;
    A.d = a;
    B.d = b;
    C.d = c;

    A.f64[0] = A.f64[0] * B.f64[0] + C.f64[0];   
    return A.d;
}

/** \SSE5{Reference,_mm_maccd_epi16, pmacswd } */ 
SSP_FORCEINLINE __m128i ssp_maccd_epi16_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C, D;
    A.i = a;
    B.i = b;
    C.i = c;

    D.s32[0] = A.s16[0] * B.s16[0] + C.s32[0];
    D.s32[1] = A.s16[2] * B.s16[2] + C.s32[1];
    D.s32[2] = A.s16[4] * B.s16[4] + C.s32[2];
    D.s32[3] = A.s16[6] * B.s16[6] + C.s32[3];

    return D.i;
}

/** \SSE5{Reference,_mm_macchi_epi32, pmacsdqh } */ 
SSP_FORCEINLINE __m128i ssp_macchi_epi32_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C, D;
    A.i = a;
    B.i = b;
    C.i = c;

    D.s64[0] = A.s32[1] * B.s32[1] + C.s64[0];
    D.s64[1] = A.s32[3] * B.s32[3] + C.s64[1];

    return D.i;
}

/** \SSE5{Reference,_mm_macclo_epi32, pmacsdql } */ 
SSP_FORCEINLINE __m128i ssp_macclo_epi32_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C, D;
    A.i = a;
    B.i = b;
    C.i = c;

    D.s64[0] = A.s32[0] * B.s32[0] + C.s64[0];
    D.s64[1] = A.s32[2] * B.s32[2] + C.s64[1];

    return D.i;
}

#define SSP_SATURATION(a, pos_limit, neg_limit) (a>pos_limit) ? pos_limit : ((a<neg_limit)?neg_limit:a)

/** \SSE5{Reference,_mm_maccs_epi16, pmacssww } */ 
SSP_FORCEINLINE __m128i ssp_maccs_epi16_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C;
	int temp;
    A.i = a;
    B.i = b;
    C.i = c;

	temp = A.s16[0] * B.s16[0] + C.s16[0];
	A.s16[0] = SSP_SATURATION(temp, 32767, -32768);
	temp = A.s16[1] * B.s16[1] + C.s16[1];
    A.s16[1] = SSP_SATURATION(temp, 32767, -32768);
	temp = A.s16[2] * B.s16[2] + C.s16[2];
    A.s16[2] = SSP_SATURATION(temp, 32767, -32768);
	temp = A.s16[3] * B.s16[3] + C.s16[3];
    A.s16[3] = SSP_SATURATION(temp, 32767, -32768);
	temp = A.s16[4] * B.s16[4] + C.s16[4];
    A.s16[4] = SSP_SATURATION(temp, 32767, -32768);
	temp = A.s16[5] * B.s16[5] + C.s16[5];
    A.s16[5] = SSP_SATURATION(temp, 32767, -32768);
	temp = A.s16[6] * B.s16[6] + C.s16[6];
    A.s16[6] = SSP_SATURATION(temp, 32767, -32768);
	temp = A.s16[7] * B.s16[7] + C.s16[7];
    A.s16[7] = SSP_SATURATION(temp, 32767, -32768);

    return A.i;
}

/** \SSE5{Reference,_mm_maccs_epi32, pmacssdd } */ 
SSP_FORCEINLINE __m128i ssp_maccs_epi32_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C;
	long long temp;
    A.i = a;
    B.i = b;
    C.i = c;

	temp = (long long)A.s32[0] * B.s32[0] + C.s32[0];
	A.s32[0] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));
	temp = (long long)A.s32[1] * B.s32[1] + C.s32[1];
    A.s32[1] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));
	temp = (long long)A.s32[2] * B.s32[2] + C.s32[2];
    A.s32[2] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));
	temp = (long long)A.s32[3] * B.s32[3] + C.s32[3];
    A.s32[3] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));

    return A.i;
}

/** \SSE5{Reference,_mm_maccsd_epi16, pmacsswd } */ 
SSP_FORCEINLINE __m128i ssp_maccsd_epi16_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C, D;
	long long temp;
    A.i = a;
    B.i = b;
    C.i = c;

	//should be able to compare data to see whether overflow/underflow
	temp = A.s16[0] * B.s16[0] + (long long)C.s32[0];
    D.s32[0] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));
	temp = A.s16[2] * B.s16[2] + (long long)C.s32[1];
    D.s32[1] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));
	temp = A.s16[4] * B.s16[4] + (long long)C.s32[2];
    D.s32[2] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));
	temp = A.s16[6] * B.s16[6] + (long long)C.s32[3];
    D.s32[3] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));

    return D.i;
}

/** \SSE5{Reference,_mm_maccshi_epi32, pmacssdqh } */ 
SSP_FORCEINLINE __m128i ssp_maccshi_epi32_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C, D;
	long long temp;
	unsigned long long signT, signC;
    A.i = a;
    B.i = b;
    C.i = c;

	temp = (long long)A.s32[1] * B.s32[1];
	signT = temp & 0x8000000000000000LL;
	signC = C.s64[0] & 0x8000000000000000LL;
	temp += C.s64[0];
	D.s64[0] = (signT==signC) ? ((signT >0) ? ((temp > C.s64[0]) ? 0x8000000000000000LL : temp) 
		: ((temp < C.s64[0])? 0x7FFFFFFFFFFFFFFFLL : temp)) : temp;
	temp = (long long)A.s32[3] * B.s32[3];
	signT = temp & 0x8000000000000000LL;
	signC = C.s64[1] & 0x8000000000000000LL;
	temp += C.s64[1];
	D.s64[1] = (signT==signC) ? ((signT >0) ? ((temp > C.s64[1]) ? 0x8000000000000000LL : temp) 
		: ((temp < C.s64[1])? 0x7FFFFFFFFFFFFFFFLL : temp)) : temp;

    return D.i;
}

/** \SSE5{Reference,_mm_maccslo_epi32, pmacssdql } */ 
SSP_FORCEINLINE __m128i ssp_maccslo_epi32_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C, D;
	long long temp;
	unsigned long long signT, signC;
    A.i = a;
    B.i = b;
    C.i = c;

	temp = (long long)A.s32[0] * B.s32[0];
	signT = temp & 0x8000000000000000LL;
	signC = C.s64[0] & 0x8000000000000000LL;
	temp += C.s64[0];
	D.s64[0] = (signT==signC) ? ((signT >0) ? ((temp > C.s64[0]) ? 0x8000000000000000LL : temp) 
		: ((temp < C.s64[0])? 0x7FFFFFFFFFFFFFFFLL : temp)) : temp;
	temp = (long long)A.s32[2] * B.s32[2];
	signT = temp & 0x8000000000000000LL;
	signC = C.s64[1] & 0x8000000000000000LL;
	temp += C.s64[1];
	D.s64[1] = (signT==signC) ? ((signT >0) ? ((temp > C.s64[1]) ? 0x8000000000000000LL : temp) 
		: ((temp < C.s64[1])? 0x7FFFFFFFFFFFFFFFLL : temp)) : temp;

    return D.i;
}

/** \SSE5{Reference,_mm_maddd_epi16, pmadcswd } */ 
SSP_FORCEINLINE __m128i ssp_maddd_epi16_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C, D;
    A.i = a;
    B.i = b;
    C.i = c;

    D.s32[0] = A.s16[0] * B.s16[0] + A.s16[1] * B.s16[1] + C.s32[0];
    D.s32[1] = A.s16[2] * B.s16[2] + A.s16[3] * B.s16[3] + C.s32[1];
    D.s32[2] = A.s16[4] * B.s16[4] + A.s16[5] * B.s16[5] + C.s32[2];
    D.s32[3] = A.s16[6] * B.s16[6] + A.s16[7] * B.s16[7] + C.s32[3];

    return D.i;
}

/** \SSE5{Reference,_mm_maddsd_epi16, pmadcsswd } */ 
SSP_FORCEINLINE __m128i ssp_maddsd_epi16_REF( __m128i a, __m128i b, __m128i c )
{
    ssp_m128 A, B, C, D;
	long long temp;

    A.i = a;
    B.i = b;
    C.i = c;

	temp = A.s16[0] * B.s16[0] + A.s16[1] * B.s16[1] + (long long)C.s32[0];
    D.s32[0] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));
	temp = A.s16[2] * B.s16[2] + A.s16[3] * B.s16[3] + (long long)C.s32[1];
    D.s32[1] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));;
	temp = A.s16[4] * B.s16[4] + A.s16[5] * B.s16[5] + (long long)C.s32[2];
    D.s32[2] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));;
	temp = A.s16[6] * B.s16[6] + A.s16[7] * B.s16[7] + (long long)C.s32[3];
    D.s32[3] = (ssp_s32)(SSP_SATURATION(temp, 2147483647LL, -2147483648LL));;

    return D.i;
}

//--------------------------------------
// Negative Multiply Add
//--------------------------------------

/** \SSE5{Reference,_mm_nmacc_ps,fnmaddps} */ 
SSP_FORCEINLINE __m128 ssp_nmacc_ps_REF(__m128 a, __m128 b, __m128 c)
{
    ssp_m128 A,B,C;
    A.f = a;
    B.f = b;
    C.f = c;

    A.f32[0] = -(A.f32[0] * B.f32[0]) + C.f32[0];
    A.f32[1] = -(A.f32[1] * B.f32[1]) + C.f32[1];
    A.f32[2] = -(A.f32[2] * B.f32[2]) + C.f32[2];
    A.f32[3] = -(A.f32[3] * B.f32[3]) + C.f32[3];
    return A.f;
}

/** \SSE5{Reference,_mm_nmacc_pd,fnmaddpd} */ 
SSP_FORCEINLINE __m128d ssp_nmacc_pd_REF(__m128d a, __m128d b, __m128d c)
{
    ssp_m128 A,B,C;
    A.d = a;
    B.d = b;
    C.d = c;

    A.f64[0] = -(A.f64[0] * B.f64[0]) + C.f64[0];
    A.f64[1] = -(A.f64[1] * B.f64[1]) + C.f64[1]; 
    return A.d;
}

/** \SSE5{Reference,_mm_nmacc_ss,fnmaddss} */ 
SSP_FORCEINLINE __m128 ssp_nmacc_ss_REF(__m128 a, __m128 b, __m128 c)
{
    ssp_m128 A,B,C;
    A.f = a;
    B.f = b;
    C.f = c;

    A.f32[0] = -(A.f32[0] * B.f32[0]) + C.f32[0];   
    return A.f;
}

/** \SSE5{Reference,_mm_nmacc_sd,fnmaddsd} */ 
SSP_FORCEINLINE __m128d ssp_nmacc_sd_REF(__m128d a, __m128d b, __m128d c)
{
    ssp_m128 A,B,C;
    A.d = a;
    B.d = b;
    C.d = c;

    A.f64[0] = -(A.f64[0] * B.f64[0]) + C.f64[0];   
    return A.d;
}


//--------------------------------------
// Multiply Subtract
//--------------------------------------

/** \SSE5{Reference,_mm_msub_ps,fmsubps} */ 
SSP_FORCEINLINE __m128 ssp_msub_ps_REF( __m128 a, __m128 b, __m128 c )
{
    ssp_m128 A,B,C;
    A.f = a;
    B.f = b;
    C.f = c;

    A.f32[0] = A.f32[0] * B.f32[0] - C.f32[0];
    A.f32[1] = A.f32[1] * B.f32[1] - C.f32[1];
    A.f32[2] = A.f32[2] * B.f32[2] - C.f32[2];
    A.f32[3] = A.f32[3] * B.f32[3] - C.f32[3];
    return A.f;
}

/** \SSE5{Reference,_mm_msub_pd,fmsubpd} */ 
SSP_FORCEINLINE __m128d ssp_msub_pd_REF( __m128d a, __m128d b, __m128d c )
{
    ssp_m128 A,B,C;
    A.d = a;
    B.d = b;
    C.d = c;

    A.f64[0] = A.f64[0] * B.f64[0] - C.f64[0];
    A.f64[1] = A.f64[1] * B.f64[1] - C.f64[1]; 
    return A.d;
}

/** \SSE5{Reference,_mm_msub_ss,fmsubss} */ 
SSP_FORCEINLINE __m128 ssp_msub_ss_REF(__m128 a, __m128 b, __m128 c)   // Assuming SSE5 *_ss semantics are similar to _mm_add_ss. TODO: confirm
{
    ssp_m128 A,B,C;
    A.f = a;
    B.f = b;
    C.f = c;

    A.f32[0] = A.f32[0] * B.f32[0] - C.f32[0];   
    return A.f;
}

/** \SSE5{Reference,_mm_msub_sd,fmsubss} */ 
SSP_FORCEINLINE __m128d ssp_msub_sd_REF(__m128d a, __m128d b, __m128d c)   // Assuming SSE5 *_ss semantics are similar to _mm_add_ss. TODO: confirm
{
    ssp_m128 A,B,C;
    A.d = a;
    B.d = b;
    C.d = c;

    A.f64[0] = A.f64[0] * B.f64[0] - C.f64[0];   
    return A.d;
}

//--------------------------------------
// Negative Multiply Subtract
//--------------------------------------

/** \SSE5{Reference,_mm_nmsub_ps,fnmsubps} */ 
SSP_FORCEINLINE __m128 ssp_nmsub_ps_REF(__m128 a, __m128 b, __m128 c)
{
    ssp_m128 A,B,C;
    A.f = a;
    B.f = b;
    C.f = c;

    A.f32[0] = -(A.f32[0] * B.f32[0]) - C.f32[0];
    A.f32[1] = -(A.f32[1] * B.f32[1]) - C.f32[1];
    A.f32[2] = -(A.f32[2] * B.f32[2]) - C.f32[2];
    A.f32[3] = -(A.f32[3] * B.f32[3]) - C.f32[3];
    return A.f;
}

/** \SSE5{Reference,_mm_nmsub_pd,fnmsubpd} */ 
SSP_FORCEINLINE __m128d ssp_nmsub_pd_REF(__m128d a, __m128d b, __m128d c)
{
    ssp_m128 A,B,C;
    A.d = a;
    B.d = b;
    C.d = c;

    A.f64[0] = -(A.f64[0] * B.f64[0]) - C.f64[0];
    A.f64[1] = -(A.f64[1] * B.f64[1]) - C.f64[1]; 
    return A.d;
}

/** \SSE5{Reference,_mm_nmsub_ss,fnmsubss} */ 
SSP_FORCEINLINE __m128 ssp_nmsub_ss_REF(__m128 a, __m128 b, __m128 c)
{
    ssp_m128 A,B,C;
    A.f = a;
    B.f = b;
    C.f = c;

    A.f32[0] = -(A.f32[0] * B.f32[0]) - C.f32[0];   
    return A.f;
}

/** \SSE5{Reference,_mm_nmsub_sd,fnmsubsd} */ 
SSP_FORCEINLINE __m128d ssp_nmsub_sd_REF(__m128d a, __m128d b, __m128d c)
{
    ssp_m128 A,B,C;
    A.d = a;
    B.d = b;
    C.d = c;

    A.f64[0] = -(A.f64[0] * B.f64[0]) - C.f64[0];   
    return A.d;
}



//---------------------------------------
// AddSubtract
//---------------------------------------

/** \IMP{Reference,_mm_addsub_ps,SSE3} */
SSP_FORCEINLINE __m128 ssp_addsub_ps_REF(__m128 a, __m128 b)
{
    ssp_m128 A, B;
    A.f = a;
    B.f = b;

    A.f32[0] -= B.f32[0];
    A.f32[1] += B.f32[1];
    A.f32[2] -= B.f32[2];
    A.f32[3] += B.f32[3];
    return A.f;
}

/** \IMP{Reference,_mm_addsub_pd, SSE3} */
SSP_FORCEINLINE __m128d ssp_addsub_pd_REF(__m128d a, __m128d b)
{
    ssp_m128 A, B;
    A.d = a;
    B.d = b;

    A.f64[0] -= B.f64[0];
    A.f64[1] += B.f64[1];
    return A.d;
}

//---------------------------------------
//Blend
//---------------------------------------

/** \IMP{Reference,_mm_blend_epi16, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_blend_epi16_REF     ( __m128i a, __m128i b, const int mask )
{
    ssp_m128 A, B;
    A.i = a;
    B.i = b;

    A.s16[0] = (mask & 0x01) ? B.s16[0] : A.s16[0];
    A.s16[1] = (mask & 0x02) ? B.s16[1] : A.s16[1];
    A.s16[2] = (mask & 0x04) ? B.s16[2] : A.s16[2];
    A.s16[3] = (mask & 0x08) ? B.s16[3] : A.s16[3];
    A.s16[4] = (mask & 0x10) ? B.s16[4] : A.s16[4];
    A.s16[5] = (mask & 0x20) ? B.s16[5] : A.s16[5];
    A.s16[6] = (mask & 0x40) ? B.s16[6] : A.s16[6];
    A.s16[7] = (mask & 0x80) ? B.s16[7] : A.s16[7];
    return A.i;
}

/** \IMP{Reference,_mm_blend_pd, SSE4.1} */
SSP_FORCEINLINE __m128d ssp_blend_pd_REF        ( __m128d a, __m128d b, const int mask )
{
    ssp_m128 A, B;
    A.d = a;
    B.d = b;

    A.f64[0] = (mask & 0x1) ? B.f64[0] : A.f64[0];
    A.f64[1] = (mask & 0x2) ? B.f64[1] : A.f64[1];
    return A.d;
}

/** \IMP{Reference,_mm_blend_ps, SSE4.1} */
SSP_FORCEINLINE __m128 ssp_blend_ps_REF        ( __m128 a, __m128 b, const int mask )
{
    ssp_m128 A, B;
    A.f = a;
    B.f = b;

    A.f32[0] = (mask & 0x1) ? B.f32[0] : A.f32[0];
    A.f32[1] = (mask & 0x2) ? B.f32[1] : A.f32[1];
    A.f32[2] = (mask & 0x4) ? B.f32[2] : A.f32[2];
    A.f32[3] = (mask & 0x8) ? B.f32[3] : A.f32[3];
    return A.f;
}

/** \IMP{Reference,_mm_blendv_epi8, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_blendv_epi8_REF     ( __m128i a, __m128i b, __m128i mask )
{
    ssp_m128 A, B, Mask;
    A.i = a;
    B.i = b;
    Mask.i = mask;

    A.s8[0]  = (Mask.s8[0]  & 0x80) ? B.s8[0]  : A.s8[0];
    A.s8[1]  = (Mask.s8[1]  & 0x80) ? B.s8[1]  : A.s8[1];
    A.s8[2]  = (Mask.s8[2]  & 0x80) ? B.s8[2]  : A.s8[2];
    A.s8[3]  = (Mask.s8[3]  & 0x80) ? B.s8[3]  : A.s8[3];
    A.s8[4]  = (Mask.s8[4]  & 0x80) ? B.s8[4]  : A.s8[4];
    A.s8[5]  = (Mask.s8[5]  & 0x80) ? B.s8[5]  : A.s8[5];
    A.s8[6]  = (Mask.s8[6]  & 0x80) ? B.s8[6]  : A.s8[6];
    A.s8[7]  = (Mask.s8[7]  & 0x80) ? B.s8[7]  : A.s8[7];
    A.s8[8]  = (Mask.s8[8]  & 0x80) ? B.s8[8]  : A.s8[8];
    A.s8[9]  = (Mask.s8[9]  & 0x80) ? B.s8[9]  : A.s8[9];
    A.s8[10] = (Mask.s8[10] & 0x80) ? B.s8[10] : A.s8[10];
    A.s8[11] = (Mask.s8[11] & 0x80) ? B.s8[11] : A.s8[11];
    A.s8[12] = (Mask.s8[12] & 0x80) ? B.s8[12] : A.s8[12];
    A.s8[13] = (Mask.s8[13] & 0x80) ? B.s8[13] : A.s8[13];
    A.s8[14] = (Mask.s8[14] & 0x80) ? B.s8[14] : A.s8[14];
    A.s8[15] = (Mask.s8[15] & 0x80) ? B.s8[15] : A.s8[15];
    return A.i;
}

/** \IMP{Reference,_mm_blendv_pd, SSE4.1} */
SSP_FORCEINLINE __m128d ssp_blendv_pd_REF       ( __m128d a, __m128d b, __m128d mask )
{
    ssp_m128 A, B, Mask;
    A.d = a;
    B.d = b;
    Mask.d = mask;

    A.f64[0] = (Mask.u64[0] & 0x8000000000000000ll) ? B.f64[0] : A.f64[0];
    A.f64[1] = (Mask.u64[1] & 0x8000000000000000ll) ? B.f64[1] : A.f64[1];
    return A.d;
}

/** \IMP{Reference,_mm_blendv_epi8, SSE4.1} */
SSP_FORCEINLINE __m128 ssp_blendv_ps_REF       ( __m128 a, __m128 b, __m128 mask )     
{
    ssp_m128 A, B, Mask;
    A.f = a;
    B.f = b;
    Mask.f = mask;

    A.f32[0] = (Mask.u32[0] & 0x80000000) ? B.f32[0] : A.f32[0];
    A.f32[1] = (Mask.u32[1] & 0x80000000) ? B.f32[1] : A.f32[1];
    A.f32[2] = (Mask.u32[2] & 0x80000000) ? B.f32[2] : A.f32[2];
    A.f32[3] = (Mask.u32[3] & 0x80000000) ? B.f32[3] : A.f32[3];
    return A.f;
}


//---------------------------------------
//Compare
//---------------------------------------
/** \IMP{Reference,_mm_cmpeq_epi64, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cmpeq_epi64_REF( __m128i a, __m128i b )                       
{
    ssp_m128 A, B;
    A.i = a;
    B.i = b;

    if( A.s64[0] == B.s64[0] )
        A.s64[0] = 0xFFFFFFFFFFFFFFFFll;
    else
        A.s64[0] = 0x0ll;

    if( A.s64[1] == B.s64[1] )
        A.s64[1] = 0xFFFFFFFFFFFFFFFFll;
    else
        A.s64[1] = 0x0ll;
    return A.i;
}

//---------------------------------------
// Dot Product
//---------------------------------------
/** \IMP{Reference,_mm_dp_pd, SSE4.1} */
SSP_FORCEINLINE __m128d ssp_dp_pd_REF( __m128d a, __m128d b, const int mask )             
{
    ssp_f64 tmp[3];
    ssp_m128 A, B;
    A.d = a;
    B.d = b;

    tmp[0] = (mask & 0x10) ? (A.f64[0] * B.f64[0]) : 0.0;
    tmp[1] = (mask & 0x20) ? (A.f64[1] * B.f64[1]) : 0.0;

    tmp[2] = tmp[0] + tmp[1];

    A.f64[0] = (mask & 0x1) ? tmp[2] : 0.0;
    A.f64[1] = (mask & 0x2) ? tmp[2] : 0.0;
    return A.d;
}

/** \IMP{Reference,_mm_dp_ps, SSE4.1} */
SSP_FORCEINLINE __m128 ssp_dp_ps_REF( __m128 a, __m128 b, const int mask )                
{
    ssp_f32 tmp[5];
    ssp_m128 A, B;
    A.f = a;
    B.f = b;

    tmp[0] = (mask & 0x10) ? (A.f32[0] * B.f32[0]) : 0.0f;
    tmp[1] = (mask & 0x20) ? (A.f32[1] * B.f32[1]) : 0.0f;
    tmp[2] = (mask & 0x40) ? (A.f32[2] * B.f32[2]) : 0.0f;
    tmp[3] = (mask & 0x80) ? (A.f32[3] * B.f32[3]) : 0.0f;

    tmp[4] = tmp[0] + tmp[1] + tmp[2] + tmp[3];

    A.f32[0] = (mask & 0x1) ? tmp[4] : 0.0f;
    A.f32[1] = (mask & 0x2) ? tmp[4] : 0.0f;
    A.f32[2] = (mask & 0x4) ? tmp[4] : 0.0f;
    A.f32[3] = (mask & 0x8) ? tmp[4] : 0.0f;
    return A.f;
}

/** \IMP{Reference,_mm_maddubs_epi16, SSSE3} */
SSP_FORCEINLINE __m128i ssp_maddubs_epi16_REF( __m128i a,  __m128i b)
{
    ssp_m128 A, B, C;
	int tmp[8];
    A.i = a;
    B.i = b;

	// a is 8 bit unsigned integer, b is signed integer
	tmp[0] = A.u8[0] * B.s8[0] +  A.u8[1] * B.s8[1];
	C.s16[0] = (ssp_s16)(SSP_SATURATION(tmp[0], 32767, -32768));

	tmp[1] = A.u8[2] * B.s8[2] +  A.u8[3] * B.s8[3];
	C.s16[1] = (ssp_s16)(SSP_SATURATION(tmp[1], 32767, -32768));

	tmp[2] = A.u8[4] * B.s8[4] +  A.u8[5] * B.s8[5];
	C.s16[2] = (ssp_s16)(SSP_SATURATION(tmp[2], 32767, -32768));

	tmp[3] = A.u8[6] * B.s8[6] +  A.u8[7] * B.s8[7];
	C.s16[3] = (ssp_s16)(SSP_SATURATION(tmp[3], 32767, -32768));

	tmp[4] = A.u8[8] * B.s8[8] +  A.u8[9] * B.s8[9];
	C.s16[4] = (ssp_s16)(SSP_SATURATION(tmp[4], 32767, -32768));

	tmp[5] = A.u8[10] * B.s8[10] +  A.u8[11] * B.s8[11];
	C.s16[5] = (ssp_s16)(SSP_SATURATION(tmp[5], 32767, -32768));

	tmp[6] = A.u8[12] * B.s8[12] +  A.u8[13] * B.s8[13];
	C.s16[6] = (ssp_s16)(SSP_SATURATION(tmp[6], 32767, -32768));

	tmp[7] = A.u8[14] * B.s8[14] +  A.u8[15] * B.s8[15];
	C.s16[7] = (ssp_s16)(SSP_SATURATION(tmp[7], 32767, -32768));

	return C.i;
}

/** \IMP{Reference,_mm_maddubs_pi16, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
 */
//__m64 _mm_maddubs_pi16( __m64 a,  __m64 b); [SSSE3]
SSP_FORCEINLINE __m64 ssp_maddubs_pi16_REF( __m64 a,  __m64 b)
{
    ssp_m64 A, B, C;
	int tmp[4];
    A.m64 = a;
    B.m64 = b;

	// a is 8 bit unsigned integer, b is signed integer
	tmp[0] = A.u8[0] * B.s8[0] +  A.u8[1] * B.s8[1];
	C.s16[0] = (ssp_s16)(SSP_SATURATION(tmp[0], 32767, -32768));

	tmp[1] = A.u8[2] * B.s8[2] +  A.u8[3] * B.s8[3];
	C.s16[1] = (ssp_s16)(SSP_SATURATION(tmp[1], 32767, -32768));

	tmp[2] = A.u8[4] * B.s8[4] +  A.u8[5] * B.s8[5];
	C.s16[2] = (ssp_s16)(SSP_SATURATION(tmp[2], 32767, -32768));

	tmp[3] = A.u8[6] * B.s8[6] +  A.u8[7] * B.s8[7];
	C.s16[3] = (ssp_s16)(SSP_SATURATION(tmp[3], 32767, -32768));

	return C.m64;
}

//__m128i _mm_mulhrs_epi16( __m128i a,  __m128i b);
/** \IMP{Reference,_mm_mulhrs_epi16, SSSE3} */
SSP_FORCEINLINE __m128i ssp_mulhrs_epi16_REF( __m128i a, __m128i b )
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

	A.s16[0] = (ssp_s16) ((A.s16[0] * B.s16[0] + 0x4000) >> 15);
	A.s16[1] = (ssp_s16) ((A.s16[1] * B.s16[1] + 0x4000) >> 15);
	A.s16[2] = (ssp_s16) ((A.s16[2] * B.s16[2] + 0x4000) >> 15);
	A.s16[3] = (ssp_s16) ((A.s16[3] * B.s16[3] + 0x4000) >> 15);
	A.s16[4] = (ssp_s16) ((A.s16[4] * B.s16[4] + 0x4000) >> 15);
	A.s16[5] = (ssp_s16) ((A.s16[5] * B.s16[5] + 0x4000) >> 15);
	A.s16[6] = (ssp_s16) ((A.s16[6] * B.s16[6] + 0x4000) >> 15);
	A.s16[7] = (ssp_s16) ((A.s16[7] * B.s16[7] + 0x4000) >> 15);

    return A.i;
}

//__m64 _mm_mulhrs_epi16( __m64 a,  __m64 b);
/** \IMP{Reference,_mm_mulhrs_pi16, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_mulhrs_pi16_REF( __m64 a, __m64 b )
{
    ssp_m64 A,B;
    A.m64 = a;
    B.m64 = b;

	A.s16[0] = (ssp_s16) ((A.s16[0] * B.s16[0] + 0x4000) >> 15);
	A.s16[1] = (ssp_s16) ((A.s16[1] * B.s16[1] + 0x4000) >> 15);
	A.s16[2] = (ssp_s16) ((A.s16[2] * B.s16[2] + 0x4000) >> 15);
	A.s16[3] = (ssp_s16) ((A.s16[3] * B.s16[3] + 0x4000) >> 15);

    return A.m64;
}

//---------------------------------------
//Extract
//---------------------------------------

// TODO PHS: Test the actual intrinsic to deterine what value is returned if he ndx/imm is a large number.
//           ie.  for _mm_extract_epi8, what is returned if ndx = 20 [since 20=0x14 > 0x0F]?
//           Repeat procedures for other extract functions.
/** \IMP{Reference,_mm_extract_epi8, SSE4.1} */
SSP_FORCEINLINE int ssp_extract_epi8_REF( __m128i a, const int ndx )                       
{
    ssp_m128 A;
    A.i = a;
    return (int)A.u8[ndx&0xF];
}

/** \IMP{Reference,_mm_extract_epi32, SSE4.1} */
SSP_FORCEINLINE int ssp_extract_epi32_REF( __m128i a, const int imm )                            
{
    ssp_m128 A;
    A.i = a;
    return (int)A.u32[imm&0x3];
}

/** \IMP{Reference,_mm_extract_epi64, SSE4.1} */
SSP_FORCEINLINE ssp_s64 ssp_extract_epi64_REF( __m128i a, const int ndx )                  
{
    ssp_m128 A;
    A.i = a;
    return A.s64[ndx & 0x1];
}

/** \IMP{Reference,_mm_extract_ps, SSE4.1} */
SSP_FORCEINLINE int ssp_extract_ps_REF( __m128 a, const int ndx )                          
{ 
    ssp_m128 A;
    A.f = a; 
    return A.s32[ndx&0x3];
}


/**  \IMP{Reference,_mm_extract_si64,SSE4a} 
\n  NOTE: The upper 64-bit of the destination register are undefined.
*/
SSP_FORCEINLINE __m128i ssp_extract_si64_REF( __m128i a ,__m128i b )        
{
    ssp_u32 len, ndx;
    ssp_s64 mask;
    ssp_m128 A, B;
    A.i = a;
    B.i = b;
    ndx = (ssp_u32)((B.u64[0] & 0x3F00) >> 8);    // Mask ndx field.
    len = (ssp_u32)((B.u64[0] & 0x003F));         // Mask len field.

    len = (len) ? len : 64;    
    if( (ndx+len) > 64 )               // If the sum of ndx and length is greater than 64, the results are undefined.
        return a;                      // If index = 0 and length = 0/64, extract all lower bits.
    mask = ~(-1 << len);
    A.u64[0] = A.u64[0] >> ndx;
    A.u64[0] = A.u64[0] & mask;
    return A.i;
}
/**  \IMP{Reference,_mm_extracti_si64,SSE4a}
\n  NOTE: The upper 64-bits of the destination register are undefined.
*/
SSP_FORCEINLINE __m128i ssp_extracti_si64_REF( __m128i a, int len, int ndx )   
{
    ssp_s64 mask;
    ssp_m128 A;
    A.i = a;
    ndx = ndx & 0x3F; // ndx % 64
    len = len & 0x3F; // len % 64

    len = (len) ? len : 64;    
    if( (ndx+len) > 64 )               // If the sum of ndx and length is greater than 64, the results are undefined.
        return a;                      // If index = 0 and length = 0/64, extract all lower bits.
    mask = ~(-1 << len);
    A.u64[0] = A.u64[0] >> ndx;
    A.u64[0] = A.u64[0] & mask;
    return A.i;
}



//---------------------------------------
// Horizontal Add
//---------------------------------------
/** \IMP{Reference,_mm_hadd_epi16, SSSE3} */
SSP_FORCEINLINE __m128i ssp_hadd_epi16_REF ( __m128i a, __m128i b )                       
{
    ssp_m128 A, B;
    A.i = a;
    B.i = b;

    A.s16[0] = A.s16[0] + A.s16[1];
    A.s16[1] = A.s16[2] + A.s16[3];
    A.s16[2] = A.s16[4] + A.s16[5];
    A.s16[3] = A.s16[6] + A.s16[7];
    A.s16[4] = B.s16[0] + B.s16[1];
    A.s16[5] = B.s16[2] + B.s16[3];
    A.s16[6] = B.s16[4] + B.s16[5];
    A.s16[7] = B.s16[6] + B.s16[7];
    return A.i;
}

/** \IMP{Reference,_mm_hadd_epi32, SSSE3} */
SSP_FORCEINLINE __m128i ssp_hadd_epi32_REF ( __m128i a, __m128i b )                        
{
    ssp_m128 A, B;
    A.i = a;
    B.i = b;

    A.s32[0] = A.s32[0] + A.s32[1];
    A.s32[1] = A.s32[2] + A.s32[3];
    A.s32[2] = B.s32[0] + B.s32[1];
    A.s32[3] = B.s32[2] + B.s32[3];

    return A.i;
}

/** \IMP{Reference,_mm_hadd_pi16, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_hadd_pi16_REF ( __m64 a, __m64 b )                        
{
    ssp_m64 A, B;
    A.m64 = a;
    B.m64 = b;

    A.s16[0] = A.s16[0] + A.s16[1];
    A.s16[1] = A.s16[2] + A.s16[3];
    A.s16[2] = B.s16[0] + B.s16[1];
    A.s16[3] = B.s16[2] + B.s16[3];

    return A.m64;
}

/** \IMP{Reference,_mm_add_pi32, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_hadd_pi32_REF ( __m64 a, __m64 b )                        
{
    ssp_m64 A, B;
    A.m64 = a;
    B.m64 = b;

    A.s32[0] = A.s32[0] + A.s32[1];
    A.s32[1] = B.s32[0] + B.s32[1];

    return A.m64;
}

/** \IMP{Reference,_mm_hadds_epi16, SSSE3} */
SSP_FORCEINLINE __m128i ssp_hadds_epi16_REF ( __m128i a, __m128i b )                         
{
    ssp_m128 A, B;
	int answer[8];
    A.i = a;
    B.i = b;

	answer[0] = A.s16[0] + A.s16[1];
    A.s16[0]  = (ssp_s16) (SSP_SATURATION(answer[0], 32767, -32768));
	answer[1] = A.s16[2] + A.s16[3];
    A.s16[1]  = (ssp_s16) (SSP_SATURATION(answer[1], 32767, -32768));
	answer[2] = A.s16[4] + A.s16[5];
    A.s16[2]  = (ssp_s16) (SSP_SATURATION(answer[2], 32767, -32768));
	answer[3] = A.s16[6] + A.s16[7];
    A.s16[3]  = (ssp_s16) (SSP_SATURATION(answer[3], 32767, -32768));
	answer[4] = B.s16[0] + B.s16[1];
    A.s16[4]  = (ssp_s16) (SSP_SATURATION(answer[4], 32767, -32768));
	answer[5] = B.s16[2] + B.s16[3];
    A.s16[5]  = (ssp_s16) (SSP_SATURATION(answer[5], 32767, -32768));
	answer[6] = B.s16[4] + B.s16[5];
    A.s16[6]  = (ssp_s16) (SSP_SATURATION(answer[6], 32767, -32768));
	answer[7] = B.s16[6] + B.s16[7];
    A.s16[7]  = (ssp_s16) (SSP_SATURATION(answer[7], 32767, -32768));

	return A.i;
}

/** \IMP{Reference,_mm_hadds_pi16, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_hadds_pi16_REF ( __m64 a, __m64 b )                         
{
    ssp_m64 A, B;
	int answer[4];
    A.m64 = a;
    B.m64 = b;

	answer[0] = A.s16[0] + A.s16[1];
    A.s16[0]  = (ssp_s16) (SSP_SATURATION(answer[0], 32767, -32768));
	answer[1] = A.s16[2] + A.s16[3];
    A.s16[1]  = (ssp_s16) (SSP_SATURATION(answer[1], 32767, -32768));
	answer[2] = B.s16[0] + B.s16[1];
    A.s16[2]  = (ssp_s16) (SSP_SATURATION(answer[2], 32767, -32768));
	answer[3] = B.s16[2] + B.s16[3];
    A.s16[3]  = (ssp_s16) (SSP_SATURATION(answer[3], 32767, -32768));

	return A.m64;
}

/** \IMP{Reference,_mm_hadd_ps, SSSE3} */
SSP_FORCEINLINE __m128 ssp_hadd_ps_REF(__m128 a, __m128 b)                                 
{
    ssp_m128 A, B;
    A.f = a;
    B.f = b;

    A.f32[0] = A.f32[0] + A.f32[1];
    A.f32[1] = A.f32[2] + A.f32[3];
    A.f32[2] = B.f32[0] + B.f32[1];
    A.f32[3] = B.f32[2] + B.f32[3];
    return A.f;
}

/** \IMP{Reference,_mm_hadd_pd, SSSE3} */
SSP_FORCEINLINE __m128d ssp_hadd_pd_REF(__m128d a, __m128d b)                               
{
    ssp_m128 A, B;
    A.d = a;
    B.d = b;

    A.f64[0] = A.f64[0] + A.f64[1];
    A.f64[1] = B.f64[0] + B.f64[1];
    return A.d;
}


//---------------------------------------
// Horizontal Subtract
//---------------------------------------
/** \IMP{Reference,_mm_hsub_epi16, SSSE3} */
SSP_FORCEINLINE __m128i ssp_hsub_epi16_REF ( __m128i a, __m128i b )                        
{
    ssp_m128 A, B;
    A.i = a;
    B.i = b;

    A.s16[0] = A.s16[0] - A.s16[1];
    A.s16[1] = A.s16[2] - A.s16[3];
    A.s16[2] = A.s16[4] - A.s16[5];
    A.s16[3] = A.s16[6] - A.s16[7];
    A.s16[4] = B.s16[0] - B.s16[1];
    A.s16[5] = B.s16[2] - B.s16[3];
    A.s16[6] = B.s16[4] - B.s16[5];
    A.s16[7] = B.s16[6] - B.s16[7];

	return A.i;
}

/** \IMP{Reference,_mm_hsub_epi32, SSSE3} */
SSP_FORCEINLINE __m128i ssp_hsub_epi32_REF ( __m128i a, __m128i b )                        
{
    ssp_m128 A, B;
    A.i = a;
    B.i = b;

    A.s32[0] = A.s32[0] - A.s32[1];
    A.s32[1] = A.s32[2] - A.s32[3];
    A.s32[2] = B.s32[0] - B.s32[1];
    A.s32[3] = B.s32[2] - B.s32[3];

    return A.i;
}

/** \IMP{Reference,_mm_hsub_pi16, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_hsub_pi16_REF ( __m64 a, __m64 b )                         
{
    ssp_m64 A, B;
    A.m64 = a;
    B.m64 = b;

    A.s16[0] = A.s16[0] - A.s16[1];
    A.s16[1] = A.s16[2] - A.s16[3];
    A.s16[2] = B.s16[0] - B.s16[1];
    A.s16[3] = B.s16[2] - B.s16[3];

	return A.m64;
}

/** \IMP{Reference,_mm_hsub_pi32, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_hsub_pi32_REF ( __m64 a, __m64 b )                         
{
    ssp_m64 A, B;
    A.m64 = a;
    B.m64 = b;

    A.s32[0] = A.s32[0] - A.s32[1];
    A.s32[1] = B.s32[0] - B.s32[1];

    return A.m64;
}

/** \IMP{Reference,_mm_hsubs_epi16, SSSE3} */
SSP_FORCEINLINE __m128i ssp_hsubs_epi16_REF ( __m128i a, __m128i b )                 
{
    ssp_m128 A, B;
	int answer[8];
    A.i = a;
    B.i = b;

	answer[0] = A.s16[0] - A.s16[1];
    A.s16[0]  = (ssp_s16) (SSP_SATURATION(answer[0], 32767, -32768));
	answer[1] = A.s16[2] - A.s16[3];
    A.s16[1]  = (ssp_s16) (SSP_SATURATION(answer[1], 32767, -32768));
	answer[2] = A.s16[4] - A.s16[5];
    A.s16[2]  = (ssp_s16) (SSP_SATURATION(answer[2], 32767, -32768));
	answer[3] = A.s16[6] - A.s16[7];
    A.s16[3]  = (ssp_s16) (SSP_SATURATION(answer[3], 32767, -32768));
	answer[4] = B.s16[0] - B.s16[1];
    A.s16[4]  = (ssp_s16) (SSP_SATURATION(answer[4], 32767, -32768));
	answer[5] = B.s16[2] - B.s16[3];
    A.s16[5]  = (ssp_s16) (SSP_SATURATION(answer[5], 32767, -32768));
	answer[6] = B.s16[4] - B.s16[5];
    A.s16[6]  = (ssp_s16) (SSP_SATURATION(answer[6], 32767, -32768));
	answer[7] = B.s16[6] - B.s16[7];
    A.s16[7]  = (ssp_s16) (SSP_SATURATION(answer[7], 32767, -32768));

	return A.i;
}

/** \IMP{Reference,_mm_hsubs_pi16, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_hsubs_pi16_REF ( __m64 a, __m64 b )                        
{
    ssp_m64 A, B;
	int answer[4];
    A.m64 = a;
    B.m64 = b;

	answer[0] = A.s16[0] - A.s16[1];
    A.s16[0]  = (ssp_s16) (SSP_SATURATION(answer[0], 32767, -32768));
	answer[1] = A.s16[2] - A.s16[3];
    A.s16[1]  = (ssp_s16) (SSP_SATURATION(answer[1], 32767, -32768));
	answer[2] = B.s16[0] - B.s16[1];
    A.s16[2]  = (ssp_s16) (SSP_SATURATION(answer[2], 32767, -32768));
	answer[3] = B.s16[2] - B.s16[3];
    A.s16[3]  = (ssp_s16) (SSP_SATURATION(answer[3], 32767, -32768));

	return A.m64;
}

/** \IMP{Reference,_mm_hsub_ps, SSSE3} */
SSP_FORCEINLINE __m128 ssp_hsub_ps_REF(__m128 a, __m128 b)                           
{
    ssp_m128 A, B;
    A.f = a;
    B.f = b;

    A.f32[0] = A.f32[0] - A.f32[1];
    A.f32[1] = A.f32[2] - A.f32[3];
    A.f32[2] = B.f32[0] - B.f32[1];
    A.f32[3] = B.f32[2] - B.f32[3];
    return A.f;
}

/** \IMP{Reference,_mm_hsub_pd, SSSE3} */
SSP_FORCEINLINE __m128d ssp_hsub_pd_REF(__m128d a, __m128d b)                        
{
    ssp_m128 A, B;
    A.d = a;
    B.d = b;

    A.f64[0] = A.f64[0] - A.f64[1];
    A.f64[1] = B.f64[0] - B.f64[1];
    return A.d;
}

//---------------------------------------
//Insert
//---------------------------------------
/** \IMP{Reference,_mm_insert_epi8, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_insert_epi8_REF( __m128i a, int b, const int ndx )       // Verify behavior on Intel Hardware
{
    ssp_m128 A;
    A.i = a;

    A.s8[ndx & 0xF] = (ssp_s8)b;
    return A.i;
}

/** \IMP{Reference,_mm_insert_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_insert_epi32_REF( __m128i a, int b, const int ndx )      // Verify behavior on Intel Hardware
{
    ssp_m128 A;
    A.i = a;

    A.s32[ndx & 0x3] = b;
    return A.i;
}

/** \IMP{Reference,_mm_insert_epi64, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_insert_epi64_REF( __m128i a, ssp_s64 b, const int ndx )  // Verify behavior on Intel Hardware
{
    ssp_m128 A;
    A.i = a;

    A.s64[ndx & 0x1] = b;
    return A.i;
}

/** \IMP{Reference,_mm_insert_ps, SSE4.1} */
SSP_FORCEINLINE __m128 ssp_insert_ps_REF( __m128 a, __m128 b, const int sel )          // Verify behavior on Intel Hardware
{
    ssp_f32 tmp;
    int count_d,zmask;

    ssp_m128 A,B;
    A.f = a;
    B.f = b;

    tmp     = B.f32[(sel & 0xC0)>>6];   // 0xC0 = sel[7:6]
    count_d = (sel & 0x30)>>4;          // 0x30 = sel[5:4]
    zmask   = sel & 0x0F;               // 0x0F = sel[3:0]

    A.f32[count_d] = tmp;

    A.f32[0] = (zmask & 0x1) ? 0 : A.f32[0];
    A.f32[1] = (zmask & 0x2) ? 0 : A.f32[1];
    A.f32[2] = (zmask & 0x4) ? 0 : A.f32[2];
    A.f32[3] = (zmask & 0x8) ? 0 : A.f32[3];
    return A.f;
}

/** \IMP{Reference,_mm_insert_si64, SSE4a} */
SSP_FORCEINLINE __m128i ssp_insert_si64_REF( __m128i a, __m128i b )
{
    ssp_u32  ndx, len;
    ssp_s64  mask;
    ssp_m128 A, B;
    B.i = b;
    ndx = (ssp_u32)((B.u64[1] & 0x3F00) >> 8);    // Mask length field.
    len = (ssp_u32)((B.u64[1] & 0x003F));         // Mask ndx field.

    if( ( (ndx + len) > 64 ) ||
        ( (len == 0) && (ndx > 0) ) )
        return a;

    A.i = a;
    if( (len == 0 ) && (ndx == 0) )
    {
        A.u64[0] = B.u64[0];
        return A.i;
    }

    len = (len) ? len : 64;         // A value of zero for field length is interpreted as 64.
    mask = ~(-1 << len);
    B.u64[0]  = B.u64[0] & mask;
    B.u64[0]  = B.u64[0] << ndx;
    mask      = ~(mask << ndx);
    A.u64[0]  = A.u64[0] & mask;
    A.u64[0] |= B.u64[0];
    return A.i;
}

/** \IMP{Reference,_mm_inserti_si64, SSE4a} */
SSP_FORCEINLINE __m128i ssp_inserti_si64_REF( __m128i a, __m128i b, int len, int ndx )
{
    ssp_s64 mask;
    ssp_m128 A, B;
    A.i = a;
    ndx = ndx & 0x3F; // ndx % 64
    len = len & 0x3F; // len % 64

    if( ( (ndx + len) > 64 ) ||
        ( (len == 0) && (ndx > 0) ) )
        return a;

    B.i = b;
    if( (len == 0 ) && (ndx == 0) )
    {
        A.u64[0] = B.u64[0];
        return A.i;
    }

    len = (len) ? len : 64;         // A value of zero for field length is interpreted as 64.
    mask = ~(-1 << len);
    B.u64[0]  = B.u64[0] & mask;
    B.u64[0]  = B.u64[0] << ndx;
    mask      = ~(mask << ndx);
    A.u64[0]  = A.u64[0] & mask;
    A.u64[0] |= B.u64[0];
    return A.i;
}



//---------------------------------------
// Load
//---------------------------------------
/** \IMP{Reference,_mm_loaddup_pd, SSE3} */
SSP_FORCEINLINE __m128d ssp_loaddup_pd_REF(double const * dp)                               
{
    ssp_m128 a;
    a.f64[0] = *dp;
    a.f64[1] = *dp;
    return a.d;
}

/** \IMP{Reference,_mm_lddqu_si128, SSE3} */
SSP_FORCEINLINE __m128i ssp_lddqu_si128_REF(__m128i const *p)                               
{
    return *p;
}

/** \IMP{Reference,_mm_stream_load_si128, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_stream_load_si128_REF( __m128i *p )                             
{
    return *p;
}


//---------------------------------------
// Min / Max
//---------------------------------------

#define SSP_SET_MIN( sd, s) sd=(sd<s)?sd:s;
#define SSP_SET_MAX( sd, s) sd=(sd>s)?sd:s;

//8 bit min/max
/** \IMP{Reference,_mm_min_epi8, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_min_epi8_REF( __m128i a, __m128i b )
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    SSP_SET_MIN( A.s8[ 0], B.s8[ 0] );
    SSP_SET_MIN( A.s8[ 1], B.s8[ 1] );
    SSP_SET_MIN( A.s8[ 2], B.s8[ 2] );
    SSP_SET_MIN( A.s8[ 3], B.s8[ 3] );
    SSP_SET_MIN( A.s8[ 4], B.s8[ 4] );
    SSP_SET_MIN( A.s8[ 5], B.s8[ 5] );
    SSP_SET_MIN( A.s8[ 6], B.s8[ 6] );
    SSP_SET_MIN( A.s8[ 7], B.s8[ 7] );
    SSP_SET_MIN( A.s8[ 8], B.s8[ 8] );
    SSP_SET_MIN( A.s8[ 9], B.s8[ 9] );
    SSP_SET_MIN( A.s8[10], B.s8[10] );
    SSP_SET_MIN( A.s8[11], B.s8[11] );
    SSP_SET_MIN( A.s8[12], B.s8[12] );
    SSP_SET_MIN( A.s8[13], B.s8[13] );
    SSP_SET_MIN( A.s8[14], B.s8[14] );
    SSP_SET_MIN( A.s8[15], B.s8[15] );
    return A.i;
}

/** \IMP{Reference,_mm_max_epi8, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_max_epi8_REF( __m128i a, __m128i b )
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    SSP_SET_MAX( A.s8[ 0], B.s8[ 0] );
    SSP_SET_MAX( A.s8[ 1], B.s8[ 1] );
    SSP_SET_MAX( A.s8[ 2], B.s8[ 2] );
    SSP_SET_MAX( A.s8[ 3], B.s8[ 3] );
    SSP_SET_MAX( A.s8[ 4], B.s8[ 4] );
    SSP_SET_MAX( A.s8[ 5], B.s8[ 5] );
    SSP_SET_MAX( A.s8[ 6], B.s8[ 6] );
    SSP_SET_MAX( A.s8[ 7], B.s8[ 7] );
    SSP_SET_MAX( A.s8[ 8], B.s8[ 8] );
    SSP_SET_MAX( A.s8[ 9], B.s8[ 9] );
    SSP_SET_MAX( A.s8[10], B.s8[10] );
    SSP_SET_MAX( A.s8[11], B.s8[11] );
    SSP_SET_MAX( A.s8[12], B.s8[12] );
    SSP_SET_MAX( A.s8[13], B.s8[13] );
    SSP_SET_MAX( A.s8[14], B.s8[14] );
    SSP_SET_MAX( A.s8[15], B.s8[15] );
    return A.i;
}

//16 bit min/max
/** \IMP{Reference,_mm_min_epu16, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_min_epu16_REF ( __m128i a, __m128i b )
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    SSP_SET_MIN( A.u16[ 0], B.u16[ 0] );
    SSP_SET_MIN( A.u16[ 1], B.u16[ 1] );
    SSP_SET_MIN( A.u16[ 2], B.u16[ 2] );
    SSP_SET_MIN( A.u16[ 3], B.u16[ 3] );
    SSP_SET_MIN( A.u16[ 4], B.u16[ 4] );
    SSP_SET_MIN( A.u16[ 5], B.u16[ 5] );
    SSP_SET_MIN( A.u16[ 6], B.u16[ 6] );
    SSP_SET_MIN( A.u16[ 7], B.u16[ 7] );
    return A.i;
}

/** \IMP{Reference,_mm_max_epu16, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_max_epu16_REF ( __m128i a, __m128i b )
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    SSP_SET_MAX( A.u16[ 0], B.u16[ 0] );
    SSP_SET_MAX( A.u16[ 1], B.u16[ 1] );
    SSP_SET_MAX( A.u16[ 2], B.u16[ 2] );
    SSP_SET_MAX( A.u16[ 3], B.u16[ 3] );
    SSP_SET_MAX( A.u16[ 4], B.u16[ 4] );
    SSP_SET_MAX( A.u16[ 5], B.u16[ 5] );
    SSP_SET_MAX( A.u16[ 6], B.u16[ 6] );
    SSP_SET_MAX( A.u16[ 7], B.u16[ 7] );
    return A.i;
}

//32 bit min/max
/** \IMP{Reference,_mm_min_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_min_epi32_REF( __m128i a, __m128i b )                     
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    SSP_SET_MIN( A.s32[ 0], B.s32[ 0] );
    SSP_SET_MIN( A.s32[ 1], B.s32[ 1] );
    SSP_SET_MIN( A.s32[ 2], B.s32[ 2] );
    SSP_SET_MIN( A.s32[ 3], B.s32[ 3] );
    return A.i;
}

/** \IMP{Reference,_mm_max_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_max_epi32_REF( __m128i a, __m128i b )                     
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    SSP_SET_MAX( A.s32[ 0], B.s32[ 0] );
    SSP_SET_MAX( A.s32[ 1], B.s32[ 1] );
    SSP_SET_MAX( A.s32[ 2], B.s32[ 2] );
    SSP_SET_MAX( A.s32[ 3], B.s32[ 3] );
    return A.i;
}

/** \IMP{Reference,_mm_min_epu32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_min_epu32_REF ( __m128i a, __m128i b )                    
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    SSP_SET_MIN( A.u32[ 0], B.u32[ 0] );
    SSP_SET_MIN( A.u32[ 1], B.u32[ 1] );
    SSP_SET_MIN( A.u32[ 2], B.u32[ 2] );
    SSP_SET_MIN( A.u32[ 3], B.u32[ 3] );
    return A.i;
}

/** \IMP{Reference,_mm_max_epu32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_max_epu32_REF ( __m128i a, __m128i b )                    
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    SSP_SET_MAX( A.u32[ 0], B.u32[ 0] );
    SSP_SET_MAX( A.u32[ 1], B.u32[ 1] );
    SSP_SET_MAX( A.u32[ 2], B.u32[ 2] );
    SSP_SET_MAX( A.u32[ 3], B.u32[ 3] );
    return A.i;
}

#undef SSP_SET_MIN
#undef SSP_SET_MAX

/** \IMP{Reference,_mm_minpos_epu16, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_minpos_epu16_REF( __m128i shortValues )                   
{
    ssp_m128 ShortValues;
    ShortValues.i = shortValues;

    if( ShortValues.u16[1] < ShortValues.u16[0] )
    {
        ShortValues.u16[0] = ShortValues.u16[1];
        ShortValues.u16[1] = 1;
    }
    else
        ShortValues.u16[1] = 0;


#define FN( I )                                     \
    if( ShortValues.u16[I] < ShortValues.u16[0] )   \
    {                                               \
        ShortValues.u16[0] = ShortValues.u16[I];    \
        ShortValues.u16[1] = I;                     \
    }

    FN( 2 );
    FN( 3 );
    FN( 4 );
    FN( 5 );
    FN( 6 );
    FN( 7 );

    ShortValues.u32[1] = 0;
    ShortValues.u64[1] = 0;

#undef FN

    return ShortValues.i;
}

/** \IMP{Reference,_mm_minpos_epu16, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_minpos_epu16_REFb( __m128i shortValues )                   
{
    ssp_m128 ShortValues;
    ssp_u32 i;
    ssp_u16 pos = 0;
    ssp_u16 minVal;
    ShortValues.i = shortValues;
    minVal = ShortValues.u16[0];

    for( i=1; i<8; ++i )
    {
        if( ShortValues.u16[i] < minVal )
        {
            minVal = ShortValues.u16[i];
            pos    = i;
        }

        ShortValues.u16[i] = 0;
    }

    ShortValues.u16[0] = minVal;
    ShortValues.u16[1] = pos;
    return ShortValues.i;
}


//---------------------------------------
// Move
//---------------------------------------
/** \IMP{Reference,_mm_movehdup_ps, SSE3} */
SSP_FORCEINLINE __m128 ssp_movehdup_ps_REF(__m128 a)                                   
{
    ssp_m128 A;
    A.f = a;

    A.f32[0] = A.f32[1];
    A.f32[2] = A.f32[3];
    return A.f;
}

/** \IMP{Reference,_mm_moveldup_ps, SSE3} */
SSP_FORCEINLINE __m128 ssp_moveldup_ps_REF(__m128 a)                                   
{
    ssp_m128 A;
    A.f = a;

    A.f32[1] = A.f32[0];
    A.f32[3] = A.f32[2];
    return A.f;
}

/** \IMP{Reference,_mm_movedup_pd, SSE3} */
SSP_FORCEINLINE __m128d ssp_movedup_pd_REF(__m128d a)                                  
{
    ssp_m128 A;
    A.d = a;

    A.f64[1] = A.f64[0];
    return A.d;
}

//---------------------------------------
// Multiply
//---------------------------------------
/** \IMP{Reference,_mm_mul_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_mul_epi32_REF( __m128i a, __m128i b )                      
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.s64[0] = A.s32[0] * B.s32[0];
    A.s64[1] = A.s32[2] * B.s32[2];
    return A.i;
}

/** \IMP{Reference,_mm_mullo_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_mullo_epi32_REF( __m128i a, __m128i b )                    
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    A.s32[0] = A.s32[0] + B.s32[0];
    A.s32[1] = A.s32[1] + B.s32[1];
    A.s32[2] = A.s32[2] + B.s32[2];
    A.s32[3] = A.s32[3] + B.s32[3];
    return A.i;
}

/** \IMP{Reference,_mm_mpsadbw_epu8, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_mpsadbw_epu8_REF ( __m128i a,   __m128i b,   const int msk  ) 
{
	ssp_u8 Abyte[11], Bbyte[4], tmp[4];
	ssp_u8 Boffset, Aoffset;
	int i;

    ssp_m128 A,B;
    A.i = a;
    B.i = b;

	Boffset = (msk & 0x3) << 2; // *32/8,   for byte size count
	Aoffset = (msk & 0x4);      // *32/8/4, for byte size count and shift msk to bit 2

	for (i=0; i<11; i++)
	{
		Abyte[i] = A.u8[i+Aoffset];
	}
	
	Bbyte[0] = B.u8[Boffset  ];
	Bbyte[1] = B.u8[Boffset+1];
	Bbyte[2] = B.u8[Boffset+2];
	Bbyte[3] = B.u8[Boffset+3];

	for (i=0; i<8; i++)
	{
		tmp[0] = (Abyte[i  ] > Bbyte[0]) ? (Abyte[i  ] - Bbyte[0]) :  (Bbyte[0] - Abyte[i  ]);        //abs diff
		tmp[1] = (Abyte[i+1] > Bbyte[1]) ? (Abyte[i+1] - Bbyte[1]) :  (Bbyte[1] - Abyte[i+1]);
		tmp[2] = (Abyte[i+2] > Bbyte[2]) ? (Abyte[i+2] - Bbyte[2]) :  (Bbyte[2] - Abyte[i+2]);
		tmp[3] = (Abyte[i+3] > Bbyte[3]) ? (Abyte[i+3] - Bbyte[3]) :  (Bbyte[3] - Abyte[i+3]);

		A.u16[i] = tmp[0] + tmp[1] + tmp[2] + tmp[3];
	}

	return A.i;
}

//---------------------------------------
// Pack
//---------------------------------------
/** \IMP{Reference,_mm_packus_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_packus_epi32_REF( __m128i a, __m128i b )                       
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    if( A.s32[0] < 0 )
        A.u16[0] = 0;
    else
        if( A.s32[0] > 0xFFFF )
            A.u16[0] = 0xFFFF;
        else
            A.s16[0] = (ssp_u16)A.s32[0];

    if( A.s32[1] < 0 )
        A.u16[1] = 0;
    else
        if( A.s32[1] > 0xFFFF )
            A.u16[1] = 0xFFFF;
        else
            A.s16[1] = (ssp_u16)A.s32[1];

    if( A.s32[2] < 0 )
        A.u16[2] = 0;
    else
        if( A.s32[2] > 0xFFFF )
            A.u16[2] = 0xFFFF;
        else
            A.s16[2] = (ssp_u16)A.s32[2];


    if( A.s32[3] < 0 )
        A.u16[3] = 0;
    else
        if( A.s32[3] > 0xFFFF )
            A.u16[3] = 0xFFFF;
        else
            A.s16[3] = (ssp_u16)A.s32[3];

    if( B.s32[0] < 0 )
        A.u16[4] = 0;
    else
        if( B.s32[0] > 0xFFFF )
            A.u16[4] = 0xFFFF;
        else
            A.s16[4] = (ssp_u16)B.s32[0];

    if( B.s32[1] < 0 )
        A.u16[5] = 0;
    else
        if( B.s32[1] > 0xFFFF )
            A.u16[5] = 0xFFFF;
        else
            A.s16[5] = (ssp_u16)B.s32[1];

    if( B.s32[2] < 0 )
        A.u16[6] = 0;
    else
        if( B.s32[2] > 0xFFFF )
            A.u16[6] = 0xFFFF;
        else
            A.s16[6] = (ssp_u16)B.s32[2];


    if( B.s32[3] < 0 )
        A.u16[7] = 0;
    else
        if( B.s32[3] > 0xFFFF )
            A.u16[7] = 0xFFFF;
        else
            A.s16[7] = (ssp_u16)B.s32[3];

    return A.i;
}


//---------------------------------------
// Round
//---------------------------------------
/** \IMP{Reference,_mm_ceil_pd, SSE4.1} */
SSP_FORCEINLINE __m128d ssp_ceil_pd_REF( __m128d a )                                        
{
    ssp_m128 A;
    A.d = a;    

    A.f64[0] = ceil( A.f64[0] );
    A.f64[1] = ceil( A.f64[1] );
    return A.d;
}

/** \IMP{Reference,_mm_ceil_ps, SSE4.1} */
SSP_FORCEINLINE __m128 ssp_ceil_ps_REF( __m128 a )                                          
{
    ssp_m128 A;
    A.f = a;

    A.f32[0] = (ssp_f32)ceil( A.f32[0] );
    A.f32[1] = (ssp_f32)ceil( A.f32[1] );
    A.f32[2] = (ssp_f32)ceil( A.f32[2] );
    A.f32[3] = (ssp_f32)ceil( A.f32[3] );
    return A.f;
}

/** \IMP{Reference,_mm_ceil_sd, SSE4.1} */
SSP_FORCEINLINE __m128d ssp_ceil_sd_REF( __m128d a, __m128d b)                              
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;

    A.f64[0] = ceil( B.f64[0] );
    return A.d;
}

/** \IMP{Reference,_mm_ceil_ss, SSE4.1} */
SSP_FORCEINLINE __m128 ssp_ceil_ss_REF( __m128 a, __m128 b)                               
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;

    A.f32[0] = (ssp_f32)ceil( B.f32[0] );
    return A.f;
}

/** \IMP{Reference,_mm_floor_pd, SSE4.1} */
SSP_FORCEINLINE __m128d ssp_floor_pd_REF( __m128d a )                                       
{
    ssp_m128 A;
    A.d = a;

    A.f64[0] = floor( A.f64[0] );
    A.f64[1] = floor( A.f64[1] );
    return A.d;
}

/** \IMP{Reference,_mm_floor_ps, SSE4.1} */
SSP_FORCEINLINE __m128 ssp_floor_ps_REF( __m128 a )                                         
{
    ssp_m128 A;
    A.f = a;

    A.f32[0] = (float)floor( A.f32[0] );
    A.f32[1] = (float)floor( A.f32[1] );
    A.f32[2] = (float)floor( A.f32[2] );
    A.f32[3] = (float)floor( A.f32[3] );
    return A.f;
}

/** \IMP{Reference,_mm_floor_sd, SSE4.1} */
SSP_FORCEINLINE __m128d ssp_floor_sd_REF( __m128d a, __m128d b )                            
{
    ssp_m128 A,B;
    A.d = a;
    B.d = b;

    A.f64[0] = floor( B.f64[0] );
    return A.d;
}

/** \IMP{Reference,_mm_floor_ss, SSE4.1} */
SSP_FORCEINLINE __m128 ssp_floor_ss_REF( __m128 a, __m128 b )                            
{
    ssp_m128 A,B;
    A.f = a;
    B.f = b;

    A.f32[0] = (float)floor( B.f32[0] );
    return A.f;
}

/** \IMP{Reference,_mm_round_pd, SSE4.1 and SSE5} */
SSP_FORCEINLINE __m128d ssp_round_pd_REF( __m128d val, int iRoundMode )                     
{
    ssp_s64 *valPtr;
    ssp_m128 Val;
    Val.d = val;

    switch( iRoundMode & 0x3 )
    {
    case SSP_FROUND_CUR_DIRECTION:
        break;
    case SSP_FROUND_TO_ZERO:
        valPtr = (ssp_s64*)(&Val.f64[0]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[0] = (ssp_f64)( (ssp_s64)Val.f64[0] );

        valPtr = (ssp_s64*)(&Val.f64[1]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[1] = (ssp_f64)( (ssp_s64)Val.f64[1] );
        break;
    case SSP_FROUND_TO_POS_INF:
        valPtr = (ssp_s64*)(&Val.f64[0]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[0] = ceil( Val.f64[0] );

        valPtr = (ssp_s64*)(&Val.f64[1]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[1] = ceil( Val.f64[1] );
        break;
    case SSP_FROUND_TO_NEG_INF:
        valPtr = (ssp_s64*)(&Val.f64[0]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[0] = floor( Val.f64[0] );

        valPtr = (ssp_s64*)(&Val.f64[1]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[1] = floor( Val.f64[1] );
        break;
    default: // SSP_FROUND_TO_NEAREST_INT
        valPtr = (ssp_s64*)(&Val.f64[0]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[0] = (ssp_f64)( (Val.f64[0]>0) ? (ssp_s64)(Val.f64[0]+0.5) : (ssp_s64)(Val.f64[0]-0.5) );
        else
            Val.f64[0] = ssp_number_changeSNanToQNaN_F64_REF( valPtr );

        valPtr = (ssp_s64*)(&Val.f64[1]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[1] = (ssp_f64)( (Val.f64[1]>0) ? (ssp_s64)(Val.f64[1]+0.5) : (ssp_s64)(Val.f64[1]-0.5) );
        else
            Val.f64[1] = ssp_number_changeSNanToQNaN_F64_REF( valPtr );
    }
    return Val.d;
}

/** \IMP{Reference,_mm_round_ps, SSE4.1 and SSE5} */
SSP_FORCEINLINE __m128 ssp_round_ps_REF( __m128 val, int iRoundMode )                     
{
    ssp_s32 *valPtr;
    ssp_m128 Val;
    Val.f = val;

    switch( iRoundMode & 0x3 )
    {
    case SSP_FROUND_CUR_DIRECTION:
        break;
    case SSP_FROUND_TO_ZERO:
        valPtr = (ssp_s32*)(&Val.f32[0]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
        {
            if( Val.f32[0] >= 0 )
                Val.f32[0] = (ssp_f32)( (ssp_s32)Val.f32[0] );
            else
            {
                Val.f32[0] = (ssp_f32)( (ssp_s32)Val.f32[0] );
                //Val.s32[0] = Val.s32[0] | 0x80000000;
            }
        }

        valPtr = (ssp_s32*)(&Val.f32[1]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
        {
            if( Val.f32[1] >= 0 )
                Val.f32[1] = (ssp_f32)( (ssp_s32)Val.f32[1] );
            else
            {
                Val.f32[1] = (ssp_f32)( (ssp_s32)Val.f32[1] );
                //Val.s32[1] = Val.s32[1] | 0x80000000;
            }
        }

        valPtr = (ssp_s32*)(&Val.f32[2]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
        {
            if( Val.f32[2] >= 0 )
                Val.f32[2] = (ssp_f32)( (ssp_s32)Val.f32[2] );
            else
            {
                Val.f32[2] = (ssp_f32)( (ssp_s32)Val.f32[2] );
                //Val.s32[2] = Val.s32[2] | 0x80000000;
            }
        }

        valPtr = (ssp_s32*)(&Val.f32[3]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
        {
            if( Val.f32[3] >= 0 )
                Val.f32[3] = (ssp_f32)( (ssp_s32)Val.f32[3] );
            else
            {
                Val.f32[3] = (ssp_f32)( (ssp_s32)Val.f32[3] );
                //Val.s32[3] = Val.s32[3] | 0x80000000;
            }
        }
        break;
    case SSP_FROUND_TO_POS_INF:
        valPtr = (ssp_s32*)(&Val.f32[0]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[0] = (ssp_f32)ceil( Val.f32[0] );

        valPtr = (ssp_s32*)(&Val.f32[1]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[1] = (ssp_f32)ceil( Val.f32[1] );

        valPtr = (ssp_s32*)(&Val.f32[2]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[2] = (ssp_f32)ceil( Val.f32[2] );

        valPtr = (ssp_s32*)(&Val.f32[3]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[3] = (ssp_f32)ceil( Val.f32[3] );
        break;
    case SSP_FROUND_TO_NEG_INF:
        valPtr = (ssp_s32*)(&Val.f32[0]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[0] = (ssp_f32)floor( Val.f32[0] );

        valPtr = (ssp_s32*)(&Val.f32[1]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[1] = (ssp_f32)floor( Val.f32[1] );

        valPtr = (ssp_s32*)(&Val.f32[2]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[2] = (ssp_f32)floor( Val.f32[2] );

        valPtr = (ssp_s32*)(&Val.f32[3]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[3] = (ssp_f32)floor( Val.f32[3] );
        break;
    default: // SSP_FROUND_TO_NEAREST_INT
        valPtr = (ssp_s32*)(&Val.f32[0]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[0] = (ssp_f32)( (Val.f32[0]>0) ? (ssp_s32)(Val.f32[0]+0.5) : (ssp_s32)(Val.f32[0]-0.5) );
        else
            Val.f32[0] = ssp_number_changeSNanToQNaN_F32_REF( valPtr );

        valPtr = (ssp_s32*)(&Val.f32[1]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[1] = (ssp_f32)( (Val.f32[1]>0) ? (ssp_s32)(Val.f32[1]+0.5) : (ssp_s32)(Val.f32[1]-0.5) );
        else
            Val.f32[1] = ssp_number_changeSNanToQNaN_F32_REF( valPtr );

        valPtr = (ssp_s32*)(&Val.f32[2]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[2] = (ssp_f32)( (Val.f32[2]>0) ? (ssp_s32)(Val.f32[2]+0.5) : (ssp_s32)(Val.f32[2]-0.5) );
        else
            Val.f32[2] = ssp_number_changeSNanToQNaN_F32_REF( valPtr );

        valPtr = (ssp_s32*)(&Val.f32[3]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Val.f32[3] = (ssp_f32)( (Val.f32[3]>0) ? (ssp_s32)(Val.f32[3]+0.5) : (ssp_s32)(Val.f32[3]-0.5) );
        else
            Val.f32[3] = ssp_number_changeSNanToQNaN_F32_REF( valPtr );
    }

    if( -0.0f == Val.f32[0] ) Val.f32[0]=+0.0f;
    if( -0.0f == Val.f32[1] ) Val.f32[1]=+0.0f;
    if( -0.0f == Val.f32[2] ) Val.f32[2]=+0.0f;
    if( -0.0f == Val.f32[3] ) Val.f32[3]=+0.0f;

    return Val.f;
}

/** \IMP{Reference,_mm_round_sd, SSE4.1 and SSE5} */
SSP_FORCEINLINE __m128d ssp_round_sd_REF( __m128d dst, __m128d val, int iRoundMode )        
{
    ssp_s64 *valPtr;
    ssp_m128 Dst, Val;
    Dst.d = dst;
    Val.d = val;

    switch( iRoundMode & 0x3 )
    {
    case SSP_FROUND_CUR_DIRECTION:
        break;
    case SSP_FROUND_TO_ZERO:
        valPtr = (ssp_s64*)(&Val.f64[0]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Dst.f64[0] = (ssp_f64)( (ssp_s64)Val.f64[0] );
        break;
    case SSP_FROUND_TO_POS_INF:
        valPtr = (ssp_s64*)(&Val.f64[0]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[0] = ceil( Val.f64[0] );
        break;
    case SSP_FROUND_TO_NEG_INF:
        valPtr = (ssp_s64*)(&Val.f64[0]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[0] = floor( Val.f64[0] );
        break;
    default: // SSP_FROUND_TO_NEAREST_INT
        valPtr = (ssp_s64*)(&Val.f64[0]);
        if( ssp_number_isValidNumber_F64_REF( valPtr ) )
            Val.f64[0] = (ssp_f64)( (Val.f64[0]>0) ? (ssp_s64)(Val.f64[0]+0.5) : (ssp_s64)(Val.f64[0]-0.5) );
        else
            Val.f64[0] = ssp_number_changeSNanToQNaN_F64_REF( valPtr );
    }
    return Dst.d;
}

/** \IMP{Reference,_mm_round_ss, SSE4.1 and SSE5} */
SSP_FORCEINLINE __m128 ssp_round_ss_REF( __m128 dst, __m128 val, int iRoundMode )        //_mm_round_ss
{
    ssp_s32 *valPtr;
    ssp_m128 Dst, Val;
    Dst.f = dst;
    Val.f = val;

    switch( iRoundMode & 0x3 )
    {
    case SSP_FROUND_CUR_DIRECTION:
        break;
    case SSP_FROUND_TO_ZERO:
        valPtr = (ssp_s32*)(&Val.f32[0]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
        {
            Dst.f32[0] = (ssp_f32)( (ssp_s32)Val.f32[0] );
            if( Val.f32[0] <= -0 )
                Dst.s32[0] = Dst.s32[0] | 0x80000000;
        }
        break;
    case SSP_FROUND_TO_POS_INF:
        valPtr = (ssp_s32*)(&Val.f32[0]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Dst.f32[0] = (ssp_f32)ceil( Val.f32[0] );
        break;
    case SSP_FROUND_TO_NEG_INF:
        valPtr = (ssp_s32*)(&Val.f32[0]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Dst.f32[0] = (ssp_f32)floor( Val.f32[0] );
        break;
    default: // SSP_FROUND_TO_NEAREST_INT
        valPtr = (ssp_s32*)(&Val.f32[0]);
        if( ssp_number_isValidNumber_F32_REF( valPtr ) )
            Dst.f32[0] = (ssp_f32)( (Val.f32[0]>0) ? (ssp_s32)(Val.f32[0]+0.5) : (ssp_s32)(Val.f32[0]-0.5) );
        else
            Dst.f32[0] = ssp_number_changeSNanToQNaN_F32_REF( valPtr );
    }
    return Dst.f;
}

//---------------------------------------
// Test
//---------------------------------------
/** \IMP{Reference,_mm_testc_si128, SSE4.1 and SSE5} */
SSP_FORCEINLINE int ssp_testc_si128_REF( __m128i a, __m128i b)                              
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    return ( (A.s64[0] & B.s64[0]) == A.s64[0] ) &&
           ( (A.s64[1] & B.s64[1]) == A.s64[1] ) ;
}

/** \IMP{Reference,_mm_testz_si128, SSE4.1 and SSE5} */
SSP_FORCEINLINE int ssp_testz_si128_REF( __m128i a, __m128i b)                              
{
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    return ( (A.s64[0] & B.s64[0]) == 0 ) &&
           ( (A.s64[1] & B.s64[1]) == 0 ) ;
}

/** \IMP{Reference,_mm_testnzc_si128, SSE4.1 and SSE5} */
SSP_FORCEINLINE int ssp_testnzc_si128_REF( __m128i a, __m128i b)                            
{
    int zf, cf;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    zf = ssp_testz_si128_REF( A.i, B.i);

    cf = ( (~A.s64[0] & B.s64[0]) == 0 ) &&
         ( (~A.s64[1] & B.s64[1]) == 0 ) ;
    return ((int)!zf & (int)!cf);
}

//---------------------------------------
// Type Conversion
//---------------------------------------
/** \IMP{Reference,_mm_cvtepi8_epi16, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepi8_epi16_REF ( __m128i a)                                  
{
    ssp_m128 A;
    A.i = a;

	A.s16[7] = A.s8[7];
	A.s16[6] = A.s8[6];
	A.s16[5] = A.s8[5];
	A.s16[4] = A.s8[4];
	A.s16[3] = A.s8[3];
	A.s16[2] = A.s8[2];
	A.s16[1] = A.s8[1];
	A.s16[0] = A.s8[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepi8_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepi8_epi32_REF ( __m128i a)                                  
{
    ssp_m128 A;
    A.i = a;

	A.s32[3] = A.s8[3];
	A.s32[2] = A.s8[2];
	A.s32[1] = A.s8[1];
	A.s32[0] = A.s8[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepi8_epi64, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepi8_epi64_REF ( __m128i a)                                  
{
    ssp_m128 A;
    A.i = a;

	A.s64[1] = A.s8[1];
	A.s64[0] = A.s8[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepi16_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepi16_epi32_REF ( __m128i a)                                 
{
    ssp_m128 A;
    A.i = a;

	A.s32[3] = A.s16[3];
	A.s32[2] = A.s16[2];
	A.s32[1] = A.s16[1];
	A.s32[0] = A.s16[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepi16_epi64, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepi16_epi64_REF ( __m128i a)                                 
{
    ssp_m128 A;
    A.i = a;

	A.s64[1] = A.s16[1];
	A.s64[0] = A.s16[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepi32_epi64, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepi32_epi64_REF ( __m128i a)                                 
{
    ssp_m128 A;
    A.i = a;

	A.s64[1] = A.s32[1];
    A.s64[0] = A.s32[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepu8_epi16, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepu8_epi16_REF ( __m128i a)                                  
{
    ssp_m128 A;
    A.i = a;

	A.s16[7] = A.u8[7];
	A.s16[6] = A.u8[6];
	A.s16[5] = A.u8[5];
	A.s16[4] = A.u8[4];
	A.s16[3] = A.u8[3];
	A.s16[2] = A.u8[2];
	A.s16[1] = A.u8[1];
	A.s16[0] = A.u8[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepu8_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepu8_epi32_REF ( __m128i a)                                  
{
    ssp_m128 A;
    A.i = a;

	A.s32[3] = A.u8[3];
	A.s32[2] = A.u8[2];
	A.s32[1] = A.u8[1];
	A.s32[0] = A.u8[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepu8_epi64, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepu8_epi64_REF ( __m128i a)                                  
{
    ssp_m128 A;
    A.i = a;

	A.s64[1] = A.u8[1];
	A.s64[0] = A.u8[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepu16_epi32, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepu16_epi32_REF ( __m128i a)                                 
{
    ssp_m128 A;
    A.i = a;

	A.s32[3] = A.u16[3];
	A.s32[2] = A.u16[2];
	A.s32[1] = A.u16[1];
	A.s32[0] = A.u16[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepu16_epi64, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepu16_epi64_REF ( __m128i a)                                 
{
    ssp_m128 A;
    A.i = a;

	A.s64[1] = A.u16[1];
	A.s64[0] = A.u16[0];
	return A.i;
}

/** \IMP{Reference,_mm_cvtepu32_epi64, SSE4.1} */
SSP_FORCEINLINE __m128i ssp_cvtepu32_epi64_REF ( __m128i a)                                 
{
    ssp_m128 A;
    A.i = a;

	A.s64[1] = A.u32[1];
	A.s64[0] = A.u32[0];
	return A.i;
}

//SSSE3
//__m128i _mm_abs_epi8(__m128i a);
/** \IMP{Reference,_mm_abs_epi8, SSSE3} */
SSP_FORCEINLINE __m128i ssp_abs_epi8_REF (__m128i a)
{
    ssp_m128 A;
    A.i = a;

	A.s8[0]  = (A.s8[0] < 0) ? -A.s8[0]  : A.s8[0];
	A.s8[1]  = (A.s8[1] < 0) ? -A.s8[1]  : A.s8[1];
	A.s8[2]  = (A.s8[2] < 0) ? -A.s8[2]  : A.s8[2];
	A.s8[3]  = (A.s8[3] < 0) ? -A.s8[3]  : A.s8[3];
	A.s8[4]  = (A.s8[4] < 0) ? -A.s8[4]  : A.s8[4];
	A.s8[5]  = (A.s8[5] < 0) ? -A.s8[5]  : A.s8[5];
	A.s8[6]  = (A.s8[6] < 0) ? -A.s8[6]  : A.s8[6];
	A.s8[7]  = (A.s8[7] < 0) ? -A.s8[7]  : A.s8[7];
	A.s8[8]  = (A.s8[8] < 0) ? -A.s8[8]  : A.s8[8];
	A.s8[9]  = (A.s8[9] < 0) ? -A.s8[9]  : A.s8[9];
	A.s8[10] = (A.s8[10]< 0) ? -A.s8[10] : A.s8[10];
	A.s8[11] = (A.s8[11]< 0) ? -A.s8[11] : A.s8[11];
	A.s8[12] = (A.s8[12]< 0) ? -A.s8[12] : A.s8[12];
	A.s8[13] = (A.s8[13]< 0) ? -A.s8[13] : A.s8[13];
	A.s8[14] = (A.s8[14]< 0) ? -A.s8[14] : A.s8[14];
	A.s8[15] = (A.s8[15]< 0) ? -A.s8[15] : A.s8[15];

	return A.i;
}

//__m128i _mm_abs_epi16(__m128i a);
/** \IMP{Reference,_mm_abs_epi16, SSSE3} */
SSP_FORCEINLINE __m128i ssp_abs_epi16_REF (__m128i a)
{
    ssp_m128 A;
    A.i = a;

	A.s16[0]  = (A.s16[0] < 0) ? -A.s16[0]  : A.s16[0];
	A.s16[1]  = (A.s16[1] < 0) ? -A.s16[1]  : A.s16[1];
	A.s16[2]  = (A.s16[2] < 0) ? -A.s16[2]  : A.s16[2];
	A.s16[3]  = (A.s16[3] < 0) ? -A.s16[3]  : A.s16[3];
	A.s16[4]  = (A.s16[4] < 0) ? -A.s16[4]  : A.s16[4];
	A.s16[5]  = (A.s16[5] < 0) ? -A.s16[5]  : A.s16[5];
	A.s16[6]  = (A.s16[6] < 0) ? -A.s16[6]  : A.s16[6];
	A.s16[7]  = (A.s16[7] < 0) ? -A.s16[7]  : A.s16[7];

	return A.i;
}

/**  \IMP{Reference,_mm_abs_epi32,SSSE3} */
SSP_FORCEINLINE __m128i ssp_abs_epi32_REF (__m128i a)
{
    ssp_m128 A;
    A.i = a;

	A.s32[0]  = (A.s32[0] < 0) ? -A.s32[0]  : A.s32[0];
	A.s32[1]  = (A.s32[1] < 0) ? -A.s32[1]  : A.s32[1];
	A.s32[2]  = (A.s32[2] < 0) ? -A.s32[2]  : A.s32[2];
	A.s32[3]  = (A.s32[3] < 0) ? -A.s32[3]  : A.s32[3];

	return A.i;
}

/** \IMP{Reference,_mm_abs_pi8,SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
 */
SSP_FORCEINLINE __m64 ssp_abs_pi8_REF (__m64 a)
{
    ssp_m64 A;
    A.m64 = a;

	A.s8[0]  = (A.s8[0] < 0) ? -A.s8[0]  : A.s8[0];
	A.s8[1]  = (A.s8[1] < 0) ? -A.s8[1]  : A.s8[1];
	A.s8[2]  = (A.s8[2] < 0) ? -A.s8[2]  : A.s8[2];
	A.s8[3]  = (A.s8[3] < 0) ? -A.s8[3]  : A.s8[3];
	A.s8[4]  = (A.s8[4] < 0) ? -A.s8[4]  : A.s8[4];
	A.s8[5]  = (A.s8[5] < 0) ? -A.s8[5]  : A.s8[5];
	A.s8[6]  = (A.s8[6] < 0) ? -A.s8[6]  : A.s8[6];
	A.s8[7]  = (A.s8[7] < 0) ? -A.s8[7]  : A.s8[7];

	return A.m64;
}

//__m64 _mm_abs_pi16( __m64 a);
/** \IMP{Reference,_mm_abs_pi16, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_abs_pi16_REF (__m64 a)
{
    ssp_m64 A;
    A.m64 = a;

	A.s16[0]  = (A.s16[0] < 0) ? -A.s16[0]  : A.s16[0];
	A.s16[1]  = (A.s16[1] < 0) ? -A.s16[1]  : A.s16[1];
	A.s16[2]  = (A.s16[2] < 0) ? -A.s16[2]  : A.s16[2];
	A.s16[3]  = (A.s16[3] < 0) ? -A.s16[3]  : A.s16[3];

	return A.m64;
}

//__m64 _mm_abs_pi32( __m64 a);
/** \IMP{Reference,_mm_abs_pi32, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_abs_pi32_REF (__m64 a)
{
    ssp_m64 A;
    A.m64 = a;

	A.s32[0]  = (A.s32[0] < 0) ? -A.s32[0]  : A.s32[0];
	A.s32[1]  = (A.s32[1] < 0) ? -A.s32[1]  : A.s32[1];

	return A.m64;
}

// bit manipulation
//__m128i _mm_alignr_epi8(__m128i a, __m128i b, const int ralign);
/**  \IMP{Reference,_mm_alignr_epi8,SSSE3} */
SSP_FORCEINLINE __m128i ssp_alignr_epi8_REF (__m128i a, __m128i b, const int ralign)
{
    ssp_m128 C[3];
	ssp_s8 * tmp;
	int i, j;

	if (ralign <0) return b; //only shift to right, no negative
	C[2].i = _mm_setzero_si128();
	if (ralign > 32) return C[2].i;
    C[1].i = a;
	C[0].i = b;
	tmp = & (C[0].s8[0]);

	for (i=ralign+15, j=15; i >=ralign; i--, j--) {
		C[2].s8[j] = tmp[i];
	}

	return C[2].i;
}

/**  \IMP{Reference,_mm_alignr_pi8,SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_alignr_pi8_REF (__m64 a, __m64 b, const int ralign)
{
    ssp_m64 C[3];
	ssp_s8 * tmp;
	int i, j;

	if (ralign <0) return b; //only shift to right, no negative
	C[2].u32[0] = 0;
	C[2].u32[1] = 0;
	if (ralign > 16) return C[2].m64;
    C[1].m64 = a;
	C[0].m64 = b;
	tmp = & (C[0].s8[0]);

	for (i=ralign+7, j=7; i >=ralign; i--, j--) {
		C[2].s8[j] = tmp[i];
	}

	return C[2].m64;
}

//__m128i _mm_shuffle_epi8( __m128i a, __m128i mask);
/**  \IMP{Reference,_mm_shuffle_epi8,SSSE3} */
SSP_FORCEINLINE __m128i ssp_shuffle_epi8_REF (__m128i a, __m128i mask)
{
    ssp_m128 A, MSK, B;
	A.i = a;
	MSK.i = mask;

	B.s8[0]  = (MSK.s8[0]  & 0x80) ? 0 : A.s8[(MSK.s8[0]  & 0xf)];
	B.s8[1]  = (MSK.s8[1]  & 0x80) ? 0 : A.s8[(MSK.s8[1]  & 0xf)];
	B.s8[2]  = (MSK.s8[2]  & 0x80) ? 0 : A.s8[(MSK.s8[2]  & 0xf)];
	B.s8[3]  = (MSK.s8[3]  & 0x80) ? 0 : A.s8[(MSK.s8[3]  & 0xf)];
	B.s8[4]  = (MSK.s8[4]  & 0x80) ? 0 : A.s8[(MSK.s8[4]  & 0xf)];
	B.s8[5]  = (MSK.s8[5]  & 0x80) ? 0 : A.s8[(MSK.s8[5]  & 0xf)];
	B.s8[6]  = (MSK.s8[6]  & 0x80) ? 0 : A.s8[(MSK.s8[6]  & 0xf)];
	B.s8[7]  = (MSK.s8[7]  & 0x80) ? 0 : A.s8[(MSK.s8[7]  & 0xf)];
	B.s8[8]  = (MSK.s8[8]  & 0x80) ? 0 : A.s8[(MSK.s8[8]  & 0xf)];
	B.s8[9]  = (MSK.s8[9]  & 0x80) ? 0 : A.s8[(MSK.s8[9]  & 0xf)];
	B.s8[10] = (MSK.s8[10] & 0x80) ? 0 : A.s8[(MSK.s8[10] & 0xf)];
	B.s8[11] = (MSK.s8[11] & 0x80) ? 0 : A.s8[(MSK.s8[11] & 0xf)];
	B.s8[12] = (MSK.s8[12] & 0x80) ? 0 : A.s8[(MSK.s8[12] & 0xf)];
	B.s8[13] = (MSK.s8[13] & 0x80) ? 0 : A.s8[(MSK.s8[13] & 0xf)];
	B.s8[14] = (MSK.s8[14] & 0x80) ? 0 : A.s8[(MSK.s8[14] & 0xf)];
	B.s8[15] = (MSK.s8[15] & 0x80) ? 0 : A.s8[(MSK.s8[15] & 0xf)];

	return B.i;
}

/**  \IMP{Reference,_mm_shuffle_pi8,SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_shuffle_pi8_REF (__m64 a, __m64 mask)
{
    ssp_m64 A, MSK, B;
	A.m64 = a;
	MSK.m64 = mask;

	B.s8[0]  = (MSK.s8[0]  & 0x80) ? 0 : A.s8[(MSK.s8[0]  & 0xf)];
	B.s8[1]  = (MSK.s8[1]  & 0x80) ? 0 : A.s8[(MSK.s8[1]  & 0xf)];
	B.s8[2]  = (MSK.s8[2]  & 0x80) ? 0 : A.s8[(MSK.s8[2]  & 0xf)];
	B.s8[3]  = (MSK.s8[3]  & 0x80) ? 0 : A.s8[(MSK.s8[3]  & 0xf)];
	B.s8[4]  = (MSK.s8[4]  & 0x80) ? 0 : A.s8[(MSK.s8[4]  & 0xf)];
	B.s8[5]  = (MSK.s8[5]  & 0x80) ? 0 : A.s8[(MSK.s8[5]  & 0xf)];
	B.s8[6]  = (MSK.s8[6]  & 0x80) ? 0 : A.s8[(MSK.s8[6]  & 0xf)];
	B.s8[7]  = (MSK.s8[7]  & 0x80) ? 0 : A.s8[(MSK.s8[7]  & 0xf)];

	return B.m64;
}

//Negate the number
//__m128i _mm_sign_epi8( __m128i a, __m128i b);
/**  \IMP{Reference,_mm_sign_epi8, SSSE3} */
SSP_FORCEINLINE __m128i ssp_sign_epi8_REF (__m128i a, __m128i b)
{
    ssp_m128 A, B;
	A.i = a;
	B.i = b;

	A.s8[0]  = (B.s8[0]<0)  ? (-A.s8[0])  :((B.s8[0]==0) ? 0: A.s8[0]);
	A.s8[1]  = (B.s8[1]<0)  ? (-A.s8[1])  :((B.s8[1]==0) ? 0: A.s8[1]);
	A.s8[2]  = (B.s8[2]<0)  ? (-A.s8[2])  :((B.s8[2]==0) ? 0: A.s8[2]);
	A.s8[3]  = (B.s8[3]<0)  ? (-A.s8[3])  :((B.s8[3]==0) ? 0: A.s8[3]);
	A.s8[4]  = (B.s8[4]<0)  ? (-A.s8[4])  :((B.s8[4]==0) ? 0: A.s8[4]);
	A.s8[5]  = (B.s8[5]<0)  ? (-A.s8[5])  :((B.s8[5]==0) ? 0: A.s8[5]);
	A.s8[6]  = (B.s8[6]<0)  ? (-A.s8[6])  :((B.s8[6]==0) ? 0: A.s8[6]);
	A.s8[7]  = (B.s8[7]<0)  ? (-A.s8[7])  :((B.s8[7]==0) ? 0: A.s8[7]);
	A.s8[8]  = (B.s8[8]<0)  ? (-A.s8[8])  :((B.s8[8]==0) ? 0: A.s8[8]);
	A.s8[9]  = (B.s8[9]<0)  ? (-A.s8[9])  :((B.s8[9]==0) ? 0: A.s8[9]);
	A.s8[10] = (B.s8[10]<0) ? (-A.s8[10]) :((B.s8[10]==0)? 0: A.s8[10]);
	A.s8[11] = (B.s8[11]<0) ? (-A.s8[11]) :((B.s8[11]==0)? 0: A.s8[11]);
	A.s8[12] = (B.s8[12]<0) ? (-A.s8[12]) :((B.s8[12]==0)? 0: A.s8[12]);
	A.s8[13] = (B.s8[13]<0) ? (-A.s8[13]) :((B.s8[13]==0)? 0: A.s8[13]);
	A.s8[14] = (B.s8[14]<0) ? (-A.s8[14]) :((B.s8[14]==0)? 0: A.s8[14]);
	A.s8[15] = (B.s8[15]<0) ? (-A.s8[15]) :((B.s8[15]==0)? 0: A.s8[15]);

	return A.i;
}

//__m128i _mm_sign_epi16( __m128i a, __m128i b);
/**  \IMP{Reference,_mm_sign_epi16, SSSE3} */
SSP_FORCEINLINE __m128i ssp_sign_epi16_REF (__m128i a, __m128i b)
{
    ssp_m128 A, B;
	A.i = a;
	B.i = b;

	A.s16[0]  = (B.s16[0]<0)  ? (-A.s16[0])  :((B.s16[0]==0) ? 0: A.s16[0]);
	A.s16[1]  = (B.s16[1]<0)  ? (-A.s16[1])  :((B.s16[1]==0) ? 0: A.s16[1]);
	A.s16[2]  = (B.s16[2]<0)  ? (-A.s16[2])  :((B.s16[2]==0) ? 0: A.s16[2]);
	A.s16[3]  = (B.s16[3]<0)  ? (-A.s16[3])  :((B.s16[3]==0) ? 0: A.s16[3]);
	A.s16[4]  = (B.s16[4]<0)  ? (-A.s16[4])  :((B.s16[4]==0) ? 0: A.s16[4]);
	A.s16[5]  = (B.s16[5]<0)  ? (-A.s16[5])  :((B.s16[5]==0) ? 0: A.s16[5]);
	A.s16[6]  = (B.s16[6]<0)  ? (-A.s16[6])  :((B.s16[6]==0) ? 0: A.s16[6]);
	A.s16[7]  = (B.s16[7]<0)  ? (-A.s16[7])  :((B.s16[7]==0) ? 0: A.s16[7]);

	return A.i;
}

//__m128i _mm_sign_epi32( __m128i a, __m128i b);
/**  \IMP{Reference,_mm_sign_epi32, SSSE3} */
SSP_FORCEINLINE __m128i ssp_sign_epi32_REF (__m128i a, __m128i b)
{
    ssp_m128 A, B;
	A.i = a;
	B.i = b;

	A.s32[0]  = (B.s32[0]<0)  ? (-A.s32[0])  :((B.s32[0]==0) ? 0: A.s32[0]);
	A.s32[1]  = (B.s32[1]<0)  ? (-A.s32[1])  :((B.s32[1]==0) ? 0: A.s32[1]);
	A.s32[2]  = (B.s32[2]<0)  ? (-A.s32[2])  :((B.s32[2]==0) ? 0: A.s32[2]);
	A.s32[3]  = (B.s32[3]<0)  ? (-A.s32[3])  :((B.s32[3]==0) ? 0: A.s32[3]);

	return A.i;
}

//__m64 _mm_sign_pi8( __m64 a, __m64 b);
/**  \IMP{Reference,_mm_sign_pi8, SSSE3} */
SSP_FORCEINLINE __m64 ssp_sign_pi8_REF (__m64 a, __m64 b)
{
    ssp_m64 A, B;
	A.m64 = a;
	B.m64 = b;

	A.s8[0]  = (B.s8[0]<0)  ? (-A.s8[0])  :((B.s8[0]==0) ? 0: A.s8[0]);
	A.s8[1]  = (B.s8[1]<0)  ? (-A.s8[1])  :((B.s8[1]==0) ? 0: A.s8[1]);
	A.s8[2]  = (B.s8[2]<0)  ? (-A.s8[2])  :((B.s8[2]==0) ? 0: A.s8[2]);
	A.s8[3]  = (B.s8[3]<0)  ? (-A.s8[3])  :((B.s8[3]==0) ? 0: A.s8[3]);
	A.s8[4]  = (B.s8[4]<0)  ? (-A.s8[4])  :((B.s8[4]==0) ? 0: A.s8[4]);
	A.s8[5]  = (B.s8[5]<0)  ? (-A.s8[5])  :((B.s8[5]==0) ? 0: A.s8[5]);
	A.s8[6]  = (B.s8[6]<0)  ? (-A.s8[6])  :((B.s8[6]==0) ? 0: A.s8[6]);
	A.s8[7]  = (B.s8[7]<0)  ? (-A.s8[7])  :((B.s8[7]==0) ? 0: A.s8[7]);

	return A.m64;
}

//__m64 _mm_sign_pi16( __m64 a, __m64 b);
/**  \IMP{Reference,_mm_sign_pi16, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_sign_pi16_REF (__m64 a, __m64 b)
{
    ssp_m64 A, B;
	A.m64 = a;
	B.m64 = b;

	A.s16[0]  = (B.s16[0]<0)  ? (-A.s16[0])  :((B.s16[0]==0) ? 0: A.s16[0]);
	A.s16[1]  = (B.s16[1]<0)  ? (-A.s16[1])  :((B.s16[1]==0) ? 0: A.s16[1]);
	A.s16[2]  = (B.s16[2]<0)  ? (-A.s16[2])  :((B.s16[2]==0) ? 0: A.s16[2]);
	A.s16[3]  = (B.s16[3]<0)  ? (-A.s16[3])  :((B.s16[3]==0) ? 0: A.s16[3]);

	return A.m64;
}

//__m64 _mm_sign_pi32( __m64 a, __m64 b);
/**  \IMP{Reference,_mm_sign_pi32, SSSE3}
\n \b NOTE: The user must call _mm_empty() after a call to this function.
*/
SSP_FORCEINLINE __m64 ssp_sign_pi32_REF (__m64 a, __m64 b)
{
    ssp_m64 A, B;
	A.m64 = a;
	B.m64 = b;

	A.s32[0]  = (B.s32[0]<0)  ? (-A.s32[0])  :((B.s32[0]==0) ? 0: A.s32[0]);
	A.s32[1]  = (B.s32[1]<0)  ? (-A.s32[1])  :((B.s32[1]==0) ? 0: A.s32[1]);

	return A.m64;
}

/** \IMP{Reference,_mm_stream_sd,SSE4a} */ 
SSP_FORCEINLINE void ssp_stream_sd_REF( double *dst ,__m128d src )
{
    ssp_m128 SRC;
    SRC.d = src;
    *dst = SRC.f64[0];
}

/** \IMP{Reference,_mm_stream_ss,SSE4a} */ 
SSP_FORCEINLINE void ssp_stream_ss_REF( float *dst, __m128 src )
{
    ssp_m128 SRC;
    SRC.f = src;
    *dst = SRC.f32[0];
}

//---------------------------------------
// Leading Zeros Count
//---------------------------------------
/** \IMP{Reference,__lzcnt16,SSE4a} */ 
SSP_FORCEINLINE unsigned short ssp_lzcnt16_REF( unsigned short val )
{
    
    if( !val )
        return 16;
    // Binary Search Tree of possible output values
    else if( val > 0x00FF )
    {
        if( val > 0x0FFF )
        {
            if( val > 0x3FFF )
            {
                if( val > 0x7FFF )
                    return 0;
                else
                    return 1;
            }
            else // val < 0x3FFF
            {
                if( val > 0x1FFF )
                    return 2;
                else
                    return 3;
            }
        }
        else // val < 0x0FFF
        {
            if( val > 0x03FF )
            {
                if( val > 0x07FF )
                    return 4;
                else
                    return 5;
            }
            else // val < 0x03FF
            {
                if( val > 0x01FF )
                    return 6;
                else
                    return 7;
            }
        }
    }
    else // val < 0x00FF
    {
        if( val > 0x000F )
        {
            if( val > 0x003F  )
            {
                if( val > 0x007F  )
                    return 8;
                else
                    return 9;
            }
            else // val < 0x003F
            {
                if( val > 0x001F)
                    return 10;
                else
                    return 11;
            }
        }
        else // val < 0x000F
        {
            if( val > 0x0003  )
            {
                if( val > 0x0007  )
                    return 12;
                else
                    return 13;
            }
            else // val < 0x0003
            {
                if( val > 0x0001)
                    return 14;
                else
                    return 15;
            }
        }
    }
}
/** \IMP{Reference,__lzcnt,SSE4a} */ 
SSP_FORCEINLINE unsigned int ssp_lzcnt_REF( unsigned int val )
{
    ssp_u32 cnt;
    cnt = ssp_lzcnt16_REF( (ssp_u16)(val>>16) );
    if( cnt == 16 )
        cnt += ssp_lzcnt16_REF( (ssp_u16)(val & 0x0000FFFF) );
    return cnt;
}
/** \IMP{Reference,__lzcnt64,SSE4a} */ 
SSP_FORCEINLINE ssp_u64 ssp_lzcnt64_REF( ssp_u64 val )
{
    ssp_u64 cnt;
    cnt = ssp_lzcnt_REF( (ssp_u32)(val>>32) );
    if( cnt == 32 )
        cnt += ssp_lzcnt_REF( (ssp_u32)(val & 0x00000000FFFFFFFF) );
    return cnt;
}

//---------------------------------------
// Population Count
//---------------------------------------
/** \IMP{SSE4a Native,__popcnt16,SSE4a} */ 
SSP_FORCEINLINE unsigned short ssp_popcnt16_REF( unsigned short val )
{
    int i;
    ssp_u16 cnt=0;
    for( i=0; i<15, val; ++i, val = val>>1 )
        cnt += val & 0x1;
    return cnt;
}
/** \IMP{SSE4a Native,__popcnt,SSE4a} */ 
SSP_FORCEINLINE unsigned int ssp_popcnt_REF( unsigned int val )
{
    int i;
    ssp_u32 cnt = 0;
    for( i=0; i<31, val; ++i, val = val>>1 )
        cnt += val & 0x1;
    return cnt;
}
/** \IMP{SSE4a Native,__popcnt64,SSE4a} */ 
SSP_FORCEINLINE ssp_u64 ssp_popcnt64_REF( ssp_u64 val )
{
    int i;
    ssp_u64 cnt = 0;
    for( i=0; i<63, val; ++i, val = val>>1 )
        cnt += val & 0x1;
    return cnt;
}

//--------------------------------------
// Packed rotates
//--------------------------------------

///** \SSE5{Reference,_mm_perm_epi8, pperm } */
//SSP_FORCEINLINE __m128i ssp_perm_epi8_REF(__m128i a, __m128i b, __m128i c)
//{
//    return _mm_perm_epi8 (a, b, c);
//}
///** \SSE5{Reference,_mm_perm_ps,		 permps } */
//SSP_FORCEINLINE __m128 ssp_perm_ps_REF(__m128 a, __m128 b, __m128i c)
//{
//    return _mm_perm_ps (a, b, c);
//}
///** \SSE5{Reference,_mm_perm_pd,		 permpd } */
//SSP_FORCEINLINE __m128d ssp_perm_pd_REF(__m128d a, __m128d b, __m128i c)
//{
//    return _mm_perm_pd (a, b, c);
//}

/** \SSE5{Reference,_mm_rot_epi8,		 protb } */
SSP_FORCEINLINE __m128i ssp_rot_epi8_REF(__m128i a, __m128i b  )
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 16; n++ )
    {
      if( B.s8[n] < 0 )
      {
        unsigned int count = (-B.s8[n]) % 8;
        unsigned int carry_count = (8 - count) % 8;
        ssp_u8 carry = A.u8[n] << carry_count;
        A.u8[n] = A.u8[n] >> count;
        A.u8[n] = A.u8[n] | carry;
      }
      else
      {
        unsigned int count = B.s8[n] % 8;
        unsigned int carry_count = (8 - count) % 8;
        ssp_u8 carry = A.u8[n] >> carry_count;
        A.u8[n] = A.u8[n] << count;
        A.u8[n] = A.u8[n] | carry;
      }
    }
    return A.i;
}
/** \SSE5{Reference,_mm_rot_epi16,	 protw } */
SSP_FORCEINLINE __m128i ssp_rot_epi16_REF(__m128i a, __m128i b  )
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 8; n++ )
    {
      if( B.s16[n] < 0 )
      {
        unsigned int count = (-B.s16[n]) % 16;
        unsigned int carry_count = (16 - count) % 16;
        ssp_u16 carry = A.u16[n] << carry_count;
        A.u16[n] = A.u16[n] >> count;
        A.u16[n] = A.u16[n] | carry;
      }
      else
      {
        unsigned int count = B.s16[n] % 8;
        unsigned int carry_count = (16 - count) % 16;
        ssp_u16 carry = A.u16[n] >> carry_count;
        A.u16[n] = A.u16[n] << count;
        A.u16[n] = A.u16[n] | carry;
      }
    }
    return A.i;
}
/** \SSE5{Reference,_mm_rot_epi32,	 protd } */
SSP_FORCEINLINE __m128i ssp_rot_epi32_REF(__m128i a, __m128i b  )
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 4; n++ )
    {
      if( B.s8[n] < 0 )
      {
        unsigned int count = (-B.s32[n]) % 32;
        unsigned int carry_count = (32 - count) % 32;
        ssp_u32 carry = A.u32[n] << carry_count;
        A.u32[n] = A.u32[n] >> count;
        A.u32[n] = A.u32[n] | carry;
      }
      else
      {
        unsigned int count = B.s32[n] % 32;
        unsigned int carry_count = (32 - count) % 32;
        ssp_u32 carry = A.u32[n] >> carry_count;
        A.u32[n] = A.u32[n] << count;
        A.u32[n] = A.u32[n] | carry;
      }
    }
    return A.i;
}
/** \SSE5{Reference,_mm_rot_epi64,	 protq } */
SSP_FORCEINLINE __m128i ssp_rot_epi64_REF(__m128i a, __m128i b  )
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 2; n++ )
    {
      if( B.s8[n] < 0 )
      {
        unsigned int count = (unsigned int)((-B.s64[n]) % 64);
        unsigned int carry_count = (64 - count) % 64;
        ssp_u64 carry = A.u64[n] << carry_count;
        A.u64[n] = A.u64[n] >> count;
        A.u64[n] = A.u64[n] | carry;
      }
      else
      {
        unsigned int count = (unsigned int)(B.s64[n] % 64);
        unsigned int carry_count = (64 - count) % 64;
        ssp_u64 carry = A.u64[n] >> carry_count;
        A.u64[n] = A.u64[n] << count;
        A.u64[n] = A.u64[n] | carry;
      }
    }
    return A.i;
}
/** \SSE5{Reference,_mm_roti_epi8, protb } */
SSP_FORCEINLINE __m128i ssp_roti_epi8_REF(__m128i a, const int b)
{
    int n;
    ssp_m128 A;
    A.i = a;

    if( b < 0 )
    {
        unsigned int count = (-b) % 8;
        unsigned int carry_count = (8 - count) % 8;
        for( n = 0; n < 16; n++ )
        {
            ssp_u8 carry = A.u8[n] << carry_count;
            A.u8[n] = A.u8[n] >> count;
            A.u8[n] = A.u8[n] | carry;
        }
    }
    else
    {
        unsigned int count = b % 8;
        unsigned int carry_count = (8 - count) % 8;
        for( n = 0; n < 16; n++ )
        {
            ssp_u8 carry = A.u8[n] >> carry_count;
            A.u8[n] = A.u8[n] << count;
            A.u8[n] = A.u8[n] | carry;
        }
    }
    return A.i;
}
/** \SSE5{Reference,_mm_roti_epi16, protw } */
SSP_FORCEINLINE __m128i ssp_roti_epi16_REF(__m128i a, const int b)
{
    int n;
    ssp_m128 A;
    A.i = a;

    if( b < 0 )
    {
        unsigned int count = (-b) % 16;
        unsigned int carry_count = (16 - count) % 16;
        for( n = 0; n < 8; n++ )
        {
            ssp_u16 carry = A.u16[n] << carry_count;
            A.u16[n] = A.u16[n] >> count;
            A.u16[n] = A.u16[n] | carry;
        }
    }
    else
    {
        unsigned int count = b % 16;
        unsigned int carry_count = (16 - count) % 16;
        for( n = 0; n < 8; n++ )
        {
            ssp_u16 carry = A.u16[n] >> carry_count;
            A.u16[n] = A.u16[n] << count;
            A.u16[n] = A.u16[n] | carry;
        }
    }
    return A.i;
}
/** \SSE5{Reference,_mm_roti_epi32, protd } */
SSP_FORCEINLINE __m128i ssp_roti_epi32_REF(__m128i a, const int b)
{
    int n;
    ssp_m128 A;
    A.i = a;

    if( b < 0 )
    {
        unsigned int count = (-b) % 32;
        unsigned int carry_count = (32 - count) % 32;
        for( n = 0; n < 4; n++ )
        {
            ssp_u32 carry = A.u32[n] << carry_count;
            A.u32[n] = A.u32[n] >> count;
            A.u32[n] = A.u32[n] | carry;
        }
    }
    else
    {
        unsigned int count = b % 32;
        unsigned int carry_count = (32 - count) % 32;
        for( n = 0; n < 4; n++ )
        {
            ssp_u32 carry = A.u32[n] >> carry_count;
            A.u32[n] = A.u32[n] << count;
            A.u32[n] = A.u32[n] | carry;
        }
    }
    return A.i;
}
/** \SSE5{Reference,_mm_roti_epi64, protq } */
SSP_FORCEINLINE __m128i ssp_roti_epi64_REF(__m128i a, const int b)
{
    int n;
    ssp_m128 A;
    A.i = a;

    if( b < 0 )
    {
        unsigned int count = (-b) % 64;
        unsigned int carry_count = (64 - count) % 64;
        for( n = 0; n < 2; n++ )
        {
            ssp_u64 carry = A.u64[n] << carry_count;
            A.u64[n] = A.u64[n] >> count;
            A.u64[n] = A.u64[n] | carry;
        }
    }
    else
    {
        unsigned int count = b % 64;
        unsigned int carry_count = (64 - count) % 64;
        for( n = 0; n < 2; n++ )
        {
            ssp_u64 carry = A.u64[n] >> carry_count;
            A.u64[n] = A.u64[n] << count;
            A.u64[n] = A.u64[n] | carry;
        }
    }
    return A.i;
}


//--------------------------------------
// Packed Shift Logical (bytes, words, dwords, qwords)
//--------------------------------------

/** \SSE5{Reference,ssp_shl_epi8,pshlb } */ 
SSP_FORCEINLINE __m128i ssp_shl_epi8_REF(__m128i a, __m128i b)
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 16; n++ )
    {
      if( B.s8[n] < 0 )
      {
        unsigned int count = (-B.s8[n]) % 8;
        A.u8[n] = A.u8[n] >> count;
      }
      else
      {
        unsigned int count = B.s8[n] % 8;
        A.u8[n] = A.u8[n] << count;
      }
    }
    return A.i;
}

/** \SSE5{Reference,ssp_sha_epi8,pshab } */ 
SSP_FORCEINLINE __m128i ssp_sha_epi8_REF(__m128i a, __m128i b)
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 16; n++ )
    {
      if( B.s8[n] < 0 )
      {
        unsigned int count = (-B.s8[n]) % 8;
        A.s8[n] = A.s8[n] >> count;
      }
      else
      {
        unsigned int count = B.s8[n] % 8;
        A.s8[n] = A.s8[n] << count;
      }
    }

    return A.i;
}

/** \SSE5{Reference,ssp_shl_epi16,pshlw } */ 
SSP_FORCEINLINE __m128i ssp_shl_epi16_REF(__m128i a, __m128i b)
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 8; n++ )
    {
      if( B.s8[n*2] < 0 )
      {
        unsigned int count = (-B.s8[n*2]) % 16;
        A.u16[n] = A.u16[n] >> count;
      }
      else
      {
        unsigned int count = B.s8[n*2] % 16;
        A.u16[n] = A.u16[n] << count;
      }
    }
    return A.i;
}

/** \SSE5{Reference,ssp_sha_epi16,pshaw } */ 
SSP_FORCEINLINE __m128i ssp_sha_epi16_REF(__m128i a, __m128i b)
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 8; n++ )
    {
      if( B.s8[n*2] < 0 )
      {
        unsigned int count = (-B.s8[n*2]) % 16;
        A.s16[n] = A.s16[n] >> count;
      }
      else
      {
        unsigned int count = B.s8[n*2] % 16;
        A.s16[n] = A.s16[n] << count;
      }
    }

    return A.i;
}

/** \SSE5{Reference,ssp_shl_epi32,pshld } */ 
SSP_FORCEINLINE __m128i ssp_shl_epi32_REF(__m128i a, __m128i b)
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 4; n++ )
    {
      if( B.s8[n*4] < 0 )
      {
        unsigned int count = (-B.s8[n*4]) % 32;
        A.u32[n] = A.u32[n] >> count;
      }
      else
      {
        unsigned int count = B.s8[n*4] % 32;
        A.u32[n] = A.u32[n] << count;
      }
    }
    return A.i;
}

/** \SSE5{Reference,ssp_sha_epi32,pshad } */ 
SSP_FORCEINLINE __m128i ssp_sha_epi32_REF(__m128i a, __m128i b)
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 4; n++ )
    {
      if( B.s8[n*4] < 0 )
      {
        unsigned int count = (-B.s8[n*4]) % 32;
        A.s32[n] = A.s32[n] >> count;
      }
      else
      {
        unsigned int count = B.s8[n*4] % 32;
        A.s32[n] = A.s32[n] << count;
      }
    }

    return A.i;
}

/** \SSE5{Reference,ssp_shl_epi64,pshld } */ 
SSP_FORCEINLINE __m128i ssp_shl_epi64_REF(__m128i a, __m128i b)
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 2; n++ )
    {
      if( B.s8[n*8] < 0 )
      {
        unsigned int count = (-B.s8[n*8]) % 64;
        A.u64[n] = A.u64[n] >> count;
      }
      else
      {
        unsigned int count = B.s8[n*8] % 64;
        A.u64[n] = A.u64[n] << count;
      }
    }
    return A.i;
}

/** \SSE5{Reference,ssp_sha_epi64,pshad } */ 
SSP_FORCEINLINE __m128i ssp_sha_epi64_REF(__m128i a, __m128i b)
{
    int n;
    ssp_m128 A,B;
    A.i = a;
    B.i = b;

    for( n = 0; n < 2; n++ )
    {
      if( B.s8[n*8] < 0 )
      {
        unsigned int count = (-B.s8[n*8]) % 64;
        A.s64[n] = A.s64[n] >> count;
      }
      else
      {
        unsigned int count = B.s8[n*8] % 64;
        A.s64[n] = A.s64[n] << count;
      }
    }

    return A.i;
}

/** @} 
 *  @}
 */

#endif // __SSP_EMULATION_REF_H__
