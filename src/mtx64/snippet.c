#include <stdint.h>
#include <stdio.h>
#include <string.h>

uint32_t gray1[32] = {
        0x000, 0x060, 0x0C0, 0x0A0, 0x180, 0x1E0, 0x140, 0x120,
        0x300, 0x360, 0x3C0, 0x3A0, 0x280, 0x2E0, 0x240, 0x220,
        0x600, 0x660, 0x6C0, 0x6A0, 0x780, 0x7E0, 0x740, 0x720,
        0x500, 0x560, 0x5C0, 0x5A0, 0x480, 0x4E0, 0x440, 0x420 };
uint32_t gray2[64] = {
        0x000, 0x001, 0x003, 0x002, 0x006, 0x007, 0x005, 0x004,
        0x00C, 0x00D, 0x00F, 0x00E, 0x00A, 0x00B, 0x009, 0x008,
        0x018, 0x019, 0x01B, 0x01A, 0x01E, 0x01F, 0x01D, 0x01C,
        0x014, 0x015, 0x017, 0x016, 0x012, 0x013, 0x011, 0x010,
        0x030, 0x031, 0x033, 0x032, 0x036, 0x037, 0x035, 0x034,
        0x03C, 0x03D, 0x03F, 0x03E, 0x03A, 0x03B, 0x039, 0x038,
        0x028, 0x029, 0x02B, 0x02A, 0x02E, 0x02F, 0x02D, 0x02C,
        0x024, 0x025, 0x027, 0x026, 0x022, 0x023, 0x021, 0x020 };

uint8_t bix1[] = {
// 0  1  2  3  4   5   6   7  8   9  10  11  12  13  14  15
   0,22,23,99,24,100,101,102,25,111,125,126,112,113,186,218,
// 16  17  18  19  20  21  22  23 24 25 26 27 28 29 30 31
   26,127,124,128,219,157,189,221, 8, 8, 8, 8, 8, 8, 8, 8,
// 32  33  34  35  36  37  38  39      40-47
   27,123,155,187,223,250,158,190,9,9,9,9,9,9,9,9,
// 48-63
   9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,
// 64  65  66  67  68  69  70  71       72-79
   28,222,159,251,253,254,255,122,10,10,10,10,10,10,10,10,
//  80-95
   10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
//  96-111
   10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
//  112-127
   10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
// 128 129 130 131 132-143
    29,191,154,156,11,11,11,11,11,11,11,11,11,11,11,11,
    11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
    11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
    11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
    11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
    11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
    11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
    11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
// 256 257
    30,188,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
    12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
// 512
    31,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
    13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,
//1024
    32,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,
    14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14 };

uint16_t ch[5000];    // i (11) -> j (front) then j -> next j
uint16_t ex[2049];    // i (11 bit) -> j (row+2049) back

uint32_t bwam1[256] = {
 0x00000000, 0x00000001, 0x00000002, 0x00000004,
 0x00000008, 0x00000010, 0x00000020, 0x00000040,
 0x00000080, 0x00000100, 0x00000200, 0x00000400,
 0x00000c00, 0x00001400, 0x00002400, 0x00004400,
 0x00008400, 0x00010400, 0x00020400, 0x00040400,
 0x00080400, 0x00100400, 0x00200000, 0x00400000,
 0x00800000, 0x01000000, 0x02000000, 0x04000000,
 0x08000000, 0x10000000, 0x20000000, 0x40000000,
 0x80000000, 0x00000140, 0x00000208, 0x00000041,
 0x00000034, 0x0000003c, 0x0000023c, 0x00000254,
 0x00000274, 0x000000d4, 0x00000056, 0x00000296,
 0x000a0400, 0x00104400, 0x00020c00, 0x0001a400,
 0x0001e400, 0x0011e400, 0x0012a400, 0x0013a400,
 0x0006a400, 0x0002b400, 0x0014b400, 0x000003d7,
 0x000003d5, 0x00000155, 0x00000381, 0x00000357,
 0x00000303, 0x000001a3, 0x00000187, 0x00000193,
 0x000000f7, 0x000001b6, 0x001ebc00, 0x001eac00,
 0x000aac00, 0x001c0c00, 0x001abc00, 0x00181c00,
 0x000d1c00, 0x000c3c00, 0x000c9c00, 0x0007bc00,
 0x000db400, 0x000000b7, 0x000001f6, 0x000002f2,
 0x000002e2, 0x000002e6, 0x00000371, 0x00000365,
 0x00000129, 0x0000011d, 0x00000329, 0x0000031d,
 0x0005bc00, 0x000fb400, 0x00179400, 0x00171400,
 0x00173400, 0x001b8c00, 0x001b2c00, 0x00094c00,
 0x0008ec00, 0x00194c00, 0x0018ec00, 0x00600000,
 0x00a00000, 0x00c00000, 0x00e00000, 0x0000000f,
 0x0000022f, 0x000000ad, 0x0000028d, 0x0000034e,
 0x000001cc, 0x000003ec, 0x0000016e, 0x01200000,
 0x01800000, 0x01a00000, 0x00007c00, 0x00117c00,
 0x00056c00, 0x00146c00, 0x001a7400, 0x000e6400,
 0x001f6400, 0x000b7400, 0x08e00000, 0x04200000,
 0x02400000, 0x01400000, 0x01600000, 0x02200000,
 0x02600000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x10400000, 0x04400000,
 0x10600000, 0x02a00000, 0x04c00000, 0x08400000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x01c00000, 0x04600000,
 0x20200000, 0x02c00000, 0x04e00000, 0x10200000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x01e00000, 0x02800000,
 0x00000000, 0x02e00000, 0x08200000, 0x04800000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x00000000, 0x00000000,
 0x00000000, 0x00000000, 0x04a00000, 0x08600000,
 0x00000000, 0x08800000, 0x08a00000, 0x08c00000 };

