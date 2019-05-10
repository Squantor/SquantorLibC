/*
MIT License

Copyright (c) 2019 Bart Bilos

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <ctypetable.h>

const ctypeEntry asciiTableCtypes[128] =
{
    {ctypeIsNone, 0x00, 0x00}, // NUL
    {ctypeIsNone, 0x01, 0x01}, // SOH
    {ctypeIsNone, 0x02, 0x02}, // STX
    {ctypeIsNone, 0x03, 0x03}, // ETX
    {ctypeIsNone, 0x04, 0x04}, // EOT
    {ctypeIsNone, 0x05, 0x05}, // ENQ
    {ctypeIsNone, 0x06, 0x06}, // ACK
    {ctypeIsNone, 0x07, 0x07}, // BEL
    {ctypeIsNone, 0x08, 0x08}, // BS
    {ctypeIsSpace, 0x09, 0x09}, // TAB
    {ctypeIsSpace, 0x0A, 0x0A}, // LF
    {ctypeIsSpace, 0x0B, 0x0B}, // VT
    {ctypeIsSpace, 0x0C, 0x0C}, // FF
    {ctypeIsSpace, 0x0D, 0x0D}, // CR
    {ctypeIsNone, 0x0E, 0x0E}, // SO
    {ctypeIsNone, 0x0F, 0x0F}, // SI
    {ctypeIsNone, 0x10, 0x10}, // DLE
    {ctypeIsNone, 0x11, 0x11}, // DC1
    {ctypeIsNone, 0x12, 0x12}, // DC2
    {ctypeIsNone, 0x13, 0x13}, // DC3
    {ctypeIsNone, 0x14, 0x14}, // DC4
    {ctypeIsNone, 0x15, 0x15}, // NAK
    {ctypeIsNone, 0x16, 0x16}, // SYN
    {ctypeIsNone, 0x17, 0x17}, // ETB
    {ctypeIsNone, 0x18, 0x18}, // CAN
    {ctypeIsNone, 0x19, 0x19}, // EM
    {ctypeIsNone, 0x1A, 0x1A}, // SUB
    {ctypeIsNone, 0x1B, 0x1B}, // ESC
    {ctypeIsNone, 0x1C, 0x1C}, // FS
    {ctypeIsNone, 0x1D, 0x1D}, // GS
    {ctypeIsNone, 0x1E, 0x1E}, // RS
    {ctypeIsNone, 0x1F, 0x1F}, // US
    {ctypeIsSpace, 0x20, 0x20}, // Space
    {ctypeIsNone, 0x21, 0x21}, // !
    {ctypeIsNone, 0x22, 0x22}, // "
    {ctypeIsNone, 0x23, 0x23}, // #
    {ctypeIsNone, 0x24, 0x24}, // $
    {ctypeIsNone, 0x25, 0x25}, // %
    {ctypeIsNone, 0x26, 0x26}, // &
    {ctypeIsNone, 0x27, 0x27}, // '
    {ctypeIsNone, 0x28, 0x28}, // (
    {ctypeIsNone, 0x29, 0x29}, // )
    {ctypeIsNone, 0x2A, 0x2A}, // *
    {ctypeIsNone, 0x2B, 0x2B}, // +
    {ctypeIsNone, 0x2C, 0x2C}, // ,
    {ctypeIsNone, 0x2D, 0x2D}, // -
    {ctypeIsNone, 0x2E, 0x2E}, // .
    {ctypeIsNone, 0x2F, 0x2F}, // /
    {ctypeIsDigit | ctypeIsXdigit, 0x30, 0x30}, // 0
    {ctypeIsDigit | ctypeIsXdigit, 0x31, 0x31}, // 1
    {ctypeIsDigit | ctypeIsXdigit, 0x32, 0x32}, // 2
    {ctypeIsDigit | ctypeIsXdigit, 0x33, 0x33}, // 3
    {ctypeIsDigit | ctypeIsXdigit, 0x34, 0x34}, // 4
    {ctypeIsDigit | ctypeIsXdigit, 0x35, 0x35}, // 5
    {ctypeIsDigit | ctypeIsXdigit, 0x36, 0x36}, // 6
    {ctypeIsDigit | ctypeIsXdigit, 0x37, 0x37}, // 7
    {ctypeIsDigit | ctypeIsXdigit, 0x38, 0x38}, // 8
    {ctypeIsDigit | ctypeIsXdigit, 0x39, 0x39}, // 9
    {ctypeIsNone, 0x3A, 0x3A}, // :
    {ctypeIsNone, 0x3B, 0x3B}, // ;
    {ctypeIsNone, 0x3C, 0x3C}, // <
    {ctypeIsNone, 0x3D, 0x3D}, // =
    {ctypeIsNone, 0x3E, 0x3E}, // >
    {ctypeIsNone, 0x3F, 0x3F}, // ?
    {ctypeIsNone, 0x40, 0x40}, // @
    {ctypeIsUpper | ctypeIsXdigit, 0x41, 0x61}, // A
    {ctypeIsUpper | ctypeIsXdigit, 0x42, 0x62}, // B
    {ctypeIsUpper | ctypeIsXdigit, 0x43, 0x63}, // C
    {ctypeIsUpper | ctypeIsXdigit, 0x44, 0x64}, // D
    {ctypeIsUpper | ctypeIsXdigit, 0x45, 0x65}, // E
    {ctypeIsUpper | ctypeIsXdigit, 0x46, 0x66}, // F
    {ctypeIsUpper, 0x47, 0x67}, // G
    {ctypeIsUpper, 0x48, 0x68}, // H
    {ctypeIsUpper, 0x49, 0x69}, // I
    {ctypeIsUpper, 0x4A, 0x6A}, // J
    {ctypeIsUpper, 0x4B, 0x6B}, // K
    {ctypeIsUpper, 0x4C, 0x6C}, // L
    {ctypeIsUpper, 0x4D, 0x6D}, // M
    {ctypeIsUpper, 0x4E, 0x6E}, // N
    {ctypeIsUpper, 0x4F, 0x6F}, // O
    {ctypeIsUpper, 0x50, 0x70}, // P
    {ctypeIsUpper, 0x51, 0x71}, // Q
    {ctypeIsUpper, 0x52, 0x72}, // R
    {ctypeIsUpper, 0x53, 0x73}, // S
    {ctypeIsUpper, 0x54, 0x74}, // T
    {ctypeIsUpper, 0x55, 0x75}, // U
    {ctypeIsUpper, 0x56, 0x76}, // V
    {ctypeIsUpper, 0x57, 0x77}, // W
    {ctypeIsUpper, 0x58, 0x78}, // X
    {ctypeIsUpper, 0x59, 0x79}, // Y
    {ctypeIsUpper, 0x5A, 0x7A}, // Z
    {ctypeIsNone, 0x5B, 0x5B}, // [
    {ctypeIsNone, 0x5C, 0x5C}, // \ dummy to remove warning
    {ctypeIsNone, 0x5D, 0x5D}, // ]
    {ctypeIsNone, 0x5E, 0x5E}, // ^
    {ctypeIsNone, 0x5F, 0x5F}, // _
    {ctypeIsNone, 0x60, 0x60}, // `
    {ctypeIsLower | ctypeIsXdigit, 0x41, 0x61}, // a
    {ctypeIsLower | ctypeIsXdigit, 0x42, 0x62}, // b
    {ctypeIsLower | ctypeIsXdigit, 0x43, 0x63}, // c
    {ctypeIsLower | ctypeIsXdigit, 0x44, 0x64}, // d
    {ctypeIsLower | ctypeIsXdigit, 0x45, 0x65}, // e
    {ctypeIsLower | ctypeIsXdigit, 0x46, 0x66}, // f
    {ctypeIsLower, 0x47, 0x67}, // g
    {ctypeIsLower, 0x48, 0x68}, // h
    {ctypeIsLower, 0x49, 0x69}, // i
    {ctypeIsLower, 0x4A, 0x6A}, // j
    {ctypeIsLower, 0x4B, 0x6B}, // k
    {ctypeIsLower, 0x4C, 0x6C}, // l
    {ctypeIsLower, 0x4D, 0x6D}, // m
    {ctypeIsLower, 0x4E, 0x6E}, // n
    {ctypeIsLower, 0x4F, 0x6F}, // o
    {ctypeIsLower, 0x50, 0x70}, // p
    {ctypeIsLower, 0x51, 0x71}, // q
    {ctypeIsLower, 0x52, 0x72}, // r
    {ctypeIsLower, 0x53, 0x73}, // s
    {ctypeIsLower, 0x54, 0x74}, // t
    {ctypeIsLower, 0x55, 0x75}, // u
    {ctypeIsLower, 0x56, 0x76}, // v
    {ctypeIsLower, 0x57, 0x77}, // w
    {ctypeIsLower, 0x58, 0x78}, // x
    {ctypeIsLower, 0x59, 0x79}, // y
    {ctypeIsLower, 0x5A, 0x7A}, // z
    {ctypeIsNone, 0x7B, 0x7B}, // {
    {ctypeIsNone, 0x7C, 0x7C}, // |
    {ctypeIsNone, 0x7D, 0x7D}, // }
    {ctypeIsNone, 0x7E, 0x7E}, // ~
    {ctypeIsNone, 0x7F, 0x7F}, // DEL
} ;