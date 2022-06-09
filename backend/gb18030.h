/*  gb18030.h - tables for Unicode to GB 18030-2005,
    generated by "backend/tools/gen_eci_mb_h.php" from
    "jdk-1.4.2/GB18030.TXT"
    (see https://haible.de/bruno/charsets/conversion-tables/GB18030.tar.bz2) */
/*
    libzint - the open source barcode library
    Copyright (C) 2016-2022 Robin Stuart <rstuart114@gmail.com>

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    3. Neither the name of the project nor the names of its contributors
       may be used to endorse or promote products derived from this software
       without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
    OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
    HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
    OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
    SUCH DAMAGE.
 */
/* SPDX-License-Identifier: BSD-3-Clause */

#ifndef Z_GB18030_H
#define Z_GB18030_H

/* Unicode codepoints sorted */
static const unsigned short gb18030_2_u[273] = {
    0x01F9, 0x1E3F, 0x20AC, 0x2E81, 0x2E84, 0x2E88, 0x2E8B, 0x2E8C,
    0x2E97, 0x2EA7, 0x2EAA, 0x2EAE, 0x2EB3, 0x2EB6, 0x2EB7, 0x2EBB,
    0x2ECA, 0x2FF0, 0x2FF1, 0x2FF2, 0x2FF3, 0x2FF4, 0x2FF5, 0x2FF6,
    0x2FF7, 0x2FF8, 0x2FF9, 0x2FFA, 0x2FFB, 0x303E, 0x3447, 0x3473,
    0x359E, 0x360E, 0x361A, 0x3918, 0x396E, 0x39CF, 0x39D0, 0x39DF,
    0x3A73, 0x3B4E, 0x3C6E, 0x3CE0, 0x4056, 0x415F, 0x4337, 0x43AC,
    0x43B1, 0x43DD, 0x44D6, 0x464C, 0x4661, 0x4723, 0x4729, 0x477C,
    0x478D, 0x4947, 0x497A, 0x497D, 0x4982, 0x4983, 0x4985, 0x4986,
    0x499B, 0x499F, 0x49B6, 0x49B7, 0x4C77, 0x4C9F, 0x4CA0, 0x4CA1,
    0x4CA2, 0x4CA3, 0x4D13, 0x4D14, 0x4D15, 0x4D16, 0x4D17, 0x4D18,
    0x4D19, 0x4DAE, 0x9FB4, 0x9FB5, 0x9FB6, 0x9FB7, 0x9FB8, 0x9FB9,
    0x9FBA, 0x9FBB, 0xE766, 0xE767, 0xE768, 0xE769, 0xE76A, 0xE76B,
    0xE76D, 0xE76E, 0xE76F, 0xE770, 0xE771, 0xE772, 0xE773, 0xE774,
    0xE775, 0xE776, 0xE777, 0xE778, 0xE779, 0xE77A, 0xE77B, 0xE77C,
    0xE77D, 0xE77E, 0xE77F, 0xE780, 0xE781, 0xE782, 0xE783, 0xE784,
    0xE785, 0xE786, 0xE787, 0xE788, 0xE789, 0xE78A, 0xE78B, 0xE78C,
    0xE78D, 0xE78E, 0xE78F, 0xE790, 0xE791, 0xE792, 0xE793, 0xE794,
    0xE795, 0xE796, 0xE797, 0xE798, 0xE799, 0xE79A, 0xE79B, 0xE79C,
    0xE79D, 0xE79E, 0xE79F, 0xE7A0, 0xE7A1, 0xE7A2, 0xE7A3, 0xE7A4,
    0xE7A5, 0xE7A6, 0xE7A7, 0xE7A8, 0xE7A9, 0xE7AA, 0xE7AB, 0xE7AC,
    0xE7AD, 0xE7AE, 0xE7AF, 0xE7B0, 0xE7B1, 0xE7B2, 0xE7B3, 0xE7B4,
    0xE7B5, 0xE7B6, 0xE7B7, 0xE7B8, 0xE7B9, 0xE7BA, 0xE7BB, 0xE7BC,
    0xE7BD, 0xE7BE, 0xE7BF, 0xE7C0, 0xE7C1, 0xE7C2, 0xE7C3, 0xE7C4,
    0xE7C5, 0xE7C6, 0xE7C9, 0xE7CA, 0xE7CB, 0xE7CC, 0xE7CD, 0xE7CE,
    0xE7CF, 0xE7D0, 0xE7D1, 0xE7D2, 0xE7D3, 0xE7D4, 0xE7D5, 0xE7D6,
    0xE7D7, 0xE7D8, 0xE7D9, 0xE7DA, 0xE7DB, 0xE7DC, 0xE7DD, 0xE7DE,
    0xE7DF, 0xE7E0, 0xE7E1, 0xE7E2, 0xE7E3, 0xE7E4, 0xE7E5, 0xE7E6,
    0xE7F4, 0xE7F5, 0xE7F6, 0xE7F7, 0xE7F8, 0xE7F9, 0xE7FA, 0xE7FB,
    0xE7FC, 0xE7FD, 0xE7FE, 0xE7FF, 0xE800, 0xE801, 0xE802, 0xE803,
    0xE804, 0xE805, 0xE806, 0xE807, 0xE808, 0xE809, 0xE80A, 0xE80B,
    0xE80C, 0xE80D, 0xE80E, 0xE80F, 0xE810, 0xE811, 0xE812, 0xE813,
    0xE814, 0xE816, 0xE817, 0xE818, 0xE81E, 0xE826, 0xE82B, 0xE82C,
    0xE831, 0xE832, 0xE83B, 0xE843, 0xE854, 0xE855, 0xE864, 0xFE10,
    0xFE11, 0xFE12, 0xFE13, 0xFE14, 0xFE15, 0xFE16, 0xFE17, 0xFE18,
    0xFE19,
};

