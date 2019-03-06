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
    {ctypeIsNone}, // NUL
    {ctypeIsNone}, // SOH
    {ctypeIsNone}, // STX
    {ctypeIsNone}, // ETX
    {ctypeIsNone}, // EOT
    {ctypeIsNone}, // ENQ
    {ctypeIsNone}, // ACK
    {ctypeIsNone}, // BEL
    {ctypeIsNone}, // BS
    {ctypeIsSpace}, // TAB
    {ctypeIsSpace}, // LF
    {ctypeIsSpace}, // VT
    {ctypeIsSpace}, // FF
    {ctypeIsSpace}, // CR
    {ctypeIsNone}, // SO
    {ctypeIsNone}, // SI
    {ctypeIsNone}, // DLE
    {ctypeIsNone}, // DC1
    {ctypeIsNone}, // DC2
    {ctypeIsNone}, // DC3
    {ctypeIsNone}, // DC4
    {ctypeIsNone}, // NAK
    {ctypeIsNone}, // SYN
    {ctypeIsNone}, // ETB
    {ctypeIsNone}, // CAN
    {ctypeIsNone}, // EM
    {ctypeIsNone}, // SUB
    {ctypeIsNone}, // ESC
    {ctypeIsNone}, // FS
    {ctypeIsNone}, // GS
    {ctypeIsNone}, // RS
    {ctypeIsNone}, // US
    {ctypeIsSpace}, // Space
    {ctypeIsNone}, // !
    {ctypeIsNone}, // "
    {ctypeIsNone}, // #
    {ctypeIsNone}, // $
    {ctypeIsNone}, // %
    {ctypeIsNone}, // &
    {ctypeIsNone}, // '
    {ctypeIsNone}, // (
    {ctypeIsNone}, // )
    {ctypeIsNone}, // *
    {ctypeIsNone}, // +
    {ctypeIsNone}, // ,
    {ctypeIsNone}, // -
    {ctypeIsNone}, // .
    {ctypeIsNone}, // /
    {ctypeIsDigit | ctypeIsXdigit}, // 0
    {ctypeIsDigit | ctypeIsXdigit}, // 1
    {ctypeIsDigit | ctypeIsXdigit}, // 2
    {ctypeIsDigit | ctypeIsXdigit}, // 3
    {ctypeIsDigit | ctypeIsXdigit}, // 4
    {ctypeIsDigit | ctypeIsXdigit}, // 5
    {ctypeIsDigit | ctypeIsXdigit}, // 6
    {ctypeIsDigit | ctypeIsXdigit}, // 7
    {ctypeIsDigit | ctypeIsXdigit}, // 8
    {ctypeIsDigit | ctypeIsXdigit}, // 9
    {ctypeIsNone}, // :
    {ctypeIsNone}, // ;
    {ctypeIsNone}, // <
    {ctypeIsNone}, // =
    {ctypeIsNone}, // >
    {ctypeIsNone}, // ?
    {ctypeIsNone}, // @
    {ctypeIsUpper | ctypeIsXdigit}, // A
    {ctypeIsUpper | ctypeIsXdigit}, // B
    {ctypeIsUpper | ctypeIsXdigit}, // C
    {ctypeIsUpper | ctypeIsXdigit}, // D
    {ctypeIsUpper | ctypeIsXdigit}, // E
    {ctypeIsUpper | ctypeIsXdigit}, // F
    {ctypeIsUpper}, // G
    {ctypeIsUpper}, // H
    {ctypeIsUpper}, // I
    {ctypeIsUpper}, // J
    {ctypeIsUpper}, // K
    {ctypeIsUpper}, // L
    {ctypeIsUpper}, // M
    {ctypeIsUpper}, // N
    {ctypeIsUpper}, // O
    {ctypeIsUpper}, // P
    {ctypeIsUpper}, // Q
    {ctypeIsUpper}, // R
    {ctypeIsUpper}, // S
    {ctypeIsUpper}, // T
    {ctypeIsUpper}, // U
    {ctypeIsUpper}, // V
    {ctypeIsUpper}, // W
    {ctypeIsUpper}, // X
    {ctypeIsUpper}, // Y
    {ctypeIsUpper}, // Z
    {ctypeIsNone}, // [
    {ctypeIsNone}, /* \ */
    {ctypeIsNone}, // ]
    {ctypeIsNone}, // ^
    {ctypeIsNone}, // _
    {ctypeIsNone}, // `
    {ctypeIsLower | ctypeIsXdigit}, // a
    {ctypeIsLower | ctypeIsXdigit}, // b
    {ctypeIsLower | ctypeIsXdigit}, // c
    {ctypeIsLower | ctypeIsXdigit}, // d
    {ctypeIsLower | ctypeIsXdigit}, // e
    {ctypeIsLower | ctypeIsXdigit}, // f
    {ctypeIsLower}, // g
    {ctypeIsLower}, // h
    {ctypeIsLower}, // i
    {ctypeIsLower}, // j
    {ctypeIsLower}, // k
    {ctypeIsLower}, // l
    {ctypeIsLower}, // m
    {ctypeIsLower}, // n
    {ctypeIsLower}, // o
    {ctypeIsLower}, // p
    {ctypeIsLower}, // q
    {ctypeIsLower}, // r
    {ctypeIsLower}, // s
    {ctypeIsLower}, // t
    {ctypeIsLower}, // u
    {ctypeIsLower}, // v
    {ctypeIsLower}, // w
    {ctypeIsLower}, // x
    {ctypeIsLower}, // y
    {ctypeIsLower}, // z
    {ctypeIsNone}, // {
    {ctypeIsNone}, // |
    {ctypeIsNone}, // }
    {ctypeIsNone}, // ~
    {ctypeIsNone}, // DEL
} ;