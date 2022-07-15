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
#ifndef CTYPETABLE_H
#define CTYPETABLE_H

#include <stdint.h>

typedef enum {
  ctypeIsNone = 0x0000,
  ctypeIsBlank = 0x0001,
  ctypeIsCntrl = 0x0002,
  ctypeIsDigit = 0x0004,
  ctypeIsGraph = 0x0008,
  ctypeIsLower = 0x0010,
  ctypeIsPrint = 0x0020,
  ctypeIsPunct = 0x0040,
  ctypeIsSpace = 0x0080,
  ctypeIsUpper = 0x0100,
  ctypeIsXdigit = 0x0200,

} ctypeflags;

typedef struct {
  uint16_t flags;
  unsigned char upper;
  unsigned char lower;
} ctypeEntry;

extern const ctypeEntry asciiTableCtypes[128];

#endif