// eighty spare slots for uncommon/rare Gray code differences.
// Theorem 71 = 1+2+4+8+16+32+8 is sufficient
uint8_t spares[] = { 153, 185, 217, 249, 152, 184, 216, 248,
                     151, 183, 215, 247, 150, 182, 214, 246,
                     149, 181, 213, 245, 148, 180, 212, 244,
                     147, 179, 211, 243, 146, 178, 210, 242,
                     145, 177, 209, 241, 144, 176, 208, 240,
                     143, 175, 207, 239, 142, 174, 206, 238,
                     141, 173, 205, 237, 140, 172, 204, 236,
                     139, 171, 203, 235, 138, 170, 202, 234,
                     137, 169, 201, 233, 136, 168, 200, 232,
                     135, 167, 199, 231, 134, 166, 198, 230 };
uint8_t cd51[2048]={
 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x01,
 0x03, 0x00, 0x03, 0x01, 0x03, 0x02, 0x67, 0x04,
 0x04, 0x00, 0x04, 0x01, 0x04, 0x02, 0x67, 0x03,
 0x04, 0x03, 0x67, 0x02, 0x67, 0x01, 0x67, 0x00,
 0x05, 0x00, 0x05, 0x01, 0x05, 0x02, 0x68, 0x26,
 0x05, 0x03, 0x39, 0x21, 0x2a, 0x07, 0x2a, 0x23,
 0x05, 0x04, 0x6b, 0x3b, 0x69, 0x4d, 0x6a, 0x2b,
 0x25, 0x06, 0x55, 0x09, 0x57, 0x3c, 0x67, 0x05,
 0x06, 0x00, 0x06, 0x01, 0x06, 0x02, 0x40, 0x29,
 0x06, 0x03, 0x41, 0x3f, 0x52, 0x3b, 0x68, 0x22,
 0x06, 0x04, 0x54, 0x09, 0x56, 0x3c, 0x6b, 0x53,
 0x25, 0x05, 0x69, 0x08, 0x6e, 0x21, 0x67, 0x06,
 0x06, 0x05, 0x41, 0x3e, 0x53, 0x3b, 0x67, 0x25,
 0x24, 0x00, 0x24, 0x01, 0x24, 0x02, 0x4d, 0x08,
 0x25, 0x03, 0x6d, 0x38, 0x6c, 0x4e, 0x67, 0x24,
 0x24, 0x04, 0x25, 0x01, 0x25, 0x02, 0x6b, 0x52,
 0x07, 0x00, 0x07, 0x01, 0x07, 0x02, 0x23, 0x02,
 0x07, 0x03, 0x23, 0x03, 0x2a, 0x05, 0x6e, 0x54,
 0x07, 0x04, 0x23, 0x04, 0x57, 0x3b, 0x6c, 0x3e,
 0x56, 0x53, 0x6b, 0x3c, 0x67, 0x23, 0x67, 0x07,
 0x07, 0x05, 0x23, 0x05, 0x2a, 0x03, 0x6b, 0x57,
 0x27, 0x0a, 0x39, 0x09, 0x2a, 0x00, 0x2a, 0x01,
 0x56, 0x52, 0x67, 0x2a, 0x69, 0x40, 0x68, 0x28,
 0x27, 0x22, 0x55, 0x21, 0x2a, 0x04, 0x6c, 0x3f,
 0x07, 0x06, 0x23, 0x06, 0x2a, 0x24, 0x4d, 0x29,
 0x4f, 0x2b, 0x4e, 0x3f, 0x53, 0x3c, 0x6b, 0x56,
 0x27, 0x26, 0x54, 0x21, 0x2a, 0x25, 0x6a, 0x51,
 0x57, 0x52, 0x6d, 0x3a, 0x6e, 0x09, 0x6a, 0x50,
 0x51, 0x2b, 0x4e, 0x3e, 0x52, 0x3c, 0x6e, 0x55,
 0x24, 0x07, 0x24, 0x23, 0x2a, 0x06, 0x40, 0x08,
 0x57, 0x53, 0x69, 0x29, 0x6c, 0x41, 0x68, 0x27,
 0x25, 0x07, 0x25, 0x23, 0x56, 0x3b, 0x6a, 0x4f,
 0x08, 0x00, 0x08, 0x01, 0x08, 0x02, 0x4d, 0x24,
 0x08, 0x03, 0x6a, 0x22, 0x4f, 0x28, 0x3e, 0x09,
 0x08, 0x04, 0x6d, 0x53, 0x54, 0x3d, 0x4d, 0x25,
 0x6c, 0x21, 0x69, 0x06, 0x55, 0x3f, 0x67, 0x08,
 0x08, 0x05, 0x69, 0x25, 0x51, 0x28, 0x3f, 0x09,
 0x29, 0x07, 0x29, 0x23, 0x2b, 0x0a, 0x4d, 0x06,
 0x6e, 0x4e, 0x69, 0x24, 0x55, 0x3e, 0x6b, 0x38,
 0x57, 0x3a, 0x6d, 0x52, 0x2b, 0x22, 0x54, 0x41,
 0x08, 0x06, 0x40, 0x2a, 0x69, 0x67, 0x3d, 0x09,
 0x52, 0x38, 0x69, 0x04, 0x4f, 0x27, 0x4d, 0x05,
 0x56, 0x3a, 0x69, 0x03, 0x2b, 0x26, 0x55, 0x41,
 0x69, 0x01, 0x69, 0x00, 0x54, 0x3e, 0x69, 0x02,
 0x53, 0x38, 0x6a, 0x26, 0x51, 0x27, 0x4d, 0x03,
 0x24, 0x08, 0x4d, 0x02, 0x40, 0x23, 0x40, 0x07,
 0x67, 0x4d, 0x68, 0x2b, 0x54, 0x3f, 0x6d, 0x3b,
 0x25, 0x08, 0x69, 0x05, 0x55, 0x3d, 0x4d, 0x04,
 0x08, 0x07, 0x23, 0x08, 0x2b, 0x27, 0x40, 0x24,
 0x29, 0x05, 0x6d, 0x56, 0x3f, 0x39, 0x3e, 0x21,
 0x57, 0x38, 0x68, 0x51, 0x57, 0x37, 0x40, 0x25,
 0x6c, 0x09, 0x68, 0x50, 0x4f, 0x26, 0x6b, 0x3a,
 0x29, 0x03, 0x6c, 0x55, 0x3e, 0x39, 0x3f, 0x21,
 0x29, 0x00, 0x29, 0x01, 0x29, 0x02, 0x40, 0x06,
 0x6e, 0x41, 0x6a, 0x27, 0x51, 0x26, 0x67, 0x29,
 0x29, 0x04, 0x68, 0x4f, 0x50, 0x26, 0x54, 0x4e,
 0x29, 0x24, 0x4d, 0x2a, 0x2b, 0x28, 0x3d, 0x21,
 0x53, 0x3a, 0x6c, 0x54, 0x51, 0x0a, 0x40, 0x05,
 0x29, 0x25, 0x6e, 0x3e, 0x50, 0x22, 0x55, 0x4e,
 0x69, 0x23, 0x69, 0x07, 0x51, 0x22, 0x6d, 0x3c,
 0x52, 0x3a, 0x6d, 0x57, 0x4f, 0x0a, 0x40, 0x03,
 0x29, 0x06, 0x40, 0x02, 0x3d, 0x39, 0x40, 0x00,
 0x67, 0x40, 0x6a, 0x28, 0x4f, 0x22, 0x69, 0x2a,
 0x56, 0x38, 0x6e, 0x3f, 0x56, 0x37, 0x40, 0x04,
 0x09, 0x00, 0x09, 0x01, 0x09, 0x02, 0x39, 0x2a,
 0x09, 0x03, 0x52, 0x28, 0x68, 0x56, 0x3e, 0x08,
 0x09, 0x04, 0x54, 0x06, 0x6d, 0x51, 0x3c, 0x22,
 0x6a, 0x3a, 0x55, 0x05, 0x69, 0x3d, 0x67, 0x09,
 0x09, 0x05, 0x53, 0x28, 0x67, 0x55, 0x3f, 0x08,
 0x39, 0x23, 0x39, 0x07, 0x2a, 0x21, 0x3a, 0x2b,
 0x6c, 0x29, 0x55, 0x03, 0x6b, 0x27, 0x69, 0x41,
 0x55, 0x01, 0x54, 0x24, 0x6d, 0x4f, 0x55, 0x02,
 0x09, 0x06, 0x54, 0x04, 0x4e, 0x29, 0x3b, 0x28,
 0x4d, 0x3f, 0x4f, 0x37, 0x67, 0x54, 0x4f, 0x38,
 0x54, 0x01, 0x54, 0x00, 0x69, 0x3e, 0x54, 0x02,
 0x68, 0x3c, 0x54, 0x03, 0x6e, 0x07, 0x6e, 0x23,
 0x4d, 0x3e, 0x51, 0x37, 0x68, 0x57, 0x51, 0x38,
 0x24, 0x09, 0x50, 0x37, 0x41, 0x08, 0x50, 0x38,
 0x6e, 0x2a, 0x54, 0x05, 0x6b, 0x28, 0x6c, 0x40,
 0x25, 0x09, 0x55, 0x06, 0x69, 0x3f, 0x3c, 0x26,
 0x09, 0x07, 0x21, 0x01, 0x21, 0x02, 0x38, 0x2b,
 0x21, 0x03, 0x39, 0x05, 0x6b, 0x22, 0x3f, 0x29,
 0x21, 0x04, 0x57, 0x27, 0x68, 0x53, 0x55, 0x2a,
 0x6c, 0x08, 0x52, 0x26, 0x6b, 0x0a, 0x67, 0x21,
 0x21, 0x05, 0x39, 0x03, 0x6e, 0x25, 0x3e, 0x29,
 0x39, 0x01, 0x39, 0x00, 0x2a, 0x09, 0x39, 0x02,
 0x6a, 0x38, 0x53, 0x26, 0x67, 0x39, 0x69, 0x4e,
 0x55, 0x23, 0x39, 0x04, 0x68, 0x52, 0x3b, 0x22,
 0x21, 0x06, 0x39, 0x24, 0x41, 0x29, 0x50, 0x3a,
 0x40, 0x3f, 0x53, 0x0a, 0x6e, 0x04, 0x51, 0x3a,
 0x54, 0x23, 0x39, 0x25, 0x6e, 0x03, 0x3b, 0x26,
 0x6e, 0x02, 0x53, 0x22, 0x6e, 0x00, 0x6e, 0x01,
 0x40, 0x3e, 0x52, 0x0a, 0x6b, 0x26, 0x4f, 0x3a,
 0x24, 0x21, 0x39, 0x06, 0x4e, 0x08, 0x3c, 0x28,
 0x68, 0x3b, 0x52, 0x22, 0x6d, 0x2b, 0x6c, 0x4d,
 0x25, 0x21, 0x56, 0x27, 0x6e, 0x05, 0x54, 0x2a,
 0x09, 0x08, 0x38, 0x27, 0x41, 0x24, 0x37, 0x27,
 0x69, 0x54, 0x3e, 0x02, 0x3e, 0x01, 0x3e, 0x00,
 0x67, 0x3e, 0x3a, 0x22, 0x41, 0x25, 0x57, 0x2b,
 0x6c, 0x07, 0x6c, 0x23, 0x6a, 0x3c, 0x3e, 0x04,
 0x6a, 0x57, 0x3f, 0x02, 0x3f, 0x01, 0x3f, 0x00,
 0x29, 0x21, 0x3c, 0x2b, 0x41, 0x06, 0x3d, 0x24,
 0x6d, 0x28, 0x6e, 0x40, 0x6c, 0x2a, 0x3f, 0x04,
 0x67, 0x3f, 0x55, 0x08, 0x54, 0x4d, 0x3d, 0x25,
 0x4e, 0x2a, 0x38, 0x28, 0x3d, 0x01, 0x37, 0x28,
 0x6a, 0x56, 0x4f, 0x3b, 0x41, 0x05, 0x3d, 0x03,
 0x6b, 0x51, 0x54, 0x08, 0x55, 0x4d, 0x3d, 0x04,
 0x67, 0x3d, 0x69, 0x09, 0x68, 0x3a, 0x3f, 0x25,
 0x69, 0x55, 0x51, 0x3b, 0x41, 0x03, 0x3d, 0x05,
 0x41, 0x02, 0x50, 0x3b, 0x41, 0x00, 0x40, 0x21,
 0x6d, 0x27, 0x67, 0x41, 0x6e, 0x29, 0x3e, 0x25,
 0x6b, 0x4f, 0x3a, 0x26, 0x41, 0x04, 0x56, 0x2b,
 0x21, 0x08, 0x3b, 0x2b, 0x4e, 0x24, 0x6b, 0x6a,
 0x6c, 0x04, 0x3f, 0x2a, 0x3e, 0x23, 0x3e, 0x07,
 0x6c, 0x03, 0x55, 0x29, 0x4e, 0x25, 0x56, 0x50,
 0x6c, 0x00, 0x6c, 0x01, 0x6c, 0x02, 0x56, 0x51,
 0x6d, 0x26, 0x3e, 0x2a, 0x3f, 0x23, 0x3f, 0x07,
 0x29, 0x09, 0x38, 0x0a, 0x4e, 0x06, 0x37, 0x0a,
 0x6b, 0x2b, 0x6e, 0x4d, 0x6a, 0x3b, 0x56, 0x4f,
 0x6c, 0x05, 0x38, 0x22, 0x54, 0x40, 0x37, 0x22,
 0x41, 0x2a, 0x50, 0x3c, 0x3d, 0x23, 0x3d, 0x07,
 0x6d, 0x22, 0x51, 0x3c, 0x4e, 0x05, 0x52, 0x2b,
 0x6a, 0x53, 0x38, 0x26, 0x55, 0x40, 0x37, 0x26,
 0x6c, 0x06, 0x69, 0x21, 0x6e, 0x08, 0x57, 0x4f,
 0x6c, 0x25, 0x4f, 0x3c, 0x4e, 0x03, 0x53, 0x2b,
 0x4e, 0x02, 0x3a, 0x28, 0x41, 0x07, 0x40, 0x09,
 0x68, 0x37, 0x67, 0x4e, 0x68, 0x38, 0x57, 0x51,
 0x6a, 0x52, 0x54, 0x29, 0x4e, 0x04, 0x57, 0x50,
 0x0a, 0x00, 0x0a, 0x01, 0x0a, 0x02, 0x3c, 0x09,
 0x0a, 0x03, 0x4f, 0x40, 0x3e, 0x3a, 0x67, 0x22,
 0x0a, 0x04, 0x22, 0x01, 0x22, 0x02, 0x6e, 0x53,
 0x22, 0x03, 0x6a, 0x08, 0x6b, 0x21, 0x67, 0x0a,
 0x0a, 0x05, 0x51, 0x40, 0x3f, 0x3a, 0x68, 0x25,
 0x27, 0x07, 0x27, 0x23, 0x2b, 0x08, 0x3b, 0x21,
 0x22, 0x05, 0x6c, 0x38, 0x6d, 0x4e, 0x68, 0x24,
 0x26, 0x06, 0x57, 0x09, 0x55, 0x3c, 0x6e, 0x52,
 0x0a, 0x06, 0x4d, 0x2b, 0x2a, 0x28, 0x4e, 0x38,
 0x52, 0x39, 0x53, 0x21, 0x4f, 0x29, 0x68, 0x04,
 0x22, 0x06, 0x56, 0x09, 0x54, 0x3c, 0x68, 0x03,
 0x26, 0x05, 0x68, 0x02, 0x68, 0x01, 0x68, 0x00,
 0x53, 0x39, 0x52, 0x21, 0x51, 0x29, 0x67, 0x26,
 0x24, 0x0a, 0x28, 0x23, 0x50, 0x29, 0x41, 0x3a,
 0x26, 0x03, 0x6e, 0x3b, 0x6a, 0x4d, 0x69, 0x2b,
 0x24, 0x22, 0x26, 0x01, 0x26, 0x02, 0x68, 0x05,
 0x0a, 0x07, 0x23, 0x0a, 0x2b, 0x29, 0x3c, 0x21,
 0x27, 0x05, 0x4f, 0x4d, 0x3f, 0x38, 0x6e, 0x56,
 0x22, 0x07, 0x23, 0x22, 0x55, 0x3b, 0x69, 0x51,
 0x54, 0x53, 0x6c, 0x3a, 0x6b, 0x09, 0x69, 0x50,
 0x27, 0x03, 0x51, 0x4d, 0x3e, 0x38, 0x6b, 0x55,
 0x27, 0x00, 0x27, 0x01, 0x27, 0x02, 0x3b, 0x09,
 0x54, 0x52, 0x6a, 0x29, 0x6d, 0x41, 0x67, 0x27,
 0x27, 0x04, 0x57, 0x21, 0x2a, 0x22, 0x69, 0x4f,
 0x27, 0x24, 0x40, 0x2b, 0x50, 0x08, 0x41, 0x38,
 0x28, 0x05, 0x53, 0x09, 0x51, 0x08, 0x6b, 0x54,
 0x27, 0x25, 0x56, 0x21, 0x2a, 0x26, 0x6d, 0x3e,
 0x55, 0x52, 0x6e, 0x3c, 0x68, 0x23, 0x68, 0x07,
 0x28, 0x03, 0x52, 0x09, 0x4f, 0x08, 0x6e, 0x57,
 0x27, 0x06, 0x28, 0x01, 0x28, 0x02, 0x4e, 0x3a,
 0x55, 0x53, 0x68, 0x2a, 0x6a, 0x40, 0x67, 0x28,
 0x26, 0x07, 0x26, 0x23, 0x54, 0x3b, 0x6d, 0x3f,
 0x0a, 0x08, 0x3a, 0x09, 0x39, 0x37, 0x40, 0x28,
 0x3e, 0x3c, 0x6a, 0x04, 0x2b, 0x05, 0x52, 0x4e,
 0x22, 0x08, 0x6a, 0x03, 0x56, 0x3d, 0x4d, 0x26,
 0x6a, 0x01, 0x6a, 0x00, 0x57, 0x3f, 0x6a, 0x02,
 0x3f, 0x3c, 0x69, 0x26, 0x2b, 0x03, 0x53, 0x4e,
 0x2b, 0x02, 0x38, 0x21, 0x2b, 0x00, 0x2b, 0x01,
 0x68, 0x4d, 0x67, 0x2b, 0x57, 0x3e, 0x6c, 0x3b,
 0x55, 0x3a, 0x6a, 0x05, 0x2b, 0x04, 0x56, 0x41,
 0x29, 0x28, 0x4e, 0x3b, 0x2b, 0x24, 0x40, 0x27,
 0x4f, 0x2a, 0x69, 0x22, 0x51, 0x07, 0x51, 0x23,
 0x54, 0x3a, 0x6c, 0x53, 0x2b, 0x25, 0x57, 0x41,
 0x6d, 0x21, 0x69, 0x0a, 0x56, 0x3e, 0x68, 0x08,
 0x51, 0x2a, 0x6a, 0x25, 0x4f, 0x07, 0x4f, 0x23,
 0x50, 0x2a, 0x41, 0x3c, 0x2b, 0x06, 0x4d, 0x0a,
 0x6b, 0x4e, 0x6a, 0x24, 0x56, 0x3f, 0x6e, 0x38,
 0x26, 0x08, 0x6c, 0x52, 0x57, 0x3d, 0x4d, 0x22,
 0x2b, 0x2a, 0x3a, 0x21, 0x50, 0x06, 0x4d, 0x28,
 0x3f, 0x3b, 0x6d, 0x54, 0x4f, 0x24, 0x52, 0x41,
 0x55, 0x38, 0x6b, 0x3e, 0x55, 0x37, 0x40, 0x26,
 0x6a, 0x23, 0x6a, 0x07, 0x4f, 0x25, 0x6c, 0x3c,
 0x3e, 0x3b, 0x6c, 0x57, 0x4f, 0x06, 0x53, 0x41,
 0x27, 0x08, 0x38, 0x09, 0x2b, 0x07, 0x2b, 0x23,
 0x68, 0x40, 0x69, 0x28, 0x51, 0x25, 0x6a, 0x2a,
 0x29, 0x22, 0x6b, 0x3f, 0x50, 0x25, 0x56, 0x4e,
 0x50, 0x02, 0x41, 0x3b, 0x4f, 0x05, 0x4d, 0x27,
 0x51, 0x02, 0x6c, 0x56, 0x50, 0x03, 0x51, 0x01,
 0x29, 0x26, 0x67, 0x51, 0x50, 0x04, 0x57, 0x4e,
 0x6d, 0x09, 0x67, 0x50, 0x51, 0x04, 0x6e, 0x3a,
 0x4f, 0x02, 0x6d, 0x55, 0x4f, 0x00, 0x4f, 0x01,
 0x28, 0x08, 0x4e, 0x3c, 0x4f, 0x03, 0x40, 0x0a,
 0x6b, 0x41, 0x69, 0x27, 0x4f, 0x04, 0x68, 0x29,
 0x54, 0x38, 0x67, 0x4f, 0x54, 0x37, 0x40, 0x22,
 0x0a, 0x09, 0x38, 0x29, 0x3c, 0x01, 0x37, 0x29,
 0x4f, 0x4e, 0x3f, 0x2b, 0x68, 0x54, 0x3c, 0x03,
 0x22, 0x09, 0x56, 0x06, 0x6a, 0x3e, 0x3c, 0x04,
 0x67, 0x3c, 0x57, 0x05, 0x6b, 0x07, 0x6b, 0x23,
 0x51, 0x4e, 0x3e, 0x2b, 0x67, 0x57, 0x3c, 0x05,
 0x27, 0x21, 0x54, 0x26, 0x3b, 0x23, 0x3b, 0x07,
 0x6b, 0x2a, 0x57, 0x03, 0x6e, 0x28, 0x6d, 0x40,
 0x57, 0x01, 0x55, 0x0a, 0x6a, 0x3f, 0x57, 0x02,
 0x40, 0x37, 0x39, 0x28, 0x40, 0x38, 0x3c, 0x06,
 0x53, 0x23, 0x53, 0x07, 0x67, 0x56, 0x52, 0x2a,
 0x56, 0x01, 0x54, 0x0a, 0x6c, 0x51, 0x56, 0x02,
 0x69, 0x3a, 0x56, 0x03, 0x6a, 0x3d, 0x68, 0x09,
 0x52, 0x23, 0x52, 0x07, 0x68, 0x55, 0x53, 0x2a,
 0x28, 0x21, 0x3d, 0x2b, 0x4d, 0x3a, 0x3c, 0x24,
 0x6d, 0x29, 0x56, 0x05, 0x6e, 0x27, 0x6a, 0x41,
 0x26, 0x09, 0x57, 0x06, 0x6c, 0x4f, 0x3c, 0x25,
 0x21, 0x0a, 0x50, 0x3d, 0x3c, 0x23, 0x3c, 0x07,
 0x4f, 0x41, 0x51, 0x3d, 0x6b, 0x04, 0x3b, 0x05,
 0x22, 0x21, 0x55, 0x27, 0x6b, 0x03, 0x57, 0x2a,
 0x6b, 0x02, 0x52, 0x25, 0x6b, 0x00, 0x6b, 0x01,
 0x51, 0x41, 0x4f, 0x3d, 0x6e, 0x26, 0x3b, 0x03,
 0x27, 0x09, 0x38, 0x08, 0x3b, 0x01, 0x37, 0x08,
 0x67, 0x3b, 0x53, 0x25, 0x6c, 0x2b, 0x6d, 0x4d,
 0x57, 0x23, 0x39, 0x22, 0x6b, 0x05, 0x3b, 0x04,
 0x4d, 0x37, 0x4f, 0x3f, 0x4d, 0x38, 0x3b, 0x24,
 0x53, 0x01, 0x50, 0x3e, 0x6e, 0x22, 0x53, 0x02,
 0x56, 0x23, 0x39, 0x26, 0x67, 0x53, 0x3b, 0x25,
 0x6d, 0x08, 0x53, 0x04, 0x6b, 0x06, 0x68, 0x21,
 0x52, 0x01, 0x50, 0x3f, 0x6b, 0x25, 0x52, 0x02,
 0x28, 0x09, 0x4f, 0x3e, 0x40, 0x3a, 0x3b, 0x06,
 0x69, 0x38, 0x52, 0x04, 0x68, 0x39, 0x6a, 0x4e,
 0x26, 0x21, 0x54, 0x27, 0x67, 0x52, 0x56, 0x2a,
 0x3a, 0x01, 0x37, 0x2a, 0x4e, 0x28, 0x38, 0x2a,
 0x69, 0x56, 0x3a, 0x03, 0x52, 0x40, 0x3e, 0x0a,
 0x6e, 0x51, 0x3a, 0x04, 0x41, 0x26, 0x55, 0x2b,
 0x68, 0x3d, 0x6a, 0x09, 0x67, 0x3a, 0x3e, 0x22,
 0x6a, 0x55, 0x3a, 0x05, 0x53, 0x40, 0x3f, 0x0a,
 0x38, 0x23, 0x38, 0x07, 0x2b, 0x09, 0x37, 0x07,
 0x6c, 0x27, 0x68, 0x41, 0x6b, 0x29, 0x3f, 0x22,
 0x6e, 0x4f, 0x57, 0x08, 0x56, 0x4d, 0x3d, 0x26,
 0x40, 0x3b, 0x3a, 0x06, 0x4e, 0x27, 0x3d, 0x0a,
 0x6a, 0x54, 0x52, 0x29, 0x51, 0x21, 0x4f, 0x39,
 0x68, 0x3e, 0x56, 0x08, 0x57, 0x4d, 0x3d, 0x22,
 0x6d, 0x07, 0x6d, 0x23, 0x69, 0x3c, 0x3f, 0x26,
 0x69, 0x57, 0x53, 0x29, 0x4f, 0x21, 0x51, 0x39,
 0x4d, 0x3c, 0x3a, 0x24, 0x41, 0x0a, 0x50, 0x39,
 0x6c, 0x28, 0x6b, 0x40, 0x6d, 0x2a, 0x3e, 0x26,
 0x68, 0x3f, 0x3a, 0x25, 0x41, 0x22, 0x54, 0x2b,
 0x3a, 0x23, 0x3a, 0x07, 0x41, 0x28, 0x39, 0x2b,
 0x6c, 0x22, 0x38, 0x05, 0x52, 0x4d, 0x37, 0x05,
 0x69, 0x53, 0x57, 0x29, 0x4e, 0x26, 0x54, 0x50,
 0x6c, 0x0a, 0x6a, 0x21, 0x6b, 0x08, 0x54, 0x51,
 0x6d, 0x25, 0x38, 0x03, 0x53, 0x4d, 0x37, 0x03,
 0x38, 0x01, 0x37, 0x02, 0x2b, 0x21, 0x37, 0x00,
 0x67, 0x37, 0x68, 0x4e, 0x67, 0x38, 0x54, 0x4f,
 0x69, 0x52, 0x38, 0x04, 0x56, 0x40, 0x37, 0x04,
 0x4d, 0x3b, 0x38, 0x24, 0x41, 0x27, 0x37, 0x24,
 0x6d, 0x04, 0x53, 0x08, 0x51, 0x09, 0x3f, 0x28,
 0x6d, 0x03, 0x38, 0x25, 0x57, 0x40, 0x37, 0x25,
 0x6d, 0x00, 0x6d, 0x01, 0x6d, 0x02, 0x55, 0x4f,
 0x6c, 0x26, 0x52, 0x08, 0x4f, 0x09, 0x3e, 0x28,
 0x40, 0x3c, 0x38, 0x06, 0x4e, 0x0a, 0x37, 0x06,
 0x6e, 0x2b, 0x6b, 0x4d, 0x69, 0x3b, 0x55, 0x51,
 0x6d, 0x05, 0x56, 0x29, 0x4e, 0x22, 0x55, 0x50 };