/* Multibyte values sorted in Unicode order */
static const unsigned short gb18030_2_mb[273] = {
    0xA8BF, 0xA8BC, 0xA2E3, 0xFE50, 0xFE54, 0xFE57, 0xFE58, 0xFE5D,
    0xFE5E, 0xFE6B, 0xFE6E, 0xFE71, 0xFE73, 0xFE74, 0xFE75, 0xFE79,
    0xFE84, 0xA98A, 0xA98B, 0xA98C, 0xA98D, 0xA98E, 0xA98F, 0xA990,
    0xA991, 0xA992, 0xA993, 0xA994, 0xA995, 0xA989, 0xFE56, 0xFE55,
    0xFE5A, 0xFE5C, 0xFE5B, 0xFE60, 0xFE5F, 0xFE62, 0xFE65, 0xFE63,
    0xFE64, 0xFE68, 0xFE69, 0xFE6A, 0xFE6F, 0xFE70, 0xFE72, 0xFE78,
    0xFE77, 0xFE7A, 0xFE7B, 0xFE7D, 0xFE7C, 0xFE80, 0xFE81, 0xFE82,
    0xFE83, 0xFE85, 0xFE86, 0xFE87, 0xFE88, 0xFE89, 0xFE8A, 0xFE8B,
    0xFE8D, 0xFE8C, 0xFE8F, 0xFE8E, 0xFE96, 0xFE93, 0xFE94, 0xFE95,
    0xFE97, 0xFE92, 0xFE98, 0xFE99, 0xFE9A, 0xFE9B, 0xFE9C, 0xFE9D,
    0xFE9E, 0xFE9F, 0xFE59, 0xFE61, 0xFE66, 0xFE67, 0xFE6D, 0xFE7E,
    0xFE90, 0xFEA0, 0xA2AB, 0xA2AC, 0xA2AD, 0xA2AE, 0xA2AF, 0xA2B0,
    0xA2E4, 0xA2EF, 0xA2F0, 0xA2FD, 0xA2FE, 0xA4F4, 0xA4F5, 0xA4F6,
    0xA4F7, 0xA4F8, 0xA4F9, 0xA4FA, 0xA4FB, 0xA4FC, 0xA4FD, 0xA4FE,
    0xA5F7, 0xA5F8, 0xA5F9, 0xA5FA, 0xA5FB, 0xA5FC, 0xA5FD, 0xA5FE,
    0xA6B9, 0xA6BA, 0xA6BB, 0xA6BC, 0xA6BD, 0xA6BE, 0xA6BF, 0xA6C0,
    0xA6D9, 0xA6DA, 0xA6DB, 0xA6DC, 0xA6DD, 0xA6DE, 0xA6DF, 0xA6EC,
    0xA6ED, 0xA6F3, 0xA6F6, 0xA6F7, 0xA6F8, 0xA6F9, 0xA6FA, 0xA6FB,
    0xA6FC, 0xA6FD, 0xA6FE, 0xA7C2, 0xA7C3, 0xA7C4, 0xA7C5, 0xA7C6,
    0xA7C7, 0xA7C8, 0xA7C9, 0xA7CA, 0xA7CB, 0xA7CC, 0xA7CD, 0xA7CE,
    0xA7CF, 0xA7D0, 0xA7F2, 0xA7F3, 0xA7F4, 0xA7F5, 0xA7F6, 0xA7F7,
    0xA7F8, 0xA7F9, 0xA7FA, 0xA7FB, 0xA7FC, 0xA7FD, 0xA7FE, 0xA896,
    0xA897, 0xA898, 0xA899, 0xA89A, 0xA89B, 0xA89C, 0xA89D, 0xA89E,
    0xA89F, 0xA8A0, 0xA8C1, 0xA8C2, 0xA8C3, 0xA8C4, 0xA8EA, 0xA8EB,
    0xA8EC, 0xA8ED, 0xA8EE, 0xA8EF, 0xA8F0, 0xA8F1, 0xA8F2, 0xA8F3,
    0xA8F4, 0xA8F5, 0xA8F6, 0xA8F7, 0xA8F8, 0xA8F9, 0xA8FA, 0xA8FB,
    0xA8FC, 0xA8FD, 0xA8FE, 0xA958, 0xA95B, 0xA95D, 0xA95E, 0xA95F,
    0xA997, 0xA998, 0xA999, 0xA99A, 0xA99B, 0xA99C, 0xA99D, 0xA99E,
    0xA99F, 0xA9A0, 0xA9A1, 0xA9A2, 0xA9A3, 0xA9F0, 0xA9F1, 0xA9F2,
    0xA9F3, 0xA9F4, 0xA9F5, 0xA9F6, 0xA9F7, 0xA9F8, 0xA9F9, 0xA9FA,
    0xA9FB, 0xA9FC, 0xA9FD, 0xA9FE, 0xD7FA, 0xD7FB, 0xD7FC, 0xD7FD,
    0xD7FE, 0xFE51, 0xFE52, 0xFE53, 0xFE59, 0xFE61, 0xFE66, 0xFE67,
    0xFE6C, 0xFE6D, 0xFE76, 0xFE7E, 0xFE90, 0xFE91, 0xFEA0, 0xA6D9,
    0xA6DB, 0xA6DA, 0xA6DC, 0xA6DD, 0xA6DE, 0xA6DF, 0xA6EC, 0xA6ED,
    0xA6F3,
};

