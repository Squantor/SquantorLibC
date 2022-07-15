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
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <strto_internal.h>
#include <limits.h>

long int strtol(const char *s, char **endptr, int base) {
  long int rc;
  char sign = '+';
  const char *p = strto_pre(s, &sign, &base);
  if (base < 2 || base > 36) return 0;
  if (sign == '+') {
    rc = strto_main(&p, (unsigned)base, (uintmax_t)LONG_MAX, (uintmax_t)(LONG_MAX / base), (int)(LONG_MAX % base), &sign);
  } else {
    rc = strto_main(&p, (unsigned)base, (uintmax_t)LONG_MIN, (uintmax_t)(LONG_MIN / -base), (int)(-(LONG_MIN % base)), &sign);
  }
  if (endptr != NULL) *endptr = (p != NULL) ? (char *)p : (char *)s;
  return (sign == '+') ? rc : -rc;
}