uint8_t * bix;
uint32_t * bwam;
uint8_t * afmt;

int bong(uint64_t nor, uint32_t * tdat)
{
    uint32_t a32;  // 32 bits of data
    uint32_t ix,iy,iy1,iz,dx,nbit,nbit2,dx1;   // 11 bit concepts 
    uint32_t kk1,kk2;   // together an index into Gray code for sequence
    uint32_t i;         // a row of matrix A
    uint32_t j,jx,jstart;         // a row of matrix A with 2049 added
    uint8_t mkt,mkt2;
    uint32_t afmtix,spareix,newix;

    afmtix=0;
    spareix=0;
    memcpy(bwam,bwam1,1024);

// transpose still to be written

    memcpy(bix,bix1,1024);
// group data according to first 11 bits
// 13 mu-ops gcc -O3
    for(i=0;i<nor;i++)
    {
        a32=tdat[i];
        ix=(a32>>21);    // no need for AND
        if(a32==0) ix=2048;
        j=i+2049;
        ch[ex[ix]]=j;
        ex[ix]=j;
    }
// concatenate lists
// needs initial 11-bit -> BWA index table supplied in bix

// entry in bwa that is never a Gray case
#define NOTMADE 1

    iz=0;
    jx=0;    // start of chain at ch[0]
    for(kk1=0;kk1<32;kk1++)
    {
      iy1=gray1[kk1];
      for(kk2=0;kk2<64;kk2++)
      {
// about 9 mu-ops for each turn of this loop.
// consider removing the xor of the next one by having
// one girt-big gray table
        iy=iy1^gray2[kk2];
        ch[jx]=ch[iy];  // back goes repeatedly to front of next
        if(ex[iy]>=2049)
        {
            jx=ex[iy];  // new back if it exists
            dx=iy^iz;   // difference
            iz=iy;
            mkt=bix[dx];
            if((mkt&0xf8)!=8) continue;    // already made
// So need to make dx.  Commonest cases fastest.
            nbit=1<<(mkt-3);   // 8->32, 9->64
            dx1=dx^nbit;
            mkt2=bix[dx1];
            newix=spares[spareix++];
            if((mkt2&0xf8) !=8)           // made as sum of two
            {
                afmt[afmtix++]=mkt2;
                afmt[afmtix++]=bix[nbit];
                afmt[afmtix++]=newix;
                bwam[newix]=bwam[mkt2]^bwam[bix[nbit]];
                continue;
            }
            nbit2=1<<(mkt2-3);           // made from three or mroe
            afmt[afmtix++]=bix[nbit];
            afmt[afmtix++]=bix[nbit2];
            afmt[afmtix++]=newix;
            bwam[newix]=bwam[nbit2]^bwam[bix[nbit]];
            while(1)
            {
                dx1=dx1^nbit2;
                mkt2=bix[dx1];
                if((mkt2&0xf8) !=8)
                {
                    afmt[afmtix++]=newix;
                    afmt[afmtix++]=mkt2;
                    afmt[afmtix++]=newix;
                    bwam[newix]=bwam[mkt2]^bwam[newix];
                    break;
                }
                nbit2=1<<(mkt2-3);
                afmt[afmtix++]=newix;
                afmt[afmtix++]=bix[nbit2];
                afmt[afmtix++]=newix;
                bwam[newix]=bwam[bix[nbit2]]^bwam[newix];
            }
        }
      }
    }
#define TERMINATE 50000
    ch[jx]=TERMINATE;  // put in terminator

uint64_t i12,i12old,m8,af1,m7a,m7b,m7c,m7d;
uint32_t c10,acc;
uint8_t v[4];
uint16_t *v0,*v2;
uint8_t *v1;
uint16_t * cd5116;

// now generate the Afmt

    j=ch[0];               // first element of chain
    acc=0;                 // accumulator starts off zero
    v0=(uint16_t *)v;
    v2=(uint16_t *)(v+2);
    v1=v+1;
    cd5116=(uint16_t *)cd51;

    while(j!=TERMINATE)
    {
// Phase 1 - Fetch next data into a32 and compute nbit

        i12=j-2049;     // convert to index for data
        a32=tdat[i12];  // fetch the actual 32-bit data
        nbit=((a32^acc)>>20)&1;   // get the X-bit

// Phase 2 - generate the afmt for the old row

        m7a=v1[nbit];
        af1=(i12old<<36)+(m8<<28)+(m7a<<21)+
                   (v1[nbit^1]<<14)+(v[0]<<7)+v[3];
        *((uint64_t *)(afmt+afmtix))=af1;
        afmtix+=6;

// Phase 3 - update accumulator

        acc^=bwam[m8]^bwam[m7a];

// Phase 4 - Compute things for the new row

        a32^=acc;     // that is what it will be after acc
        ix=(a32>>21);  // 11-bit data
        m8=bix[ix];

        c10=(a32>>10)&1023;
        *v0=cd5116[c10];
        c10=a32&1023;
        *v2=cd5116[c10]+2827;  // 11 + 256*11

// Phase 5 - On to next row
        i12old=i12;
        j=ch[j];
    }
    
}

#define TEST1 1

int main(int argc, char ** argv)
{
    uint32_t kk1,kk2,iy1,iy,iz;
    iz=0;
#ifdef TEST1
    for(kk1=0;kk1<32;kk1++)
    {
      iy1=gray1[kk1];
      for(kk2=0;kk2<64;kk2++)
      {
        iy=iy1^gray2[kk2];
        printf("%2d %2d %x\n",kk1,kk2,iy^iz);
        iz=iy;
      }
    }
#endif
}