/* End Unicode codepoints of blocks mapping consecutively to 4-byte multibyte blocks */
static const unsigned short gb18030_4_u_e[206] = {
    0x00A3, 0x00A6, 0x00AF, 0x00B6, 0x00D6, 0x00DF, 0x00E7, 0x00EB,
    0x00F1, 0x00F6, 0x00F8, 0x00FB, 0x0100, 0x0112, 0x011A, 0x012A,
    0x0143, 0x0147, 0x014C, 0x016A, 0x01CD, 0x01CF, 0x01D1, 0x01D3,
    0x01D5, 0x01D7, 0x01D9, 0x01DB, 0x01F8, 0x0250, 0x0260, 0x02C6,
    0x02C8, 0x02D8, 0x0390, 0x03A2, 0x03B0, 0x03C2, 0x0400, 0x040F,
    0x0450, 0x200F, 0x2012, 0x2017, 0x201B, 0x2024, 0x202F, 0x2031,
    0x2034, 0x203A, 0x20AB, 0x2102, 0x2104, 0x2108, 0x2115, 0x2120,
    0x215F, 0x216F, 0x218F, 0x2195, 0x2207, 0x220E, 0x2210, 0x2214,
    0x2219, 0x221C, 0x2222, 0x2224, 0x2226, 0x222D, 0x2233, 0x223C,
    0x2247, 0x224B, 0x2251, 0x225F, 0x2263, 0x226D, 0x2294, 0x2298,
    0x22A4, 0x22BE, 0x2311, 0x245F, 0x2473, 0x24FF, 0x254F, 0x2580,
    0x2592, 0x259F, 0x25B1, 0x25BB, 0x25C5, 0x25CA, 0x25CD, 0x25E1,
    0x2604, 0x2608, 0x263F, 0x2641, 0x2E80, 0x2E83, 0x2E87, 0x2E8A,
    0x2E96, 0x2EA6, 0x2EA9, 0x2EAD, 0x2EB2, 0x2EB5, 0x2EBA, 0x2EC9,
    0x2FEF, 0x2FFF, 0x3004, 0x301C, 0x3020, 0x303D, 0x3040, 0x309A,
    0x30A0, 0x30FB, 0x3104, 0x321F, 0x3230, 0x32A2, 0x338D, 0x339B,
    0x33A0, 0x33C3, 0x33CD, 0x33D0, 0x33D4, 0x3446, 0x3472, 0x359D,
    0x360D, 0x3619, 0x3917, 0x396D, 0x39CE, 0x39DE, 0x3A72, 0x3B4D,
    0x3C6D, 0x3CDF, 0x4055, 0x415E, 0x4336, 0x43AB, 0x43B0, 0x43DC,
    0x44D5, 0x464B, 0x4660, 0x4722, 0x4728, 0x477B, 0x478C, 0x4946,
    0x4979, 0x497C, 0x4981, 0x4984, 0x499A, 0x499E, 0x49B5, 0x4C76,
    0x4C9E, 0x4D12, 0x4DAD, 0x4DFF, 0xD7FF, 0xE76C, 0xE7C8, 0xE7F3,
    0xE815, 0xE81D, 0xE825, 0xE82A, 0xE830, 0xE83A, 0xE842, 0xE853,
    0xE863, 0xF92B, 0xF978, 0xF994, 0xF9E6, 0xF9F0, 0xFA0B, 0xFA10,
    0xFA12, 0xFA17, 0xFA1E, 0xFA22, 0xFA26, 0xFE2F, 0xFE32, 0xFE48,
    0xFE53, 0xFE58, 0xFE67, 0xFF00, 0xFFDF, 0xFFFF,
};

