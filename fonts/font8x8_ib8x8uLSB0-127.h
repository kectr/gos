//
// FACE_NAME "IBM BIOS 8x8"
//
// 0-31,127 : Code page 437, cf. https://en.wikipedia.org/wiki/Code_page_437
// 32-126   : ASCII
// 160-255  : ISO-8859-1, cf. https://en.wikipedia.org/wiki/ISO/IEC_8859-1
#ifndef uint8_t
#include <cstdint>
#endif
// const uint8_t font8x8_ib8x8u[224][8] PROGMEM =
const uint8_t font8x8_ib8x8u[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0000 (uni0000.dup1)
    0x7e, 0x81, 0xa5, 0x81, 0xbd, 0x99, 0x81, 0x7e, // 0001 (uni0001)
    0x7e, 0xff, 0xdb, 0xff, 0xc3, 0xe7, 0xff, 0x7e, // 0002 (uni0002)
    0x36, 0x7f, 0x7f, 0x7f, 0x3e, 0x1c, 0x08, 0x00, // 0003 (uni0003)
    0x08, 0x1c, 0x3e, 0x7f, 0x3e, 0x1c, 0x08, 0x00, // 0004 (uni0004)
    0x1c, 0x3e, 0x1c, 0x7f, 0x7f, 0x3e, 0x1c, 0x3e, // 0005 (uni0005)
    0x08, 0x08, 0x1c, 0x3e, 0x7f, 0x3e, 0x1c, 0x3e, // 0006 (uni0006)
    0x00, 0x00, 0x18, 0x3c, 0x3c, 0x18, 0x00, 0x00, // 0007 (uni0007)
    0xff, 0xff, 0xe7, 0xc3, 0xc3, 0xe7, 0xff, 0xff, // 0008 (uni0008)
    0x00, 0x3c, 0x66, 0x42, 0x42, 0x66, 0x3c, 0x00, // 0009 (uni0009)
    0xff, 0xc3, 0x99, 0xbd, 0xbd, 0x99, 0xc3, 0xff, // 000a (uni000A)
    0xf0, 0xe0, 0xf0, 0xbe, 0x33, 0x33, 0x33, 0x1e, // 000b (uni000B)
    0x3c, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x7e, 0x18, // 000c (uni000C)
    0xfc, 0xcc, 0xfc, 0x0c, 0x0c, 0x0e, 0x0f, 0x07, // 000d (uni000D)
    0xfe, 0xc6, 0xfe, 0xc6, 0xc6, 0xe6, 0x67, 0x03, // 000e (uni000E)
    0x99, 0x5a, 0x3c, 0xe7, 0xe7, 0x3c, 0x5a, 0x99, // 000f (uni000F)
    0x01, 0x07, 0x1f, 0x7f, 0x1f, 0x07, 0x01, 0x00, // 0010 (uni0010)
    0x40, 0x70, 0x7c, 0x7f, 0x7c, 0x70, 0x40, 0x00, // 0011 (uni0011)
    0x18, 0x3c, 0x7e, 0x18, 0x18, 0x7e, 0x3c, 0x18, // 0012 (uni0012)
    0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x66, 0x00, // 0013 (uni0013)
    0xfe, 0xdb, 0xdb, 0xde, 0xd8, 0xd8, 0xd8, 0x00, // 0014 (uni0014)
    0x7c, 0xc6, 0x1c, 0x36, 0x36, 0x1c, 0x33, 0x1e, // 0015 (uni0015)
    0x00, 0x00, 0x00, 0x00, 0x7e, 0x7e, 0x7e, 0x00, // 0016 (uni0016)
    0x18, 0x3c, 0x7e, 0x18, 0x7e, 0x3c, 0x18, 0xff, // 0017 (uni0017)
    0x18, 0x3c, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x00, // 0018 (uni0018)
    0x18, 0x18, 0x18, 0x18, 0x7e, 0x3c, 0x18, 0x00, // 0019 (uni0019)
    0x00, 0x18, 0x30, 0x7f, 0x30, 0x18, 0x00, 0x00, // 001a (uni001A)
    0x00, 0x0c, 0x06, 0x7f, 0x06, 0x0c, 0x00, 0x00, // 001b (uni001B)
    0x00, 0x00, 0x03, 0x03, 0x03, 0x7f, 0x00, 0x00, // 001c (uni001C)
    0x00, 0x24, 0x66, 0xff, 0x66, 0x24, 0x00, 0x00, // 001d (uni001D)
    0x00, 0x18, 0x3c, 0x7e, 0xff, 0xff, 0x00, 0x00, // 001e (uni001E)
    0x00, 0xff, 0xff, 0x7e, 0x3c, 0x18, 0x00, 0x00, // 001f (uni001F)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0020 (space)
    0x0c, 0x1e, 0x1e, 0x0c, 0x0c, 0x00, 0x0c, 0x00, // 0021 (exclam)
    0x36, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, // 0022 (quotedbl)
    0x36, 0x36, 0x7f, 0x36, 0x7f, 0x36, 0x36, 0x00, // 0023 (numbersign)
    0x0c, 0x3e, 0x03, 0x1e, 0x30, 0x1f, 0x0c, 0x00, // 0024 (dollar)
    0x00, 0x63, 0x33, 0x18, 0x0c, 0x66, 0x63, 0x00, // 0025 (percent)
    0x1c, 0x36, 0x1c, 0x6e, 0x3b, 0x33, 0x6e, 0x00, // 0026 (ampersand)
    0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // 0027 (quotesingle)
    0x18, 0x0c, 0x06, 0x06, 0x06, 0x0c, 0x18, 0x00, // 0028 (parenleft)
    0x06, 0x0c, 0x18, 0x18, 0x18, 0x0c, 0x06, 0x00, // 0029 (parenright)
    0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00, // 002a (asterisk)
    0x00, 0x0c, 0x0c, 0x3f, 0x0c, 0x0c, 0x00, 0x00, // 002b (plus)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x06, // 002c (comma)
    0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, // 002d (hyphen)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x00, // 002e (period)
    0x60, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, // 002f (slash)
    0x3e, 0x63, 0x73, 0x7b, 0x6f, 0x67, 0x3e, 0x00, // 0030 (zero)
    0x0c, 0x0e, 0x0c, 0x0c, 0x0c, 0x0c, 0x3f, 0x00, // 0031 (one)
    0x1e, 0x33, 0x30, 0x1c, 0x06, 0x23, 0x3f, 0x00, // 0032 (two)
    0x1e, 0x33, 0x30, 0x1c, 0x30, 0x33, 0x1e, 0x00, // 0033 (three)
    0x38, 0x3c, 0x36, 0x33, 0x7f, 0x30, 0x78, 0x00, // 0034 (four)
    0x3f, 0x03, 0x1f, 0x30, 0x30, 0x33, 0x1e, 0x00, // 0035 (five)
    0x1c, 0x06, 0x03, 0x1f, 0x33, 0x33, 0x1e, 0x00, // 0036 (six)
    0x3f, 0x33, 0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x00, // 0037 (seven)
    0x1e, 0x33, 0x33, 0x1e, 0x33, 0x33, 0x1e, 0x00, // 0038 (eight)
    0x1e, 0x33, 0x33, 0x3e, 0x30, 0x18, 0x0e, 0x00, // 0039 (nine)
    0x00, 0x0c, 0x0c, 0x00, 0x00, 0x0c, 0x0c, 0x00, // 003a (colon)
    0x00, 0x0c, 0x0c, 0x00, 0x0c, 0x0c, 0x06, 0x00, // 003b (semicolon)
    0x18, 0x0c, 0x06, 0x03, 0x06, 0x0c, 0x18, 0x00, // 003c (less)
    0x00, 0x00, 0x3f, 0x00, 0x00, 0x3f, 0x00, 0x00, // 003d (equal)
    0x06, 0x0c, 0x18, 0x30, 0x18, 0x0c, 0x06, 0x00, // 003e (greater)
    0x1e, 0x33, 0x30, 0x18, 0x0c, 0x00, 0x0c, 0x00, // 003f (question)
    0x3e, 0x63, 0x7b, 0x7b, 0x7b, 0x03, 0x1e, 0x00, // 0040 (at)
    0x0c, 0x1e, 0x33, 0x33, 0x3f, 0x33, 0x33, 0x00, // 0041 (A)
    0x3f, 0x66, 0x66, 0x3e, 0x66, 0x66, 0x3f, 0x00, // 0042 (B)
    0x3c, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3c, 0x00, // 0043 (C)
    0x1f, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1f, 0x00, // 0044 (D)
    0x7f, 0x46, 0x16, 0x1e, 0x16, 0x46, 0x7f, 0x00, // 0045 (E)
    0x7f, 0x46, 0x16, 0x1e, 0x16, 0x06, 0x0f, 0x00, // 0046 (F)
    0x3c, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7c, 0x00, // 0047 (G)
    0x33, 0x33, 0x33, 0x3f, 0x33, 0x33, 0x33, 0x00, // 0048 (H)
    0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1e, 0x00, // 0049 (I)
    0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1e, 0x00, // 004a (J)
    0x67, 0x66, 0x36, 0x1e, 0x36, 0x66, 0x67, 0x00, // 004b (K)
    0x0f, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7f, 0x00, // 004c (L)
    0x63, 0x77, 0x7f, 0x7f, 0x6b, 0x63, 0x63, 0x00, // 004d (M)
    0x63, 0x67, 0x6f, 0x7b, 0x73, 0x63, 0x63, 0x00, // 004e (N)
    0x1c, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1c, 0x00, // 004f (O)
    0x3f, 0x66, 0x66, 0x3e, 0x06, 0x06, 0x0f, 0x00, // 0050 (P)
    0x1e, 0x33, 0x33, 0x33, 0x3b, 0x1e, 0x38, 0x00, // 0051 (Q)
    0x3f, 0x66, 0x66, 0x3e, 0x36, 0x66, 0x67, 0x00, // 0052 (R)
    0x1e, 0x33, 0x07, 0x0e, 0x38, 0x33, 0x1e, 0x00, // 0053 (S)
    0x3f, 0x2d, 0x0c, 0x0c, 0x0c, 0x0c, 0x1e, 0x00, // 0054 (T)
    0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3f, 0x00, // 0055 (U)
    0x33, 0x33, 0x33, 0x33, 0x33, 0x1e, 0x0c, 0x00, // 0056 (V)
    0x63, 0x63, 0x63, 0x6b, 0x7f, 0x77, 0x63, 0x00, // 0057 (W)
    0x63, 0x63, 0x36, 0x1c, 0x1c, 0x36, 0x63, 0x00, // 0058 (X)
    0x33, 0x33, 0x33, 0x1e, 0x0c, 0x0c, 0x1e, 0x00, // 0059 (Y)
    0x7f, 0x63, 0x31, 0x18, 0x4c, 0x66, 0x7f, 0x00, // 005a (Z)
    0x1e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1e, 0x00, // 005b (bracketleft)
    0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x40, 0x00, // 005c (backslash)
    0x1e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1e, 0x00, // 005d (bracketright)
    0x08, 0x1c, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00, // 005e (asciicircum)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, // 005f (underscore)
    0x0c, 0x0c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, // 0060 (grave)
    0x00, 0x00, 0x1e, 0x30, 0x3e, 0x33, 0x6e, 0x00, // 0061 (a)
    0x07, 0x06, 0x06, 0x3e, 0x66, 0x66, 0x3b, 0x00, // 0062 (b)
    0x00, 0x00, 0x1e, 0x33, 0x03, 0x33, 0x1e, 0x00, // 0063 (c)
    0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6e, 0x00, // 0064 (d)
    0x00, 0x00, 0x1e, 0x33, 0x3f, 0x03, 0x1e, 0x00, // 0065 (e)
    0x1c, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0f, 0x00, // 0066 (f)
    0x00, 0x00, 0x6e, 0x33, 0x33, 0x3e, 0x30, 0x1f, // 0067 (g)
    0x07, 0x06, 0x36, 0x6e, 0x66, 0x66, 0x67, 0x00, // 0068 (h)
    0x0c, 0x00, 0x0e, 0x0c, 0x0c, 0x0c, 0x1e, 0x00, // 0069 (i)
    0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1e, // 006a (j)
    0x07, 0x06, 0x66, 0x36, 0x1e, 0x36, 0x67, 0x00, // 006b (k)
    0x0e, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x1e, 0x00, // 006c (l)
    0x00, 0x00, 0x33, 0x7f, 0x7f, 0x6b, 0x63, 0x00, // 006d (m)
    0x00, 0x00, 0x1f, 0x33, 0x33, 0x33, 0x33, 0x00, // 006e (n)
    0x00, 0x00, 0x1e, 0x33, 0x33, 0x33, 0x1e, 0x00, // 006f (o)
    0x00, 0x00, 0x3b, 0x66, 0x66, 0x3e, 0x06, 0x0f, // 0070 (p)
    0x00, 0x00, 0x6e, 0x33, 0x33, 0x3e, 0x30, 0x78, // 0071 (q)
    0x00, 0x00, 0x3b, 0x6e, 0x66, 0x06, 0x0f, 0x00, // 0072 (r)
    0x00, 0x00, 0x3e, 0x03, 0x1e, 0x30, 0x1f, 0x00, // 0073 (s)
    0x08, 0x0c, 0x3e, 0x0c, 0x0c, 0x2c, 0x18, 0x00, // 0074 (t)
    0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6e, 0x00, // 0075 (u)
    0x00, 0x00, 0x33, 0x33, 0x33, 0x1e, 0x0c, 0x00, // 0076 (v)
    0x00, 0x00, 0x63, 0x6b, 0x7f, 0x7f, 0x36, 0x00, // 0077 (w)
    0x00, 0x00, 0x63, 0x36, 0x1c, 0x36, 0x63, 0x00, // 0078 (x)
    0x00, 0x00, 0x33, 0x33, 0x33, 0x3e, 0x30, 0x1f, // 0079 (y)
    0x00, 0x00, 0x3f, 0x19, 0x0c, 0x26, 0x3f, 0x00, // 007a (z)
    0x38, 0x0c, 0x0c, 0x07, 0x0c, 0x0c, 0x38, 0x00, // 007b (braceleft)
    0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00, // 007c (bar)
    0x07, 0x0c, 0x0c, 0x38, 0x0c, 0x0c, 0x07, 0x00, // 007d (braceright)
    0x6e, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 007e (asciitilde)
    0x00, 0x08, 0x1c, 0x36, 0x63, 0x63, 0x7f, 0x00, // 007f (uni007F)
};