/**
 * @file gb18030uni.h
 * @brief GB18030 four-byte extension
 * @copyright Copyright (C) 1999-2001, 2005, 2012, 2016, 2023 Free Software Foundation, Inc.
 * @copyright Copyright (C) 2024 The C++ Plus Project.
 */
/*
 * This file is part of the cppp-reiconv library.
 *
 * The cppp-reiconv library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * The cppp-reiconv library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the cppp-reiconv library; see the file LICENSE.
 * If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef _GB18030UNI_H_
#define _GB18030UNI_H_

#include "reiconv_defines.h"

static const unsigned short gb18030uni_charset2uni_ranges[412] = {
  0x0000, 0x0023,  0x0024, 0x0025,  0x0026, 0x002c,  0x002d, 0x0031,
  0x0032, 0x0050,  0x0051, 0x0058,  0x0059, 0x005e,  0x005f, 0x005f,
  0x0060, 0x0063,  0x0064, 0x0066,  0x0067, 0x0067,  0x0068, 0x0068,
  0x0069, 0x006c,  0x006d, 0x007d,  0x007e, 0x0084,  0x0085, 0x0093,
  0x0094, 0x00ab,  0x00ac, 0x00ae,  0x00af, 0x00b2,  0x00b3, 0x00cf,
  0x00d0, 0x0131,  0x0132, 0x0132,  0x0133, 0x0133,  0x0134, 0x0134,
  0x0135, 0x0135,  0x0136, 0x0136,  0x0137, 0x0137,  0x0138, 0x0138,
  0x0139, 0x0154,  0x0155, 0x01ab,  0x01ac, 0x01ba,  0x01bb, 0x021f,
  0x0220, 0x0220,  0x0221, 0x022d,  0x022e, 0x02e4,  0x02e5, 0x02e5,
  0x02e6, 0x02ec,  0x02ed, 0x02ed,  0x02ee, 0x0324,  0x0325, 0x0332,
  0x0333, 0x0333,  0x0334, 0x1ef1,  0x1ef2, 0x1ef3,  0x1ef4, 0x1ef4,
  0x1ef5, 0x1ef6,  0x1ef7, 0x1efd,  0x1efe, 0x1f06,  0x1f07, 0x1f07,
  0x1f08, 0x1f08,  0x1f09, 0x1f0d,  0x1f0e, 0x1f7d,  0x1f7e, 0x1fd3,
  0x1fd4, 0x1fd4,  0x1fd5, 0x1fd7,  0x1fd8, 0x1fe3,  0x1fe4, 0x1fed,
  0x1fee, 0x202b,  0x202c, 0x202f,  0x2030, 0x2045,  0x2046, 0x2047,
  0x2048, 0x20b5,  0x20b6, 0x20bb,  0x20bc, 0x20bc,  0x20bd, 0x20bf,
  0x20c0, 0x20c3,  0x20c4, 0x20c5,  0x20c6, 0x20c7,  0x20c8, 0x20c8,
  0x20c9, 0x20c9,  0x20ca, 0x20cb,  0x20cc, 0x20d0,  0x20d1, 0x20d5,
  0x20d6, 0x20df,  0x20e0, 0x20e2,  0x20e3, 0x20e7,  0x20e8, 0x20f4,
  0x20f5, 0x20f6,  0x20f7, 0x20fc,  0x20fd, 0x2121,  0x2122, 0x2124,
  0x2125, 0x212f,  0x2130, 0x2148,  0x2149, 0x219a,  0x219b, 0x22e7,
  0x22e8, 0x22f1,  0x22f2, 0x2355,  0x2356, 0x2359,  0x235a, 0x2366,
  0x2367, 0x2369,  0x236a, 0x2373,  0x2374, 0x2383,  0x2384, 0x238b,
  0x238c, 0x2393,  0x2394, 0x2396,  0x2397, 0x2398,  0x2399, 0x23aa,
  0x23ab, 0x23c9,  0x23ca, 0x23cb,  0x23cc, 0x2401,  0x2402, 0x2402,
  0x2403, 0x2c40,  0x2c41, 0x2c42,  0x2c43, 0x2c45,  0x2c46, 0x2c47,
  0x2c48, 0x2c51,  0x2c52, 0x2c60,  0x2c61, 0x2c62,  0x2c63, 0x2c65,
  0x2c66, 0x2c69,  0x2c6a, 0x2c6b,  0x2c6c, 0x2c6e,  0x2c6f, 0x2c7c,
  0x2c7d, 0x2da1,  0x2da2, 0x2da5,  0x2da6, 0x2da6,  0x2da7, 0x2dab,
  0x2dac, 0x2dad,  0x2dae, 0x2dc1,  0x2dc2, 0x2dc3,  0x2dc4, 0x2dca,
  0x2dcb, 0x2dcc,  0x2dcd, 0x2dd1,  0x2dd2, 0x2dd7,  0x2dd8, 0x2ecd,
  0x2ece, 0x2ed4,  0x2ed5, 0x2f45,  0x2f46, 0x302f,  0x3030, 0x303b,
  0x303c, 0x303d,  0x303e, 0x305f,  0x3060, 0x3068,  0x3069, 0x306a,
  0x306b, 0x306c,  0x306d, 0x30dd,  0x30de, 0x3108,  0x3109, 0x3232,
  0x3233, 0x32a1,  0x32a2, 0x32ac,  0x32ad, 0x35a9,  0x35aa, 0x35fe,
  0x35ff, 0x365e,  0x365f, 0x366c,  0x366d, 0x36ff,  0x3700, 0x37d9,
  0x37da, 0x38f8,  0x38f9, 0x3969,  0x396a, 0x3cde,  0x3cdf, 0x3de6,
  0x3de7, 0x3fbd,  0x3fbe, 0x4031,  0x4032, 0x4035,  0x4036, 0x4060,
  0x4061, 0x4158,  0x4159, 0x42cd,  0x42ce, 0x42e1,  0x42e2, 0x43a2,
  0x43a3, 0x43a7,  0x43a8, 0x43f9,  0x43fa, 0x4409,  0x440a, 0x45c2,
  0x45c3, 0x45f4,  0x45f5, 0x45f6,  0x45f7, 0x45fa,  0x45fb, 0x45fb,
  0x45fc, 0x460f,  0x4610, 0x4612,  0x4613, 0x4628,  0x4629, 0x48e7,
  0x48e8, 0x490e,  0x490f, 0x497d,  0x497e, 0x4a11,  0x4a12, 0x4a62,
  0x4a63, 0x82bc,
                   0x82bd, 0x82bd,  0x82be, 0x82be,  0x82bf, 0x82cb,
  0x82cc, 0x82cc,  0x82cd, 0x82d1,  0x82d2, 0x82d8,  0x82d9, 0x82dc,
  0x82dd, 0x82e0,  0x82e1, 0x82e8,  0x82e9, 0x82ef,  0x82f0, 0x82ff,
  0x8300, 0x830d,
                   0x830e, 0x93d4,  0x93d5, 0x9420,  0x9421, 0x943b,
  0x943c, 0x948c,  0x948d, 0x9495,  0x9496, 0x94af,  0x94b0, 0x94b0,
  0x94b1, 0x94b1,  0x94b2, 0x94b4,  0x94b5, 0x94ba,  0x94bb, 0x94bb,
  0x94bc, 0x94bd,  0x94be, 0x98c3,  0x98c4, 0x98c4,  0x98c5, 0x98c8,
  0x98c9, 0x98c9,  0x98ca, 0x98ca,  0x98cb, 0x98cb,  0x98cc, 0x9960,
  0x9961, 0x99e1,  0x99e2, 0x99fb
};

static const unsigned short gb18030uni_uni2charset_ranges[412] = {
  0x0080, 0x00a3,  0x00a5, 0x00a6,  0x00a9, 0x00af,  0x00b2, 0x00b6,
  0x00b8, 0x00d6,  0x00d8, 0x00df,  0x00e2, 0x00e7,  0x00eb, 0x00eb,
  0x00ee, 0x00f1,  0x00f4, 0x00f6,  0x00f8, 0x00f8,  0x00fb, 0x00fb,
  0x00fd, 0x0100,  0x0102, 0x0112,  0x0114, 0x011a,  0x011c, 0x012a,
  0x012c, 0x0143,  0x0145, 0x0147,  0x0149, 0x014c,  0x014e, 0x016a,
  0x016c, 0x01cd,  0x01cf, 0x01cf,  0x01d1, 0x01d1,  0x01d3, 0x01d3,
  0x01d5, 0x01d5,  0x01d7, 0x01d7,  0x01d9, 0x01d9,  0x01db, 0x01db,
  0x01dd, 0x01f8,  0x01fa, 0x0250,  0x0252, 0x0260,  0x0262, 0x02c6,
  0x02c8, 0x02c8,  0x02cc, 0x02d8,  0x02da, 0x0390,  0x03a2, 0x03a2,
  0x03aa, 0x03b0,  0x03c2, 0x03c2,  0x03ca, 0x0400,  0x0402, 0x040f,
  0x0450, 0x0450,  0x0452, 0x200f,  0x2011, 0x2012,  0x2017, 0x2017,
  0x201a, 0x201b,  0x201e, 0x2024,  0x2027, 0x202f,  0x2031, 0x2031,
  0x2034, 0x2034,  0x2036, 0x203a,  0x203c, 0x20ab,  0x20ad, 0x2102,
  0x2104, 0x2104,  0x2106, 0x2108,  0x210a, 0x2115,  0x2117, 0x2120,
  0x2122, 0x215f,  0x216c, 0x216f,  0x217a, 0x218f,  0x2194, 0x2195,
  0x219a, 0x2207,  0x2209, 0x220e,  0x2210, 0x2210,  0x2212, 0x2214,
  0x2216, 0x2219,  0x221b, 0x221c,  0x2221, 0x2222,  0x2224, 0x2224,
  0x2226, 0x2226,  0x222c, 0x222d,  0x222f, 0x2233,  0x2238, 0x223c,
  0x223e, 0x2247,  0x2249, 0x224b,  0x224d, 0x2251,  0x2253, 0x225f,
  0x2262, 0x2263,  0x2268, 0x226d,  0x2270, 0x2294,  0x2296, 0x2298,
  0x229a, 0x22a4,  0x22a6, 0x22be,  0x22c0, 0x2311,  0x2313, 0x245f,
  0x246a, 0x2473,  0x249c, 0x24ff,  0x254c, 0x254f,  0x2574, 0x2580,
  0x2590, 0x2592,  0x2596, 0x259f,  0x25a2, 0x25b1,  0x25b4, 0x25bb,
  0x25be, 0x25c5,  0x25c8, 0x25ca,  0x25cc, 0x25cd,  0x25d0, 0x25e1,
  0x25e6, 0x2604,  0x2607, 0x2608,  0x260a, 0x263f,  0x2641, 0x2641,
  0x2643, 0x2e80,  0x2e82, 0x2e83,  0x2e85, 0x2e87,  0x2e89, 0x2e8a,
  0x2e8d, 0x2e96,  0x2e98, 0x2ea6,  0x2ea8, 0x2ea9,  0x2eab, 0x2ead,
  0x2eaf, 0x2eb2,  0x2eb4, 0x2eb5,  0x2eb8, 0x2eba,  0x2ebc, 0x2ec9,
  0x2ecb, 0x2fef,  0x2ffc, 0x2fff,  0x3004, 0x3004,  0x3018, 0x301c,
  0x301f, 0x3020,  0x302a, 0x303d,  0x303f, 0x3040,  0x3094, 0x309a,
  0x309f, 0x30a0,  0x30f7, 0x30fb,  0x30ff, 0x3104,  0x312a, 0x321f,
  0x322a, 0x3230,  0x3232, 0x32a2,  0x32a4, 0x338d,  0x3390, 0x339b,
  0x339f, 0x33a0,  0x33a2, 0x33c3,  0x33c5, 0x33cd,  0x33cf, 0x33d0,
  0x33d3, 0x33d4,  0x33d6, 0x3446,  0x3448, 0x3472,  0x3474, 0x359d,
  0x359f, 0x360d,  0x360f, 0x3619,  0x361b, 0x3917,  0x3919, 0x396d,
  0x396f, 0x39ce,  0x39d1, 0x39de,  0x39e0, 0x3a72,  0x3a74, 0x3b4d,
  0x3b4f, 0x3c6d,  0x3c6f, 0x3cdf,  0x3ce1, 0x4055,  0x4057, 0x415e,
  0x4160, 0x4336,  0x4338, 0x43ab,  0x43ad, 0x43b0,  0x43b2, 0x43dc,
  0x43de, 0x44d5,  0x44d7, 0x464b,  0x464d, 0x4660,  0x4662, 0x4722,
  0x4724, 0x4728,  0x472a, 0x477b,  0x477d, 0x478c,  0x478e, 0x4946,
  0x4948, 0x4979,  0x497b, 0x497c,  0x497e, 0x4981,  0x4984, 0x4984,
  0x4987, 0x499a,  0x499c, 0x499e,  0x49a0, 0x49b5,  0x49b8, 0x4c76,
  0x4c78, 0x4c9e,  0x4ca4, 0x4d12,  0x4d1a, 0x4dad,  0x4daf, 0x4dff,
  0x9fa6, 0xd7ff,
                   0xe76c, 0xe76c,  0xe7c8, 0xe7c8,  0xe7e7, 0xe7f3,
  0xe815, 0xe815,  0xe819, 0xe81d,  0xe81f, 0xe825,  0xe827, 0xe82a,
  0xe82d, 0xe830,  0xe833, 0xe83a,  0xe83c, 0xe842,  0xe844, 0xe853,
  0xe856, 0xe863,
                   0xe865, 0xf92b,  0xf92d, 0xf978,  0xf97a, 0xf994,
  0xf996, 0xf9e6,  0xf9e8, 0xf9f0,  0xf9f2, 0xfa0b,  0xfa10, 0xfa10,
  0xfa12, 0xfa12,  0xfa15, 0xfa17,  0xfa19, 0xfa1e,  0xfa22, 0xfa22,
  0xfa25, 0xfa26,  0xfa2a, 0xfe2f,  0xfe32, 0xfe32,  0xfe45, 0xfe48,
  0xfe53, 0xfe53,  0xfe58, 0xfe58,  0xfe67, 0xfe67,  0xfe6c, 0xff00,
  0xff5f, 0xffdf,  0xffe6, 0xffff
};

static const unsigned short gb18030uni_ranges[206] = {
    128,   129,   131,   133,   134,   135,   137,   140,
    142,   144,   145,   147,   148,   149,   150,   151,
    152,   153,   154,   155,   156,   157,   158,   159,
    160,   161,   162,   163,   164,   165,   166,   167,
    168,   171,   172,   189,   196,   213,   220,   221,
    285,   286,   287,   291,   293,   295,   297,   298,
    300,   301,   302,   303,   304,   305,   306,   307,
    308,   320,   330,   334,   338,   339,   340,   341,
    342,   343,   347,   348,   349,   354,   355,   359,
    360,   361,   362,   363,   365,   369,   371,   372,
    373,   374,   375,   376,   386,   426,   502,   538,
    553,   556,   558,   560,   562,   564,   565,   567,
    571,   573,   574,   575,   576,   577,   578,   579,
    581,   582,   583,   584,   585,   586,   588,   589,
    590,   602,   606,   625,   627,   636,   637,   720,
    724,   810,   813,   850,   860,   861,   862,   864,
    867,   868,   869,   870,   872,   873,   874,   875,
    876,   877,   878,   879,   880,   882,   883,   884,
    885,   886,   887,   888,   889,   890,   891,   892,
    893,   894,   895,   896,   897,   898,   899,   900,
    901,   902,   903,   905,   907,   908,   909,   911,
    912,   917,   924,   925, 21827,
                                     25775, 25866, 25896,
  25929, 25932, 25933, 25934, 25936, 25938, 25939, 25940,
  25942,
         25943, 25944, 25945, 25946, 25947, 25948, 25952,
  25953, 25955, 25956, 25959, 25961, 25964, 25966, 25984,
  25994, 25998, 26012, 26016, 26110, 26116
};

static const unsigned short gb18030_2022_charset2uni_pua1[8] = {
  0xe81e, 0xe826, 0xe82b, 0xe82c, 0xe832, 0xe843, 0xe854, 0xe864
};

static const unsigned short gb18030_2022_charset2uni_pua2[10] = {
  0xe78d, 0xe78f, 0xe78e, 0xe790, 0xe791, 0xe792, 0xe793, 0xe794, 0xe795, 0xe796
};

static int gb18030_2005_uni_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c1 = s[0];
    if (c1 >= 0x81 && c1 <= 0x84)
    {
        if (n >= 2)
        {
            unsigned char c2 = s[1];
            if (c2 >= 0x30 && c2 <= 0x39)
            {
                if (n >= 3)
                {
                    unsigned char c3 = s[2];
                    if (c3 >= 0x81 && c3 <= 0xfe)
                    {
                        if (n >= 4)
                        {
                            unsigned char c4 = s[3];
                            if (c4 >= 0x30 && c4 <= 0x39)
                            {
                                unsigned int i =
                                    (((c1 - 0x81) * 10 + (c2 - 0x30)) * 126 + (c3 - 0x81)) * 10 + (c4 - 0x30);
                                if (i >= 0 && i <= 39419)
                                {
                                    if (i == 7457)
                                    {
                                        *pwc = 0xe7c7;
                                    }
                                    else
                                    {
                                        unsigned int k1 = 0;
                                        unsigned int k2 = 205;
                                        while (k1 < k2)
                                        {
                                            unsigned int k = (k1 + k2) / 2;
                                            if (i <= gb18030uni_charset2uni_ranges[2 * k + 1])
                                                k2 = k;
                                            else if (i >= gb18030uni_charset2uni_ranges[2 * k + 2])
                                                k1 = k + 1;
                                            else
                                                return RET_ILSEQ;
                                        }
                                        {
                                            unsigned int diff = gb18030uni_ranges[k1];
                                            *pwc = (ucs4_t)(i + diff);
                                        }
                                    }
                                    return 4;
                                }
                            }
                            return RET_ILSEQ;
                        }
                        return RET_TOOFEW(0);
                    }
                    return RET_ILSEQ;
                }
                return RET_TOOFEW(0);
            }
            return RET_ILSEQ;
        }
        return RET_TOOFEW(0);
    }
    return RET_ILSEQ;
}

static int gb18030_2022_uni_mbtowc(conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
    unsigned char c1 = s[0];
    if (c1 >= 0x81 && c1 <= 0x84)
    {
        if (n >= 2)
        {
            unsigned char c2 = s[1];
            if (c2 >= 0x30 && c2 <= 0x39)
            {
                if (n >= 3)
                {
                    unsigned char c3 = s[2];
                    if (c3 >= 0x81 && c3 <= 0xfe)
                    {
                        if (n >= 4)
                        {
                            unsigned char c4 = s[3];
                            if (c4 >= 0x30 && c4 <= 0x39)
                            {
                                unsigned int i =
                                    (((c1 - 0x81) * 10 + (c2 - 0x30)) * 126 + (c3 - 0x81)) * 10 + (c4 - 0x30);
                                if (i >= 0 && i <= 39419)
                                {
                                    if (i == 7457)
                                    {
                                        *pwc = 0xe7c7;
                                    }
                                    else if (i >= 19057 && i <= 19064)
                                    {
                                        *pwc = gb18030_2022_charset2uni_pua1[i - 19057];
                                    }
                                    else if (i >= 39076 && i <= 39085)
                                    {
                                        *pwc = gb18030_2022_charset2uni_pua2[i - 39076];
                                    }
                                    else
                                    {
                                        unsigned int k1 = 0;
                                        unsigned int k2 = 205;
                                        while (k1 < k2)
                                        {
                                            unsigned int k = (k1 + k2) / 2;
                                            if (i <= gb18030uni_charset2uni_ranges[2 * k + 1])
                                                k2 = k;
                                            else if (i >= gb18030uni_charset2uni_ranges[2 * k + 2])
                                                k1 = k + 1;
                                            else
                                                return RET_ILSEQ;
                                        }
                                        {
                                            unsigned int diff = gb18030uni_ranges[k1];
                                            *pwc = (ucs4_t)(i + diff);
                                        }
                                    }
                                    return 4;
                                }
                            }
                            return RET_ILSEQ;
                        }
                        return RET_TOOFEW(0);
                    }
                    return RET_ILSEQ;
                }
                return RET_TOOFEW(0);
            }
            return RET_ILSEQ;
        }
        return RET_TOOFEW(0);
    }
    return RET_ILSEQ;
}

static const unsigned char gb18030_2022_uni2charset_pua1[71] = {
  /* 0xe810 */                                           1, 0,
  /* 0xe820 */ 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 0, 0,
  /* 0xe830 */ 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  /* 0xe840 */ 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  /* 0xe850 */ 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  /* 0xe860 */ 0, 0, 0, 0, 8,
};