/* Cumulative gaps between Unicode blocks mapping consecutively to 4-byte multibyte blocks,
   used to adjust multibyte offsets */
static const unsigned short gb18030_4_mb_o[206] = {
        0,     1,     3,     5,     6,     7,     9,    12,
       14,    16,    17,    19,    20,    21,    22,    23,
       24,    25,    26,    27,    28,    29,    30,    31,
       32,    33,    34,    35,    36,    37,    38,    39,
       40,    43,    44,    61,    68,    85,    92,    93,
      157,   158,   159,   163,   165,   167,   169,   170,
      172,   173,   174,   175,   176,   177,   178,   179,
      180,   192,   202,   206,   210,   211,   212,   213,
      214,   215,   219,   220,   221,   226,   227,   231,
      232,   233,   234,   235,   237,   241,   243,   244,
      245,   246,   247,   248,   258,   298,   374,   410,
      425,   428,   430,   432,   434,   436,   437,   439,
      443,   445,   446,   447,   448,   449,   450,   451,
      453,   454,   455,   456,   457,   458,   460,   461,
      462,   474,   478,   497,   499,   508,   509,   592,
      596,   682,   685,   722,   732,   733,   734,   736,
      739,   740,   741,   742,   744,   745,   746,   747,
      748,   749,   750,   751,   752,   754,   755,   756,
      757,   758,   759,   760,   761,   762,   763,   764,
      765,   766,   767,   768,   769,   770,   771,   772,
      773,   774,   775,   777,   779,   780,   781,   783,
      784,   789,   796,   797, 21699, 25647, 25738, 25768,
    25801, 25804, 25805, 25806, 25808, 25810, 25811, 25812,
    25814, 25815, 25816, 25817, 25818, 25819, 25820, 25824,
    25825, 25827, 25828, 25831, 25833, 25836, 25838, 25856,
    25866, 25870, 25884, 25888, 25982, 25988,
};

#endif /* Z_GB18030_H */
