/****************************************************************************
 * arch/hc/include/hcs12/limits.h
 *
 *   Copyright (C) 2009, 2012 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __ARCH_HC_INCLUDE_HCS12_LIMITS_H
#define __ARCH_HC_INCLUDE_HCS12_LIMITS_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Definitions
 ****************************************************************************/

#define CHAR_BIT    8
#define SCHAR_MIN   (-128)
#define SCHAR_MAX   127
#define UCHAR_MAX   255

/* These could be different on machines where char is unsigned */

#ifdef __CHAR_UNSIGNED__
#define CHAR_MIN    0
#define CHAR_MAX    UCHAR_MAX
#else
#define CHAR_MIN    SCHAR_MIN
#define CHAR_MAX    SCHAR_MAX
#endif

#define SHRT_MIN    (-32768)
#define SHRT_MAX    32767
#define USHRT_MAX   65535

/* The size of an integer is controlled with the -mshort or -mnoshort GCC
 * options.  GCC will set the pre-defined symbol __INT__ to indicate the size
 * of an integer
 */

#if __INT__ == 32
#  define INT_MIN   (-2147483648)
#  define INT_MAX   2147483647
#  define UINT_MAX  4294967295
#else
#  define INT_MIN   (-32768)
#  define INT_MAX   32767
#  define UINT_MAX  65535
#endif

/* Long is 4-bytes and long long is 8 bytes in any case */

#define LONG_MIN    (-2147483648L)
#define LONG_MAX    2147483647L
#define ULONG_MAX   4294967295UL

#define LLONG_MIN   (-9223372036854775808LL)
#define LLONG_MAX   9223372036854775807LL
#define ULLONG_MAX  18446744073709551615ULL

/* A pointer is 2 bytes */

#define PTR_MIN     (-32768)
#define PTR_MAX     32767
#define UPTR_MAX    65535

#endif /* __ARCH_HC_INCLUDE_HCS12_LIMITS_H */