/*
 * Copyright (c) 2011 Joseph Gaeddert
 * Copyright (c) 2011 Virginia Polytechnic Institute & State University
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// 2/3-rate (12,8) Hamming code generated tables
//

// encoding table
unsigned short int hamming128_enc_gentab[256] = {
    0x0000, 0x0111, 0x0c12, 0x0d03, 0x0414, 0x0505, 0x0806, 0x0917, 
    0x0818, 0x0909, 0x040a, 0x051b, 0x0c0c, 0x0d1d, 0x001e, 0x010f, 
    0x0d20, 0x0c31, 0x0132, 0x0023, 0x0934, 0x0825, 0x0526, 0x0437, 
    0x0538, 0x0429, 0x092a, 0x083b, 0x012c, 0x003d, 0x0d3e, 0x0c2f, 
    0x0540, 0x0451, 0x0952, 0x0843, 0x0154, 0x0045, 0x0d46, 0x0c57, 
    0x0d58, 0x0c49, 0x014a, 0x005b, 0x094c, 0x085d, 0x055e, 0x044f, 
    0x0860, 0x0971, 0x0472, 0x0563, 0x0c74, 0x0d65, 0x0066, 0x0177, 
    0x0078, 0x0169, 0x0c6a, 0x0d7b, 0x046c, 0x057d, 0x087e, 0x096f, 
    0x0980, 0x0891, 0x0592, 0x0483, 0x0d94, 0x0c85, 0x0186, 0x0097, 
    0x0198, 0x0089, 0x0d8a, 0x0c9b, 0x058c, 0x049d, 0x099e, 0x088f, 
    0x04a0, 0x05b1, 0x08b2, 0x09a3, 0x00b4, 0x01a5, 0x0ca6, 0x0db7, 
    0x0cb8, 0x0da9, 0x00aa, 0x01bb, 0x08ac, 0x09bd, 0x04be, 0x05af, 
    0x0cc0, 0x0dd1, 0x00d2, 0x01c3, 0x08d4, 0x09c5, 0x04c6, 0x05d7, 
    0x04d8, 0x05c9, 0x08ca, 0x09db, 0x00cc, 0x01dd, 0x0cde, 0x0dcf, 
    0x01e0, 0x00f1, 0x0df2, 0x0ce3, 0x05f4, 0x04e5, 0x09e6, 0x08f7, 
    0x09f8, 0x08e9, 0x05ea, 0x04fb, 0x0dec, 0x0cfd, 0x01fe, 0x00ef, 
    0x0e00, 0x0f11, 0x0212, 0x0303, 0x0a14, 0x0b05, 0x0606, 0x0717, 
    0x0618, 0x0709, 0x0a0a, 0x0b1b, 0x020c, 0x031d, 0x0e1e, 0x0f0f, 
    0x0320, 0x0231, 0x0f32, 0x0e23, 0x0734, 0x0625, 0x0b26, 0x0a37, 
    0x0b38, 0x0a29, 0x072a, 0x063b, 0x0f2c, 0x0e3d, 0x033e, 0x022f, 
    0x0b40, 0x0a51, 0x0752, 0x0643, 0x0f54, 0x0e45, 0x0346, 0x0257, 
    0x0358, 0x0249, 0x0f4a, 0x0e5b, 0x074c, 0x065d, 0x0b5e, 0x0a4f, 
    0x0660, 0x0771, 0x0a72, 0x0b63, 0x0274, 0x0365, 0x0e66, 0x0f77, 
    0x0e78, 0x0f69, 0x026a, 0x037b, 0x0a6c, 0x0b7d, 0x067e, 0x076f, 
    0x0780, 0x0691, 0x0b92, 0x0a83, 0x0394, 0x0285, 0x0f86, 0x0e97, 
    0x0f98, 0x0e89, 0x038a, 0x029b, 0x0b8c, 0x0a9d, 0x079e, 0x068f, 
    0x0aa0, 0x0bb1, 0x06b2, 0x07a3, 0x0eb4, 0x0fa5, 0x02a6, 0x03b7, 
    0x02b8, 0x03a9, 0x0eaa, 0x0fbb, 0x06ac, 0x07bd, 0x0abe, 0x0baf, 
    0x02c0, 0x03d1, 0x0ed2, 0x0fc3, 0x06d4, 0x07c5, 0x0ac6, 0x0bd7, 
    0x0ad8, 0x0bc9, 0x06ca, 0x07db, 0x0ecc, 0x0fdd, 0x02de, 0x03cf, 
    0x0fe0, 0x0ef1, 0x03f2, 0x02e3, 0x0bf4, 0x0ae5, 0x07e6, 0x06f7, 
    0x07f8, 0x06e9, 0x0bea, 0x0afb, 0x03ec, 0x02fd, 0x0ffe, 0x0eef};

// nearest neighbors with Hamming distance 3 (for soft decoding)
unsigned char fecsoft_hamming128_n3[256][17] = {
    {0x01, 0x04, 0x06, 0x08, 0x0a, 0x13, 0x20, 0x25, 0x30, 0x40, 0x49, 0x50, 0x80, 0x82, 0x8c, 0x90, 0xe0},
    {0x00, 0x05, 0x07, 0x09, 0x0b, 0x12, 0x21, 0x24, 0x31, 0x41, 0x48, 0x51, 0x81, 0x83, 0x8d, 0x91, 0xe1},
    {0x03, 0x04, 0x06, 0x08, 0x0a, 0x11, 0x22, 0x27, 0x32, 0x42, 0x4b, 0x52, 0x80, 0x82, 0x8e, 0x92, 0xe2},
    {0x02, 0x05, 0x07, 0x09, 0x0b, 0x10, 0x23, 0x26, 0x33, 0x43, 0x4a, 0x53, 0x81, 0x83, 0x8f, 0x93, 0xe3},
    {0x00, 0x02, 0x05, 0x0c, 0x0e, 0x17, 0x21, 0x24, 0x34, 0x44, 0x4d, 0x54, 0x84, 0x86, 0x88, 0x94, 0xe4},
    {0x01, 0x03, 0x04, 0x0d, 0x0f, 0x16, 0x20, 0x25, 0x35, 0x45, 0x4c, 0x55, 0x85, 0x87, 0x89, 0x95, 0xe5},
    {0x00, 0x02, 0x07, 0x0c, 0x0e, 0x15, 0x23, 0x26, 0x36, 0x46, 0x4f, 0x56, 0x84, 0x86, 0x8a, 0x96, 0xe6},
    {0x01, 0x03, 0x06, 0x0d, 0x0f, 0x14, 0x22, 0x27, 0x37, 0x47, 0x4e, 0x57, 0x85, 0x87, 0x8b, 0x97, 0xe7},
    {0x00, 0x02, 0x09, 0x0c, 0x0e, 0x1b, 0x28, 0x2d, 0x38, 0x41, 0x48, 0x58, 0x84, 0x88, 0x8a, 0x98, 0xe8},
    {0x01, 0x03, 0x08, 0x0d, 0x0f, 0x1a, 0x29, 0x2c, 0x39, 0x40, 0x49, 0x59, 0x85, 0x89, 0x8b, 0x99, 0xe9},
    {0x00, 0x02, 0x0b, 0x0c, 0x0e, 0x19, 0x2a, 0x2f, 0x3a, 0x43, 0x4a, 0x5a, 0x86, 0x88, 0x8a, 0x9a, 0xea},
    {0x01, 0x03, 0x0a, 0x0d, 0x0f, 0x18, 0x2b, 0x2e, 0x3b, 0x42, 0x4b, 0x5b, 0x87, 0x89, 0x8b, 0x9b, 0xeb},
    {0x04, 0x06, 0x08, 0x0a, 0x0d, 0x1f, 0x29, 0x2c, 0x3c, 0x45, 0x4c, 0x5c, 0x80, 0x8c, 0x8e, 0x9c, 0xec},
    {0x05, 0x07, 0x09, 0x0b, 0x0c, 0x1e, 0x28, 0x2d, 0x3d, 0x44, 0x4d, 0x5d, 0x81, 0x8d, 0x8f, 0x9d, 0xed},
    {0x04, 0x06, 0x08, 0x0a, 0x0f, 0x1d, 0x2b, 0x2e, 0x3e, 0x47, 0x4e, 0x5e, 0x82, 0x8c, 0x8e, 0x9e, 0xee},
    {0x05, 0x07, 0x09, 0x0b, 0x0e, 0x1c, 0x2a, 0x2f, 0x3f, 0x46, 0x4f, 0x5f, 0x83, 0x8d, 0x8f, 0x9f, 0xef},
    {0x03, 0x11, 0x14, 0x16, 0x18, 0x1a, 0x20, 0x30, 0x35, 0x40, 0x50, 0x59, 0x80, 0x90, 0x92, 0x9c, 0xf0},
    {0x02, 0x10, 0x15, 0x17, 0x19, 0x1b, 0x21, 0x31, 0x34, 0x41, 0x51, 0x58, 0x81, 0x91, 0x93, 0x9d, 0xf1},
    {0x01, 0x13, 0x14, 0x16, 0x18, 0x1a, 0x22, 0x32, 0x37, 0x42, 0x52, 0x5b, 0x82, 0x90, 0x92, 0x9e, 0xf2},
    {0x00, 0x12, 0x15, 0x17, 0x19, 0x1b, 0x23, 0x33, 0x36, 0x43, 0x53, 0x5a, 0x83, 0x91, 0x93, 0x9f, 0xf3},
    {0x07, 0x10, 0x12, 0x15, 0x1c, 0x1e, 0x24, 0x31, 0x34, 0x44, 0x54, 0x5d, 0x84, 0x94, 0x96, 0x98, 0xf4},
    {0x06, 0x11, 0x13, 0x14, 0x1d, 0x1f, 0x25, 0x30, 0x35, 0x45, 0x55, 0x5c, 0x85, 0x95, 0x97, 0x99, 0xf5},
    {0x05, 0x10, 0x12, 0x17, 0x1c, 0x1e, 0x26, 0x33, 0x36, 0x46, 0x56, 0x5f, 0x86, 0x94, 0x96, 0x9a, 0xf6},
    {0x04, 0x11, 0x13, 0x16, 0x1d, 0x1f, 0x27, 0x32, 0x37, 0x47, 0x57, 0x5e, 0x87, 0x95, 0x97, 0x9b, 0xf7},
    {0x0b, 0x10, 0x12, 0x19, 0x1c, 0x1e, 0x28, 0x38, 0x3d, 0x48, 0x51, 0x58, 0x88, 0x94, 0x98, 0x9a, 0xf8},
    {0x0a, 0x11, 0x13, 0x18, 0x1d, 0x1f, 0x29, 0x39, 0x3c, 0x49, 0x50, 0x59, 0x89, 0x95, 0x99, 0x9b, 0xf9},
    {0x09, 0x10, 0x12, 0x1b, 0x1c, 0x1e, 0x2a, 0x3a, 0x3f, 0x4a, 0x53, 0x5a, 0x8a, 0x96, 0x98, 0x9a, 0xfa},
    {0x08, 0x11, 0x13, 0x1a, 0x1d, 0x1f, 0x2b, 0x3b, 0x3e, 0x4b, 0x52, 0x5b, 0x8b, 0x97, 0x99, 0x9b, 0xfb},
    {0x0f, 0x14, 0x16, 0x18, 0x1a, 0x1d, 0x2c, 0x39, 0x3c, 0x4c, 0x55, 0x5c, 0x8c, 0x90, 0x9c, 0x9e, 0xfc},
    {0x0e, 0x15, 0x17, 0x19, 0x1b, 0x1c, 0x2d, 0x38, 0x3d, 0x4d, 0x54, 0x5d, 0x8d, 0x91, 0x9d, 0x9f, 0xfd},
    {0x0d, 0x14, 0x16, 0x18, 0x1a, 0x1f, 0x2e, 0x3b, 0x3e, 0x4e, 0x57, 0x5e, 0x8e, 0x92, 0x9c, 0x9e, 0xfe},
    {0x0c, 0x15, 0x17, 0x19, 0x1b, 0x1e, 0x2f, 0x3a, 0x3f, 0x4f, 0x56, 0x5f, 0x8f, 0x93, 0x9d, 0x9f, 0xff},
    {0x00, 0x05, 0x10, 0x21, 0x24, 0x26, 0x28, 0x2a, 0x33, 0x60, 0x69, 0x70, 0xa0, 0xa2, 0xac, 0xb0, 0xc0},
    {0x01, 0x04, 0x11, 0x20, 0x25, 0x27, 0x29, 0x2b, 0x32, 0x61, 0x68, 0x71, 0xa1, 0xa3, 0xad, 0xb1, 0xc1},
    {0x02, 0x07, 0x12, 0x23, 0x24, 0x26, 0x28, 0x2a, 0x31, 0x62, 0x6b, 0x72, 0xa0, 0xa2, 0xae, 0xb2, 0xc2},
    {0x03, 0x06, 0x13, 0x22, 0x25, 0x27, 0x29, 0x2b, 0x30, 0x63, 0x6a, 0x73, 0xa1, 0xa3, 0xaf, 0xb3, 0xc3},
    {0x01, 0x04, 0x14, 0x20, 0x22, 0x25, 0x2c, 0x2e, 0x37, 0x64, 0x6d, 0x74, 0xa4, 0xa6, 0xa8, 0xb4, 0xc4},
    {0x00, 0x05, 0x15, 0x21, 0x23, 0x24, 0x2d, 0x2f, 0x36, 0x65, 0x6c, 0x75, 0xa5, 0xa7, 0xa9, 0xb5, 0xc5},
    {0x03, 0x06, 0x16, 0x20, 0x22, 0x27, 0x2c, 0x2e, 0x35, 0x66, 0x6f, 0x76, 0xa4, 0xa6, 0xaa, 0xb6, 0xc6},
    {0x02, 0x07, 0x17, 0x21, 0x23, 0x26, 0x2d, 0x2f, 0x34, 0x67, 0x6e, 0x77, 0xa5, 0xa7, 0xab, 0xb7, 0xc7},
    {0x08, 0x0d, 0x18, 0x20, 0x22, 0x29, 0x2c, 0x2e, 0x3b, 0x61, 0x68, 0x78, 0xa4, 0xa8, 0xaa, 0xb8, 0xc8},
    {0x09, 0x0c, 0x19, 0x21, 0x23, 0x28, 0x2d, 0x2f, 0x3a, 0x60, 0x69, 0x79, 0xa5, 0xa9, 0xab, 0xb9, 0xc9},
    {0x0a, 0x0f, 0x1a, 0x20, 0x22, 0x2b, 0x2c, 0x2e, 0x39, 0x63, 0x6a, 0x7a, 0xa6, 0xa8, 0xaa, 0xba, 0xca},
    {0x0b, 0x0e, 0x1b, 0x21, 0x23, 0x2a, 0x2d, 0x2f, 0x38, 0x62, 0x6b, 0x7b, 0xa7, 0xa9, 0xab, 0xbb, 0xcb},
    {0x09, 0x0c, 0x1c, 0x24, 0x26, 0x28, 0x2a, 0x2d, 0x3f, 0x65, 0x6c, 0x7c, 0xa0, 0xac, 0xae, 0xbc, 0xcc},
    {0x08, 0x0d, 0x1d, 0x25, 0x27, 0x29, 0x2b, 0x2c, 0x3e, 0x64, 0x6d, 0x7d, 0xa1, 0xad, 0xaf, 0xbd, 0xcd},
    {0x0b, 0x0e, 0x1e, 0x24, 0x26, 0x28, 0x2a, 0x2f, 0x3d, 0x67, 0x6e, 0x7e, 0xa2, 0xac, 0xae, 0xbe, 0xce},
    {0x0a, 0x0f, 0x1f, 0x25, 0x27, 0x29, 0x2b, 0x2e, 0x3c, 0x66, 0x6f, 0x7f, 0xa3, 0xad, 0xaf, 0xbf, 0xcf},
    {0x00, 0x10, 0x15, 0x23, 0x31, 0x34, 0x36, 0x38, 0x3a, 0x60, 0x70, 0x79, 0xa0, 0xb0, 0xb2, 0xbc, 0xd0},
    {0x01, 0x11, 0x14, 0x22, 0x30, 0x35, 0x37, 0x39, 0x3b, 0x61, 0x71, 0x78, 0xa1, 0xb1, 0xb3, 0xbd, 0xd1},
    {0x02, 0x12, 0x17, 0x21, 0x33, 0x34, 0x36, 0x38, 0x3a, 0x62, 0x72, 0x7b, 0xa2, 0xb0, 0xb2, 0xbe, 0xd2},
    {0x03, 0x13, 0x16, 0x20, 0x32, 0x35, 0x37, 0x39, 0x3b, 0x63, 0x73, 0x7a, 0xa3, 0xb1, 0xb3, 0xbf, 0xd3},
    {0x04, 0x11, 0x14, 0x27, 0x30, 0x32, 0x35, 0x3c, 0x3e, 0x64, 0x74, 0x7d, 0xa4, 0xb4, 0xb6, 0xb8, 0xd4},
    {0x05, 0x10, 0x15, 0x26, 0x31, 0x33, 0x34, 0x3d, 0x3f, 0x65, 0x75, 0x7c, 0xa5, 0xb5, 0xb7, 0xb9, 0xd5},
    {0x06, 0x13, 0x16, 0x25, 0x30, 0x32, 0x37, 0x3c, 0x3e, 0x66, 0x76, 0x7f, 0xa6, 0xb4, 0xb6, 0xba, 0xd6},
    {0x07, 0x12, 0x17, 0x24, 0x31, 0x33, 0x36, 0x3d, 0x3f, 0x67, 0x77, 0x7e, 0xa7, 0xb5, 0xb7, 0xbb, 0xd7},
    {0x08, 0x18, 0x1d, 0x2b, 0x30, 0x32, 0x39, 0x3c, 0x3e, 0x68, 0x71, 0x78, 0xa8, 0xb4, 0xb8, 0xba, 0xd8},
    {0x09, 0x19, 0x1c, 0x2a, 0x31, 0x33, 0x38, 0x3d, 0x3f, 0x69, 0x70, 0x79, 0xa9, 0xb5, 0xb9, 0xbb, 0xd9},
    {0x0a, 0x1a, 0x1f, 0x29, 0x30, 0x32, 0x3b, 0x3c, 0x3e, 0x6a, 0x73, 0x7a, 0xaa, 0xb6, 0xb8, 0xba, 0xda},
    {0x0b, 0x1b, 0x1e, 0x28, 0x31, 0x33, 0x3a, 0x3d, 0x3f, 0x6b, 0x72, 0x7b, 0xab, 0xb7, 0xb9, 0xbb, 0xdb},
    {0x0c, 0x19, 0x1c, 0x2f, 0x34, 0x36, 0x38, 0x3a, 0x3d, 0x6c, 0x75, 0x7c, 0xac, 0xb0, 0xbc, 0xbe, 0xdc},
    {0x0d, 0x18, 0x1d, 0x2e, 0x35, 0x37, 0x39, 0x3b, 0x3c, 0x6d, 0x74, 0x7d, 0xad, 0xb1, 0xbd, 0xbf, 0xdd},
    {0x0e, 0x1b, 0x1e, 0x2d, 0x34, 0x36, 0x38, 0x3a, 0x3f, 0x6e, 0x77, 0x7e, 0xae, 0xb2, 0xbc, 0xbe, 0xde},
    {0x0f, 0x1a, 0x1f, 0x2c, 0x35, 0x37, 0x39, 0x3b, 0x3e, 0x6f, 0x76, 0x7f, 0xaf, 0xb3, 0xbd, 0xbf, 0xdf},
    {0x00, 0x09, 0x10, 0x41, 0x44, 0x46, 0x48, 0x4a, 0x53, 0x60, 0x65, 0x70, 0xa0, 0xc0, 0xc2, 0xcc, 0xd0},
    {0x01, 0x08, 0x11, 0x40, 0x45, 0x47, 0x49, 0x4b, 0x52, 0x61, 0x64, 0x71, 0xa1, 0xc1, 0xc3, 0xcd, 0xd1},
    {0x02, 0x0b, 0x12, 0x43, 0x44, 0x46, 0x48, 0x4a, 0x51, 0x62, 0x67, 0x72, 0xa2, 0xc0, 0xc2, 0xce, 0xd2},
    {0x03, 0x0a, 0x13, 0x42, 0x45, 0x47, 0x49, 0x4b, 0x50, 0x63, 0x66, 0x73, 0xa3, 0xc1, 0xc3, 0xcf, 0xd3},
    {0x04, 0x0d, 0x14, 0x40, 0x42, 0x45, 0x4c, 0x4e, 0x57, 0x61, 0x64, 0x74, 0xa4, 0xc4, 0xc6, 0xc8, 0xd4},
    {0x05, 0x0c, 0x15, 0x41, 0x43, 0x44, 0x4d, 0x4f, 0x56, 0x60, 0x65, 0x75, 0xa5, 0xc5, 0xc7, 0xc9, 0xd5},
    {0x06, 0x0f, 0x16, 0x40, 0x42, 0x47, 0x4c, 0x4e, 0x55, 0x63, 0x66, 0x76, 0xa6, 0xc4, 0xc6, 0xca, 0xd6},
    {0x07, 0x0e, 0x17, 0x41, 0x43, 0x46, 0x4d, 0x4f, 0x54, 0x62, 0x67, 0x77, 0xa7, 0xc5, 0xc7, 0xcb, 0xd7},
    {0x01, 0x08, 0x18, 0x40, 0x42, 0x49, 0x4c, 0x4e, 0x5b, 0x68, 0x6d, 0x78, 0xa8, 0xc4, 0xc8, 0xca, 0xd8},
    {0x00, 0x09, 0x19, 0x41, 0x43, 0x48, 0x4d, 0x4f, 0x5a, 0x69, 0x6c, 0x79, 0xa9, 0xc5, 0xc9, 0xcb, 0xd9},
    {0x03, 0x0a, 0x1a, 0x40, 0x42, 0x4b, 0x4c, 0x4e, 0x59, 0x6a, 0x6f, 0x7a, 0xaa, 0xc6, 0xc8, 0xca, 0xda},
    {0x02, 0x0b, 0x1b, 0x41, 0x43, 0x4a, 0x4d, 0x4f, 0x58, 0x6b, 0x6e, 0x7b, 0xab, 0xc7, 0xc9, 0xcb, 0xdb},
    {0x05, 0x0c, 0x1c, 0x44, 0x46, 0x48, 0x4a, 0x4d, 0x5f, 0x69, 0x6c, 0x7c, 0xac, 0xc0, 0xcc, 0xce, 0xdc},
    {0x04, 0x0d, 0x1d, 0x45, 0x47, 0x49, 0x4b, 0x4c, 0x5e, 0x68, 0x6d, 0x7d, 0xad, 0xc1, 0xcd, 0xcf, 0xdd},
    {0x07, 0x0e, 0x1e, 0x44, 0x46, 0x48, 0x4a, 0x4f, 0x5d, 0x6b, 0x6e, 0x7e, 0xae, 0xc2, 0xcc, 0xce, 0xde},
    {0x06, 0x0f, 0x1f, 0x45, 0x47, 0x49, 0x4b, 0x4e, 0x5c, 0x6a, 0x6f, 0x7f, 0xaf, 0xc3, 0xcd, 0xcf, 0xdf},
    {0x00, 0x10, 0x19, 0x43, 0x51, 0x54, 0x56, 0x58, 0x5a, 0x60, 0x70, 0x75, 0xb0, 0xc0, 0xd0, 0xd2, 0xdc},
    {0x01, 0x11, 0x18, 0x42, 0x50, 0x55, 0x57, 0x59, 0x5b, 0x61, 0x71, 0x74, 0xb1, 0xc1, 0xd1, 0xd3, 0xdd},
    {0x02, 0x12, 0x1b, 0x41, 0x53, 0x54, 0x56, 0x58, 0x5a, 0x62, 0x72, 0x77, 0xb2, 0xc2, 0xd0, 0xd2, 0xde},
    {0x03, 0x13, 0x1a, 0x40, 0x52, 0x55, 0x57, 0x59, 0x5b, 0x63, 0x73, 0x76, 0xb3, 0xc3, 0xd1, 0xd3, 0xdf},
    {0x04, 0x14, 0x1d, 0x47, 0x50, 0x52, 0x55, 0x5c, 0x5e, 0x64, 0x71, 0x74, 0xb4, 0xc4, 0xd4, 0xd6, 0xd8},
    {0x05, 0x15, 0x1c, 0x46, 0x51, 0x53, 0x54, 0x5d, 0x5f, 0x65, 0x70, 0x75, 0xb5, 0xc5, 0xd5, 0xd7, 0xd9},
    {0x06, 0x16, 0x1f, 0x45, 0x50, 0x52, 0x57, 0x5c, 0x5e, 0x66, 0x73, 0x76, 0xb6, 0xc6, 0xd4, 0xd6, 0xda},
    {0x07, 0x17, 0x1e, 0x44, 0x51, 0x53, 0x56, 0x5d, 0x5f, 0x67, 0x72, 0x77, 0xb7, 0xc7, 0xd5, 0xd7, 0xdb},
    {0x08, 0x11, 0x18, 0x4b, 0x50, 0x52, 0x59, 0x5c, 0x5e, 0x68, 0x78, 0x7d, 0xb8, 0xc8, 0xd4, 0xd8, 0xda},
    {0x09, 0x10, 0x19, 0x4a, 0x51, 0x53, 0x58, 0x5d, 0x5f, 0x69, 0x79, 0x7c, 0xb9, 0xc9, 0xd5, 0xd9, 0xdb},
    {0x0a, 0x13, 0x1a, 0x49, 0x50, 0x52, 0x5b, 0x5c, 0x5e, 0x6a, 0x7a, 0x7f, 0xba, 0xca, 0xd6, 0xd8, 0xda},
    {0x0b, 0x12, 0x1b, 0x48, 0x51, 0x53, 0x5a, 0x5d, 0x5f, 0x6b, 0x7b, 0x7e, 0xbb, 0xcb, 0xd7, 0xd9, 0xdb},
    {0x0c, 0x15, 0x1c, 0x4f, 0x54, 0x56, 0x58, 0x5a, 0x5d, 0x6c, 0x79, 0x7c, 0xbc, 0xcc, 0xd0, 0xdc, 0xde},
    {0x0d, 0x14, 0x1d, 0x4e, 0x55, 0x57, 0x59, 0x5b, 0x5c, 0x6d, 0x78, 0x7d, 0xbd, 0xcd, 0xd1, 0xdd, 0xdf},
    {0x0e, 0x17, 0x1e, 0x4d, 0x54, 0x56, 0x58, 0x5a, 0x5f, 0x6e, 0x7b, 0x7e, 0xbe, 0xce, 0xd2, 0xdc, 0xde},
    {0x0f, 0x16, 0x1f, 0x4c, 0x55, 0x57, 0x59, 0x5b, 0x5e, 0x6f, 0x7a, 0x7f, 0xbf, 0xcf, 0xd3, 0xdd, 0xdf},
    {0x20, 0x29, 0x30, 0x40, 0x45, 0x50, 0x61, 0x64, 0x66, 0x68, 0x6a, 0x73, 0x80, 0xe0, 0xe2, 0xec, 0xf0},
    {0x21, 0x28, 0x31, 0x41, 0x44, 0x51, 0x60, 0x65, 0x67, 0x69, 0x6b, 0x72, 0x81, 0xe1, 0xe3, 0xed, 0xf1},
    {0x22, 0x2b, 0x32, 0x42, 0x47, 0x52, 0x63, 0x64, 0x66, 0x68, 0x6a, 0x71, 0x82, 0xe0, 0xe2, 0xee, 0xf2},
    {0x23, 0x2a, 0x33, 0x43, 0x46, 0x53, 0x62, 0x65, 0x67, 0x69, 0x6b, 0x70, 0x83, 0xe1, 0xe3, 0xef, 0xf3},
    {0x24, 0x2d, 0x34, 0x41, 0x44, 0x54, 0x60, 0x62, 0x65, 0x6c, 0x6e, 0x77, 0x84, 0xe4, 0xe6, 0xe8, 0xf4},
    {0x25, 0x2c, 0x35, 0x40, 0x45, 0x55, 0x61, 0x63, 0x64, 0x6d, 0x6f, 0x76, 0x85, 0xe5, 0xe7, 0xe9, 0xf5},
    {0x26, 0x2f, 0x36, 0x43, 0x46, 0x56, 0x60, 0x62, 0x67, 0x6c, 0x6e, 0x75, 0x86, 0xe4, 0xe6, 0xea, 0xf6},
    {0x27, 0x2e, 0x37, 0x42, 0x47, 0x57, 0x61, 0x63, 0x66, 0x6d, 0x6f, 0x74, 0x87, 0xe5, 0xe7, 0xeb, 0xf7},
    {0x21, 0x28, 0x38, 0x48, 0x4d, 0x58, 0x60, 0x62, 0x69, 0x6c, 0x6e, 0x7b, 0x88, 0xe4, 0xe8, 0xea, 0xf8},
    {0x20, 0x29, 0x39, 0x49, 0x4c, 0x59, 0x61, 0x63, 0x68, 0x6d, 0x6f, 0x7a, 0x89, 0xe5, 0xe9, 0xeb, 0xf9},
    {0x23, 0x2a, 0x3a, 0x4a, 0x4f, 0x5a, 0x60, 0x62, 0x6b, 0x6c, 0x6e, 0x79, 0x8a, 0xe6, 0xe8, 0xea, 0xfa},
    {0x22, 0x2b, 0x3b, 0x4b, 0x4e, 0x5b, 0x61, 0x63, 0x6a, 0x6d, 0x6f, 0x78, 0x8b, 0xe7, 0xe9, 0xeb, 0xfb},
    {0x25, 0x2c, 0x3c, 0x49, 0x4c, 0x5c, 0x64, 0x66, 0x68, 0x6a, 0x6d, 0x7f, 0x8c, 0xe0, 0xec, 0xee, 0xfc},
    {0x24, 0x2d, 0x3d, 0x48, 0x4d, 0x5d, 0x65, 0x67, 0x69, 0x6b, 0x6c, 0x7e, 0x8d, 0xe1, 0xed, 0xef, 0xfd},
    {0x27, 0x2e, 0x3e, 0x4b, 0x4e, 0x5e, 0x64, 0x66, 0x68, 0x6a, 0x6f, 0x7d, 0x8e, 0xe2, 0xec, 0xee, 0xfe},
    {0x26, 0x2f, 0x3f, 0x4a, 0x4f, 0x5f, 0x65, 0x67, 0x69, 0x6b, 0x6e, 0x7c, 0x8f, 0xe3, 0xed, 0xef, 0xff},
    {0x20, 0x30, 0x39, 0x40, 0x50, 0x55, 0x63, 0x71, 0x74, 0x76, 0x78, 0x7a, 0x90, 0xe0, 0xf0, 0xf2, 0xfc},
    {0x21, 0x31, 0x38, 0x41, 0x51, 0x54, 0x62, 0x70, 0x75, 0x77, 0x79, 0x7b, 0x91, 0xe1, 0xf1, 0xf3, 0xfd},
    {0x22, 0x32, 0x3b, 0x42, 0x52, 0x57, 0x61, 0x73, 0x74, 0x76, 0x78, 0x7a, 0x92, 0xe2, 0xf0, 0xf2, 0xfe},
    {0x23, 0x33, 0x3a, 0x43, 0x53, 0x56, 0x60, 0x72, 0x75, 0x77, 0x79, 0x7b, 0x93, 0xe3, 0xf1, 0xf3, 0xff},
    {0x24, 0x34, 0x3d, 0x44, 0x51, 0x54, 0x67, 0x70, 0x72, 0x75, 0x7c, 0x7e, 0x94, 0xe4, 0xf4, 0xf6, 0xf8},
    {0x25, 0x35, 0x3c, 0x45, 0x50, 0x55, 0x66, 0x71, 0x73, 0x74, 0x7d, 0x7f, 0x95, 0xe5, 0xf5, 0xf7, 0xf9},
    {0x26, 0x36, 0x3f, 0x46, 0x53, 0x56, 0x65, 0x70, 0x72, 0x77, 0x7c, 0x7e, 0x96, 0xe6, 0xf4, 0xf6, 0xfa},
    {0x27, 0x37, 0x3e, 0x47, 0x52, 0x57, 0x64, 0x71, 0x73, 0x76, 0x7d, 0x7f, 0x97, 0xe7, 0xf5, 0xf7, 0xfb},
    {0x28, 0x31, 0x38, 0x48, 0x58, 0x5d, 0x6b, 0x70, 0x72, 0x79, 0x7c, 0x7e, 0x98, 0xe8, 0xf4, 0xf8, 0xfa},
    {0x29, 0x30, 0x39, 0x49, 0x59, 0x5c, 0x6a, 0x71, 0x73, 0x78, 0x7d, 0x7f, 0x99, 0xe9, 0xf5, 0xf9, 0xfb},
    {0x2a, 0x33, 0x3a, 0x4a, 0x5a, 0x5f, 0x69, 0x70, 0x72, 0x7b, 0x7c, 0x7e, 0x9a, 0xea, 0xf6, 0xf8, 0xfa},
    {0x2b, 0x32, 0x3b, 0x4b, 0x5b, 0x5e, 0x68, 0x71, 0x73, 0x7a, 0x7d, 0x7f, 0x9b, 0xeb, 0xf7, 0xf9, 0xfb},
    {0x2c, 0x35, 0x3c, 0x4c, 0x59, 0x5c, 0x6f, 0x74, 0x76, 0x78, 0x7a, 0x7d, 0x9c, 0xec, 0xf0, 0xfc, 0xfe},
    {0x2d, 0x34, 0x3d, 0x4d, 0x58, 0x5d, 0x6e, 0x75, 0x77, 0x79, 0x7b, 0x7c, 0x9d, 0xed, 0xf1, 0xfd, 0xff},
    {0x2e, 0x37, 0x3e, 0x4e, 0x5b, 0x5e, 0x6d, 0x74, 0x76, 0x78, 0x7a, 0x7f, 0x9e, 0xee, 0xf2, 0xfc, 0xfe},
    {0x2f, 0x36, 0x3f, 0x4f, 0x5a, 0x5f, 0x6c, 0x75, 0x77, 0x79, 0x7b, 0x7e, 0x9f, 0xef, 0xf3, 0xfd, 0xff},
    {0x00, 0x02, 0x0c, 0x10, 0x60, 0x81, 0x84, 0x86, 0x88, 0x8a, 0x93, 0xa0, 0xa5, 0xb0, 0xc0, 0xc9, 0xd0},
    {0x01, 0x03, 0x0d, 0x11, 0x61, 0x80, 0x85, 0x87, 0x89, 0x8b, 0x92, 0xa1, 0xa4, 0xb1, 0xc1, 0xc8, 0xd1},
    {0x00, 0x02, 0x0e, 0x12, 0x62, 0x83, 0x84, 0x86, 0x88, 0x8a, 0x91, 0xa2, 0xa7, 0xb2, 0xc2, 0xcb, 0xd2},
    {0x01, 0x03, 0x0f, 0x13, 0x63, 0x82, 0x85, 0x87, 0x89, 0x8b, 0x90, 0xa3, 0xa6, 0xb3, 0xc3, 0xca, 0xd3},
    {0x04, 0x06, 0x08, 0x14, 0x64, 0x80, 0x82, 0x85, 0x8c, 0x8e, 0x97, 0xa1, 0xa4, 0xb4, 0xc4, 0xcd, 0xd4},
    {0x05, 0x07, 0x09, 0x15, 0x65, 0x81, 0x83, 0x84, 0x8d, 0x8f, 0x96, 0xa0, 0xa5, 0xb5, 0xc5, 0xcc, 0xd5},
    {0x04, 0x06, 0x0a, 0x16, 0x66, 0x80, 0x82, 0x87, 0x8c, 0x8e, 0x95, 0xa3, 0xa6, 0xb6, 0xc6, 0xcf, 0xd6},
    {0x05, 0x07, 0x0b, 0x17, 0x67, 0x81, 0x83, 0x86, 0x8d, 0x8f, 0x94, 0xa2, 0xa7, 0xb7, 0xc7, 0xce, 0xd7},
    {0x04, 0x08, 0x0a, 0x18, 0x68, 0x80, 0x82, 0x89, 0x8c, 0x8e, 0x9b, 0xa8, 0xad, 0xb8, 0xc1, 0xc8, 0xd8},
    {0x05, 0x09, 0x0b, 0x19, 0x69, 0x81, 0x83, 0x88, 0x8d, 0x8f, 0x9a, 0xa9, 0xac, 0xb9, 0xc0, 0xc9, 0xd9},
    {0x06, 0x08, 0x0a, 0x1a, 0x6a, 0x80, 0x82, 0x8b, 0x8c, 0x8e, 0x99, 0xaa, 0xaf, 0xba, 0xc3, 0xca, 0xda},
    {0x07, 0x09, 0x0b, 0x1b, 0x6b, 0x81, 0x83, 0x8a, 0x8d, 0x8f, 0x98, 0xab, 0xae, 0xbb, 0xc2, 0xcb, 0xdb},
    {0x00, 0x0c, 0x0e, 0x1c, 0x6c, 0x84, 0x86, 0x88, 0x8a, 0x8d, 0x9f, 0xa9, 0xac, 0xbc, 0xc5, 0xcc, 0xdc},
    {0x01, 0x0d, 0x0f, 0x1d, 0x6d, 0x85, 0x87, 0x89, 0x8b, 0x8c, 0x9e, 0xa8, 0xad, 0xbd, 0xc4, 0xcd, 0xdd},
    {0x02, 0x0c, 0x0e, 0x1e, 0x6e, 0x84, 0x86, 0x88, 0x8a, 0x8f, 0x9d, 0xab, 0xae, 0xbe, 0xc7, 0xce, 0xde},
    {0x03, 0x0d, 0x0f, 0x1f, 0x6f, 0x85, 0x87, 0x89, 0x8b, 0x8e, 0x9c, 0xaa, 0xaf, 0xbf, 0xc6, 0xcf, 0xdf},
    {0x00, 0x10, 0x12, 0x1c, 0x70, 0x83, 0x91, 0x94, 0x96, 0x98, 0x9a, 0xa0, 0xb0, 0xb5, 0xc0, 0xd0, 0xd9},
    {0x01, 0x11, 0x13, 0x1d, 0x71, 0x82, 0x90, 0x95, 0x97, 0x99, 0x9b, 0xa1, 0xb1, 0xb4, 0xc1, 0xd1, 0xd8},
    {0x02, 0x10, 0x12, 0x1e, 0x72, 0x81, 0x93, 0x94, 0x96, 0x98, 0x9a, 0xa2, 0xb2, 0xb7, 0xc2, 0xd2, 0xdb},
    {0x03, 0x11, 0x13, 0x1f, 0x73, 0x80, 0x92, 0x95, 0x97, 0x99, 0x9b, 0xa3, 0xb3, 0xb6, 0xc3, 0xd3, 0xda},
    {0x04, 0x14, 0x16, 0x18, 0x74, 0x87, 0x90, 0x92, 0x95, 0x9c, 0x9e, 0xa4, 0xb1, 0xb4, 0xc4, 0xd4, 0xdd},
    {0x05, 0x15, 0x17, 0x19, 0x75, 0x86, 0x91, 0x93, 0x94, 0x9d, 0x9f, 0xa5, 0xb0, 0xb5, 0xc5, 0xd5, 0xdc},
    {0x06, 0x14, 0x16, 0x1a, 0x76, 0x85, 0x90, 0x92, 0x97, 0x9c, 0x9e, 0xa6, 0xb3, 0xb6, 0xc6, 0xd6, 0xdf},
    {0x07, 0x15, 0x17, 0x1b, 0x77, 0x84, 0x91, 0x93, 0x96, 0x9d, 0x9f, 0xa7, 0xb2, 0xb7, 0xc7, 0xd7, 0xde},
    {0x08, 0x14, 0x18, 0x1a, 0x78, 0x8b, 0x90, 0x92, 0x99, 0x9c, 0x9e, 0xa8, 0xb8, 0xbd, 0xc8, 0xd1, 0xd8},
    {0x09, 0x15, 0x19, 0x1b, 0x79, 0x8a, 0x91, 0x93, 0x98, 0x9d, 0x9f, 0xa9, 0xb9, 0xbc, 0xc9, 0xd0, 0xd9},
    {0x0a, 0x16, 0x18, 0x1a, 0x7a, 0x89, 0x90, 0x92, 0x9b, 0x9c, 0x9e, 0xaa, 0xba, 0xbf, 0xca, 0xd3, 0xda},
    {0x0b, 0x17, 0x19, 0x1b, 0x7b, 0x88, 0x91, 0x93, 0x9a, 0x9d, 0x9f, 0xab, 0xbb, 0xbe, 0xcb, 0xd2, 0xdb},
    {0x0c, 0x10, 0x1c, 0x1e, 0x7c, 0x8f, 0x94, 0x96, 0x98, 0x9a, 0x9d, 0xac, 0xb9, 0xbc, 0xcc, 0xd5, 0xdc},
    {0x0d, 0x11, 0x1d, 0x1f, 0x7d, 0x8e, 0x95, 0x97, 0x99, 0x9b, 0x9c, 0xad, 0xb8, 0xbd, 0xcd, 0xd4, 0xdd},
    {0x0e, 0x12, 0x1c, 0x1e, 0x7e, 0x8d, 0x94, 0x96, 0x98, 0x9a, 0x9f, 0xae, 0xbb, 0xbe, 0xce, 0xd7, 0xde},
    {0x0f, 0x13, 0x1d, 0x1f, 0x7f, 0x8c, 0x95, 0x97, 0x99, 0x9b, 0x9e, 0xaf, 0xba, 0xbf, 0xcf, 0xd6, 0xdf},
    {0x20, 0x22, 0x2c, 0x30, 0x40, 0x80, 0x85, 0x90, 0xa1, 0xa4, 0xa6, 0xa8, 0xaa, 0xb3, 0xe0, 0xe9, 0xf0},
    {0x21, 0x23, 0x2d, 0x31, 0x41, 0x81, 0x84, 0x91, 0xa0, 0xa5, 0xa7, 0xa9, 0xab, 0xb2, 0xe1, 0xe8, 0xf1},
    {0x20, 0x22, 0x2e, 0x32, 0x42, 0x82, 0x87, 0x92, 0xa3, 0xa4, 0xa6, 0xa8, 0xaa, 0xb1, 0xe2, 0xeb, 0xf2},
    {0x21, 0x23, 0x2f, 0x33, 0x43, 0x83, 0x86, 0x93, 0xa2, 0xa5, 0xa7, 0xa9, 0xab, 0xb0, 0xe3, 0xea, 0xf3},
    {0x24, 0x26, 0x28, 0x34, 0x44, 0x81, 0x84, 0x94, 0xa0, 0xa2, 0xa5, 0xac, 0xae, 0xb7, 0xe4, 0xed, 0xf4},
    {0x25, 0x27, 0x29, 0x35, 0x45, 0x80, 0x85, 0x95, 0xa1, 0xa3, 0xa4, 0xad, 0xaf, 0xb6, 0xe5, 0xec, 0xf5},
    {0x24, 0x26, 0x2a, 0x36, 0x46, 0x83, 0x86, 0x96, 0xa0, 0xa2, 0xa7, 0xac, 0xae, 0xb5, 0xe6, 0xef, 0xf6},
    {0x25, 0x27, 0x2b, 0x37, 0x47, 0x82, 0x87, 0x97, 0xa1, 0xa3, 0xa6, 0xad, 0xaf, 0xb4, 0xe7, 0xee, 0xf7},
    {0x24, 0x28, 0x2a, 0x38, 0x48, 0x88, 0x8d, 0x98, 0xa0, 0xa2, 0xa9, 0xac, 0xae, 0xbb, 0xe1, 0xe8, 0xf8},
    {0x25, 0x29, 0x2b, 0x39, 0x49, 0x89, 0x8c, 0x99, 0xa1, 0xa3, 0xa8, 0xad, 0xaf, 0xba, 0xe0, 0xe9, 0xf9},
    {0x26, 0x28, 0x2a, 0x3a, 0x4a, 0x8a, 0x8f, 0x9a, 0xa0, 0xa2, 0xab, 0xac, 0xae, 0xb9, 0xe3, 0xea, 0xfa},
    {0x27, 0x29, 0x2b, 0x3b, 0x4b, 0x8b, 0x8e, 0x9b, 0xa1, 0xa3, 0xaa, 0xad, 0xaf, 0xb8, 0xe2, 0xeb, 0xfb},
    {0x20, 0x2c, 0x2e, 0x3c, 0x4c, 0x89, 0x8c, 0x9c, 0xa4, 0xa6, 0xa8, 0xaa, 0xad, 0xbf, 0xe5, 0xec, 0xfc},
    {0x21, 0x2d, 0x2f, 0x3d, 0x4d, 0x88, 0x8d, 0x9d, 0xa5, 0xa7, 0xa9, 0xab, 0xac, 0xbe, 0xe4, 0xed, 0xfd},
    {0x22, 0x2c, 0x2e, 0x3e, 0x4e, 0x8b, 0x8e, 0x9e, 0xa4, 0xa6, 0xa8, 0xaa, 0xaf, 0xbd, 0xe7, 0xee, 0xfe},
    {0x23, 0x2d, 0x2f, 0x3f, 0x4f, 0x8a, 0x8f, 0x9f, 0xa5, 0xa7, 0xa9, 0xab, 0xae, 0xbc, 0xe6, 0xef, 0xff},
    {0x20, 0x30, 0x32, 0x3c, 0x50, 0x80, 0x90, 0x95, 0xa3, 0xb1, 0xb4, 0xb6, 0xb8, 0xba, 0xe0, 0xf0, 0xf9},
    {0x21, 0x31, 0x33, 0x3d, 0x51, 0x81, 0x91, 0x94, 0xa2, 0xb0, 0xb5, 0xb7, 0xb9, 0xbb, 0xe1, 0xf1, 0xf8},
    {0x22, 0x30, 0x32, 0x3e, 0x52, 0x82, 0x92, 0x97, 0xa1, 0xb3, 0xb4, 0xb6, 0xb8, 0xba, 0xe2, 0xf2, 0xfb},
    {0x23, 0x31, 0x33, 0x3f, 0x53, 0x83, 0x93, 0x96, 0xa0, 0xb2, 0xb5, 0xb7, 0xb9, 0xbb, 0xe3, 0xf3, 0xfa},
    {0x24, 0x34, 0x36, 0x38, 0x54, 0x84, 0x91, 0x94, 0xa7, 0xb0, 0xb2, 0xb5, 0xbc, 0xbe, 0xe4, 0xf4, 0xfd},
    {0x25, 0x35, 0x37, 0x39, 0x55, 0x85, 0x90, 0x95, 0xa6, 0xb1, 0xb3, 0xb4, 0xbd, 0xbf, 0xe5, 0xf5, 0xfc},
    {0x26, 0x34, 0x36, 0x3a, 0x56, 0x86, 0x93, 0x96, 0xa5, 0xb0, 0xb2, 0xb7, 0xbc, 0xbe, 0xe6, 0xf6, 0xff},
    {0x27, 0x35, 0x37, 0x3b, 0x57, 0x87, 0x92, 0x97, 0xa4, 0xb1, 0xb3, 0xb6, 0xbd, 0xbf, 0xe7, 0xf7, 0xfe},
    {0x28, 0x34, 0x38, 0x3a, 0x58, 0x88, 0x98, 0x9d, 0xab, 0xb0, 0xb2, 0xb9, 0xbc, 0xbe, 0xe8, 0xf1, 0xf8},
    {0x29, 0x35, 0x39, 0x3b, 0x59, 0x89, 0x99, 0x9c, 0xaa, 0xb1, 0xb3, 0xb8, 0xbd, 0xbf, 0xe9, 0xf0, 0xf9},
    {0x2a, 0x36, 0x38, 0x3a, 0x5a, 0x8a, 0x9a, 0x9f, 0xa9, 0xb0, 0xb2, 0xbb, 0xbc, 0xbe, 0xea, 0xf3, 0xfa},
    {0x2b, 0x37, 0x39, 0x3b, 0x5b, 0x8b, 0x9b, 0x9e, 0xa8, 0xb1, 0xb3, 0xba, 0xbd, 0xbf, 0xeb, 0xf2, 0xfb},
    {0x2c, 0x30, 0x3c, 0x3e, 0x5c, 0x8c, 0x99, 0x9c, 0xaf, 0xb4, 0xb6, 0xb8, 0xba, 0xbd, 0xec, 0xf5, 0xfc},
    {0x2d, 0x31, 0x3d, 0x3f, 0x5d, 0x8d, 0x98, 0x9d, 0xae, 0xb5, 0xb7, 0xb9, 0xbb, 0xbc, 0xed, 0xf4, 0xfd},
    {0x2e, 0x32, 0x3c, 0x3e, 0x5e, 0x8e, 0x9b, 0x9e, 0xad, 0xb4, 0xb6, 0xb8, 0xba, 0xbf, 0xee, 0xf7, 0xfe},
    {0x2f, 0x33, 0x3d, 0x3f, 0x5f, 0x8f, 0x9a, 0x9f, 0xac, 0xb5, 0xb7, 0xb9, 0xbb, 0xbe, 0xef, 0xf6, 0xff},
    {0x20, 0x40, 0x42, 0x4c, 0x50, 0x80, 0x89, 0x90, 0xc1, 0xc4, 0xc6, 0xc8, 0xca, 0xd3, 0xe0, 0xe5, 0xf0},
    {0x21, 0x41, 0x43, 0x4d, 0x51, 0x81, 0x88, 0x91, 0xc0, 0xc5, 0xc7, 0xc9, 0xcb, 0xd2, 0xe1, 0xe4, 0xf1},
    {0x22, 0x40, 0x42, 0x4e, 0x52, 0x82, 0x8b, 0x92, 0xc3, 0xc4, 0xc6, 0xc8, 0xca, 0xd1, 0xe2, 0xe7, 0xf2},
    {0x23, 0x41, 0x43, 0x4f, 0x53, 0x83, 0x8a, 0x93, 0xc2, 0xc5, 0xc7, 0xc9, 0xcb, 0xd0, 0xe3, 0xe6, 0xf3},
    {0x24, 0x44, 0x46, 0x48, 0x54, 0x84, 0x8d, 0x94, 0xc0, 0xc2, 0xc5, 0xcc, 0xce, 0xd7, 0xe1, 0xe4, 0xf4},
    {0x25, 0x45, 0x47, 0x49, 0x55, 0x85, 0x8c, 0x95, 0xc1, 0xc3, 0xc4, 0xcd, 0xcf, 0xd6, 0xe0, 0xe5, 0xf5},
    {0x26, 0x44, 0x46, 0x4a, 0x56, 0x86, 0x8f, 0x96, 0xc0, 0xc2, 0xc7, 0xcc, 0xce, 0xd5, 0xe3, 0xe6, 0xf6},
    {0x27, 0x45, 0x47, 0x4b, 0x57, 0x87, 0x8e, 0x97, 0xc1, 0xc3, 0xc6, 0xcd, 0xcf, 0xd4, 0xe2, 0xe7, 0xf7},
    {0x28, 0x44, 0x48, 0x4a, 0x58, 0x81, 0x88, 0x98, 0xc0, 0xc2, 0xc9, 0xcc, 0xce, 0xdb, 0xe8, 0xed, 0xf8},
    {0x29, 0x45, 0x49, 0x4b, 0x59, 0x80, 0x89, 0x99, 0xc1, 0xc3, 0xc8, 0xcd, 0xcf, 0xda, 0xe9, 0xec, 0xf9},
    {0x2a, 0x46, 0x48, 0x4a, 0x5a, 0x83, 0x8a, 0x9a, 0xc0, 0xc2, 0xcb, 0xcc, 0xce, 0xd9, 0xea, 0xef, 0xfa},
    {0x2b, 0x47, 0x49, 0x4b, 0x5b, 0x82, 0x8b, 0x9b, 0xc1, 0xc3, 0xca, 0xcd, 0xcf, 0xd8, 0xeb, 0xee, 0xfb},
    {0x2c, 0x40, 0x4c, 0x4e, 0x5c, 0x85, 0x8c, 0x9c, 0xc4, 0xc6, 0xc8, 0xca, 0xcd, 0xdf, 0xe9, 0xec, 0xfc},
    {0x2d, 0x41, 0x4d, 0x4f, 0x5d, 0x84, 0x8d, 0x9d, 0xc5, 0xc7, 0xc9, 0xcb, 0xcc, 0xde, 0xe8, 0xed, 0xfd},
    {0x2e, 0x42, 0x4c, 0x4e, 0x5e, 0x87, 0x8e, 0x9e, 0xc4, 0xc6, 0xc8, 0xca, 0xcf, 0xdd, 0xeb, 0xee, 0xfe},
    {0x2f, 0x43, 0x4d, 0x4f, 0x5f, 0x86, 0x8f, 0x9f, 0xc5, 0xc7, 0xc9, 0xcb, 0xce, 0xdc, 0xea, 0xef, 0xff},
    {0x30, 0x40, 0x50, 0x52, 0x5c, 0x80, 0x90, 0x99, 0xc3, 0xd1, 0xd4, 0xd6, 0xd8, 0xda, 0xe0, 0xf0, 0xf5},
    {0x31, 0x41, 0x51, 0x53, 0x5d, 0x81, 0x91, 0x98, 0xc2, 0xd0, 0xd5, 0xd7, 0xd9, 0xdb, 0xe1, 0xf1, 0xf4},
    {0x32, 0x42, 0x50, 0x52, 0x5e, 0x82, 0x92, 0x9b, 0xc1, 0xd3, 0xd4, 0xd6, 0xd8, 0xda, 0xe2, 0xf2, 0xf7},
    {0x33, 0x43, 0x51, 0x53, 0x5f, 0x83, 0x93, 0x9a, 0xc0, 0xd2, 0xd5, 0xd7, 0xd9, 0xdb, 0xe3, 0xf3, 0xf6},
    {0x34, 0x44, 0x54, 0x56, 0x58, 0x84, 0x94, 0x9d, 0xc7, 0xd0, 0xd2, 0xd5, 0xdc, 0xde, 0xe4, 0xf1, 0xf4},
    {0x35, 0x45, 0x55, 0x57, 0x59, 0x85, 0x95, 0x9c, 0xc6, 0xd1, 0xd3, 0xd4, 0xdd, 0xdf, 0xe5, 0xf0, 0xf5},
    {0x36, 0x46, 0x54, 0x56, 0x5a, 0x86, 0x96, 0x9f, 0xc5, 0xd0, 0xd2, 0xd7, 0xdc, 0xde, 0xe6, 0xf3, 0xf6},
    {0x37, 0x47, 0x55, 0x57, 0x5b, 0x87, 0x97, 0x9e, 0xc4, 0xd1, 0xd3, 0xd6, 0xdd, 0xdf, 0xe7, 0xf2, 0xf7},
    {0x38, 0x48, 0x54, 0x58, 0x5a, 0x88, 0x91, 0x98, 0xcb, 0xd0, 0xd2, 0xd9, 0xdc, 0xde, 0xe8, 0xf8, 0xfd},
    {0x39, 0x49, 0x55, 0x59, 0x5b, 0x89, 0x90, 0x99, 0xca, 0xd1, 0xd3, 0xd8, 0xdd, 0xdf, 0xe9, 0xf9, 0xfc},
    {0x3a, 0x4a, 0x56, 0x58, 0x5a, 0x8a, 0x93, 0x9a, 0xc9, 0xd0, 0xd2, 0xdb, 0xdc, 0xde, 0xea, 0xfa, 0xff},
    {0x3b, 0x4b, 0x57, 0x59, 0x5b, 0x8b, 0x92, 0x9b, 0xc8, 0xd1, 0xd3, 0xda, 0xdd, 0xdf, 0xeb, 0xfb, 0xfe},
    {0x3c, 0x4c, 0x50, 0x5c, 0x5e, 0x8c, 0x95, 0x9c, 0xcf, 0xd4, 0xd6, 0xd8, 0xda, 0xdd, 0xec, 0xf9, 0xfc},
    {0x3d, 0x4d, 0x51, 0x5d, 0x5f, 0x8d, 0x94, 0x9d, 0xce, 0xd5, 0xd7, 0xd9, 0xdb, 0xdc, 0xed, 0xf8, 0xfd},
    {0x3e, 0x4e, 0x52, 0x5c, 0x5e, 0x8e, 0x97, 0x9e, 0xcd, 0xd4, 0xd6, 0xd8, 0xda, 0xdf, 0xee, 0xfb, 0xfe},
    {0x3f, 0x4f, 0x53, 0x5d, 0x5f, 0x8f, 0x96, 0x9f, 0xcc, 0xd5, 0xd7, 0xd9, 0xdb, 0xde, 0xef, 0xfa, 0xff},
    {0x00, 0x60, 0x62, 0x6c, 0x70, 0xa0, 0xa9, 0xb0, 0xc0, 0xc5, 0xd0, 0xe1, 0xe4, 0xe6, 0xe8, 0xea, 0xf3},
    {0x01, 0x61, 0x63, 0x6d, 0x71, 0xa1, 0xa8, 0xb1, 0xc1, 0xc4, 0xd1, 0xe0, 0xe5, 0xe7, 0xe9, 0xeb, 0xf2},
    {0x02, 0x60, 0x62, 0x6e, 0x72, 0xa2, 0xab, 0xb2, 0xc2, 0xc7, 0xd2, 0xe3, 0xe4, 0xe6, 0xe8, 0xea, 0xf1},
    {0x03, 0x61, 0x63, 0x6f, 0x73, 0xa3, 0xaa, 0xb3, 0xc3, 0xc6, 0xd3, 0xe2, 0xe5, 0xe7, 0xe9, 0xeb, 0xf0},
    {0x04, 0x64, 0x66, 0x68, 0x74, 0xa4, 0xad, 0xb4, 0xc1, 0xc4, 0xd4, 0xe0, 0xe2, 0xe5, 0xec, 0xee, 0xf7},
    {0x05, 0x65, 0x67, 0x69, 0x75, 0xa5, 0xac, 0xb5, 0xc0, 0xc5, 0xd5, 0xe1, 0xe3, 0xe4, 0xed, 0xef, 0xf6},
    {0x06, 0x64, 0x66, 0x6a, 0x76, 0xa6, 0xaf, 0xb6, 0xc3, 0xc6, 0xd6, 0xe0, 0xe2, 0xe7, 0xec, 0xee, 0xf5},
    {0x07, 0x65, 0x67, 0x6b, 0x77, 0xa7, 0xae, 0xb7, 0xc2, 0xc7, 0xd7, 0xe1, 0xe3, 0xe6, 0xed, 0xef, 0xf4},
    {0x08, 0x64, 0x68, 0x6a, 0x78, 0xa1, 0xa8, 0xb8, 0xc8, 0xcd, 0xd8, 0xe0, 0xe2, 0xe9, 0xec, 0xee, 0xfb},
    {0x09, 0x65, 0x69, 0x6b, 0x79, 0xa0, 0xa9, 0xb9, 0xc9, 0xcc, 0xd9, 0xe1, 0xe3, 0xe8, 0xed, 0xef, 0xfa},
    {0x0a, 0x66, 0x68, 0x6a, 0x7a, 0xa3, 0xaa, 0xba, 0xca, 0xcf, 0xda, 0xe0, 0xe2, 0xeb, 0xec, 0xee, 0xf9},
    {0x0b, 0x67, 0x69, 0x6b, 0x7b, 0xa2, 0xab, 0xbb, 0xcb, 0xce, 0xdb, 0xe1, 0xe3, 0xea, 0xed, 0xef, 0xf8},
    {0x0c, 0x60, 0x6c, 0x6e, 0x7c, 0xa5, 0xac, 0xbc, 0xc9, 0xcc, 0xdc, 0xe4, 0xe6, 0xe8, 0xea, 0xed, 0xff},
    {0x0d, 0x61, 0x6d, 0x6f, 0x7d, 0xa4, 0xad, 0xbd, 0xc8, 0xcd, 0xdd, 0xe5, 0xe7, 0xe9, 0xeb, 0xec, 0xfe},
    {0x0e, 0x62, 0x6c, 0x6e, 0x7e, 0xa7, 0xae, 0xbe, 0xcb, 0xce, 0xde, 0xe4, 0xe6, 0xe8, 0xea, 0xef, 0xfd},
    {0x0f, 0x63, 0x6d, 0x6f, 0x7f, 0xa6, 0xaf, 0xbf, 0xca, 0xcf, 0xdf, 0xe5, 0xe7, 0xe9, 0xeb, 0xee, 0xfc},
    {0x10, 0x60, 0x70, 0x72, 0x7c, 0xa0, 0xb0, 0xb9, 0xc0, 0xd0, 0xd5, 0xe3, 0xf1, 0xf4, 0xf6, 0xf8, 0xfa},
    {0x11, 0x61, 0x71, 0x73, 0x7d, 0xa1, 0xb1, 0xb8, 0xc1, 0xd1, 0xd4, 0xe2, 0xf0, 0xf5, 0xf7, 0xf9, 0xfb},
    {0x12, 0x62, 0x70, 0x72, 0x7e, 0xa2, 0xb2, 0xbb, 0xc2, 0xd2, 0xd7, 0xe1, 0xf3, 0xf4, 0xf6, 0xf8, 0xfa},
    {0x13, 0x63, 0x71, 0x73, 0x7f, 0xa3, 0xb3, 0xba, 0xc3, 0xd3, 0xd6, 0xe0, 0xf2, 0xf5, 0xf7, 0xf9, 0xfb},
    {0x14, 0x64, 0x74, 0x76, 0x78, 0xa4, 0xb4, 0xbd, 0xc4, 0xd1, 0xd4, 0xe7, 0xf0, 0xf2, 0xf5, 0xfc, 0xfe},
    {0x15, 0x65, 0x75, 0x77, 0x79, 0xa5, 0xb5, 0xbc, 0xc5, 0xd0, 0xd5, 0xe6, 0xf1, 0xf3, 0xf4, 0xfd, 0xff},
    {0x16, 0x66, 0x74, 0x76, 0x7a, 0xa6, 0xb6, 0xbf, 0xc6, 0xd3, 0xd6, 0xe5, 0xf0, 0xf2, 0xf7, 0xfc, 0xfe},
    {0x17, 0x67, 0x75, 0x77, 0x7b, 0xa7, 0xb7, 0xbe, 0xc7, 0xd2, 0xd7, 0xe4, 0xf1, 0xf3, 0xf6, 0xfd, 0xff},
    {0x18, 0x68, 0x74, 0x78, 0x7a, 0xa8, 0xb1, 0xb8, 0xc8, 0xd8, 0xdd, 0xeb, 0xf0, 0xf2, 0xf9, 0xfc, 0xfe},
    {0x19, 0x69, 0x75, 0x79, 0x7b, 0xa9, 0xb0, 0xb9, 0xc9, 0xd9, 0xdc, 0xea, 0xf1, 0xf3, 0xf8, 0xfd, 0xff},
    {0x1a, 0x6a, 0x76, 0x78, 0x7a, 0xaa, 0xb3, 0xba, 0xca, 0xda, 0xdf, 0xe9, 0xf0, 0xf2, 0xfb, 0xfc, 0xfe},
    {0x1b, 0x6b, 0x77, 0x79, 0x7b, 0xab, 0xb2, 0xbb, 0xcb, 0xdb, 0xde, 0xe8, 0xf1, 0xf3, 0xfa, 0xfd, 0xff},
    {0x1c, 0x6c, 0x70, 0x7c, 0x7e, 0xac, 0xb5, 0xbc, 0xcc, 0xd9, 0xdc, 0xef, 0xf4, 0xf6, 0xf8, 0xfa, 0xfd},
    {0x1d, 0x6d, 0x71, 0x7d, 0x7f, 0xad, 0xb4, 0xbd, 0xcd, 0xd8, 0xdd, 0xee, 0xf5, 0xf7, 0xf9, 0xfb, 0xfc},
    {0x1e, 0x6e, 0x72, 0x7c, 0x7e, 0xae, 0xb7, 0xbe, 0xce, 0xdb, 0xde, 0xed, 0xf4, 0xf6, 0xf8, 0xfa, 0xff},
    {0x1f, 0x6f, 0x73, 0x7d, 0x7f, 0xaf, 0xb6, 0xbf, 0xcf, 0xda, 0xdf, 0xec, 0xf5, 0xf7, 0xf9, 0xfb, 0xfe}};

