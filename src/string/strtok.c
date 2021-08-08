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
#include <string.h>

#pragma GCC optimize ("no-tree-loop-distribute-patterns")

char * strtok_r(char * restrict s1, const char * restrict s2, char ** pos)
{
    char * tmp = *pos;
    const char * p = s2;

    if(s1 != NULL)
    {
        /* new string */
        tmp = s1;
    }
    else
    {
        /* old string continued */
        if(tmp == NULL)
        {
            /* No old string, no new string, nothing to do */
            *pos = tmp;
            return NULL;
        }
        s1 = tmp;
    }

    /* skipping leading s2 characters */
    while(*p && *s1)
    {
        if(*s1 == *p)
        {
            /* found seperator; skip and start over */
            ++s1;
            p = s2;
            continue;
        }
        ++p;
    }

    if(!*s1)
    {
        /* no more to parse */
        return(*pos = tmp = NULL);
    }

    /* skipping non-s2 characters */
    tmp = s1;
    while(*tmp)
    {
        p = s2;
        while(*p)
        {
            if(*tmp == *p++)
            {
                /* found seperator; overwrite with '\0', position tmp, return */
                *tmp++ = '\0';
                (*pos) = tmp;
                return s1;
            }
        }
        ++tmp;
    }

    /* parsed to end of string */
    tmp = NULL;
    *pos = tmp;
    return s1;
}