static const unsigned char gb18030_2022_uni2charset_pua2[10] = {
  0, 2, 1, 3, 4, 5, 6, 7, 8, 9
};

static int gb18030_2005_uni_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    if (n >= 4)
    {
        unsigned int i;
        if (wc >= 0x0080 && wc <= 0xffff)
        {
            if (wc == 0xe7c7)
            {
                i = 7457;
            }
            else
            {
                unsigned int k1 = 0;
                unsigned int k2 = 205;
                i = wc;
                while (k1 < k2)
                {
                    unsigned int k = (k1 + k2) / 2;
                    if (i <= gb18030uni_uni2charset_ranges[2 * k + 1])
                        k2 = k;
                    else if (i >= gb18030uni_uni2charset_ranges[2 * k + 2])
                        k1 = k + 1;
                    else
                        return RET_ILUNI;
                }
                {
                    unsigned int diff = gb18030uni_ranges[k1];
                    i -= diff;
                }
            }
        }
        else if (wc >= 0x20087 && wc <= 0x241fe)
        {
            if (wc == 0x20087)
                i = 0x3e2cf;
            else if (wc == 0x20089)
                i = 0x3e2d1;
            else if (wc == 0x200cc)
                i = 0x3e314;
            else if (wc == 0x215d7)
                i = 0x3f81f;
            else if (wc == 0x2298f)
                i = 0x40bd7;
            else if (wc == 0x241fe)
                i = 0x42446;
            else
                return RET_ILUNI;
        }
        else
            return RET_ILUNI;
        r[3] = (i % 10) + 0x30;
        i = i / 10;
        r[2] = (i % 126) + 0x81;
        i = i / 126;
        r[1] = (i % 10) + 0x30;
        i = i / 10;
        r[0] = i + 0x81;
        return 4;
    }
    return RET_TOOSMALL;
}

