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
/*
Implementation taken from PDCLib
*/

#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include <libc_strings.h>

const char *strto_pre(const char *p, char *sign, int *base)
{
    /* skipping leading whitespace */
    while(isspace(*p)) 
        ++p;
    /* determining / skipping sign */
    if (*p != '+' && *p != '-') 
        *sign = '+';
    else 
        *sign = *(p++);
    /* determining base */
    if(*p == '0')
    {
        ++p;
        if((*base == 0 || *base == 16) && (*p == 'x' || *p == 'X'))
        {
            *base = 16;
            ++p;
            /* catching a border case here: "0x" followed by a non-digit should
               be parsed as the unprefixed zero.
               We have to "rewind" the parsing; having the base set to 16 if it
               was zero previously does not hurt, as the result is zero anyway.
            */
            if (memchr(libc_digits, tolower(*p), *base) == NULL)
            {
                p -= 2;
            }
        }
        else if(*base == 0)
        {
            *base = 8;
        }
        else
        {
            --p;
        }
    }
    else if(!*base)
    {
        *base = 10;
    }
    return((*base >= 2) && (*base <= 36)) ? p : NULL;
}