static int gb18030_2022_uni_wctomb(conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
    if (n >= 4)
    {
        if (wc >= 0x0080 && wc <= 0xffff)
        {
            unsigned int i;
            if (wc == 0xe7c7)
            {
                i = 7457;
            }
            else if (wc >= 0xe78d && wc <= 0xe796)
            {
                i = 39076 + gb18030_2022_uni2charset_pua2[wc - 0xe78d];
            }
            else if (wc >= 0xe81e && wc <= 0xe864 && gb18030_2022_uni2charset_pua1[wc - 0xe81e])
            {
                i = 19056 + gb18030_2022_uni2charset_pua1[wc - 0xe81e];
            }
            else
            {
                unsigned int k1 = 0;
                unsigned int k2 = 205;
                i = wc;
                while (k1 < k2)
                {
                    unsigned int k = (k1 + k2) / 2;
                    if (i <= gb18030uni_uni2charset_ranges[2 * k + 1])
                        k2 = k;
                    else if (i >= gb18030uni_uni2charset_ranges[2 * k + 2])
                        k1 = k + 1;
                    else
                        return RET_ILUNI;
                }
                {
                    unsigned int diff = gb18030uni_ranges[k1];
                    i -= diff;
                }
            }
            r[3] = (i % 10) + 0x30;
            i = i / 10;
            r[2] = (i % 126) + 0x81;
            i = i / 126;
            r[1] = (i % 10) + 0x30;
            i = i / 10;
            r[0] = i + 0x81;
            return 4;
        }
        return RET_ILUNI;
    }
    return RET_TOOSMALL;
}

#endif /* _GB18030UNI_H_ */
