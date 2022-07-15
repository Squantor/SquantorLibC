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
#include <errno.h>
#include <string.h>
#include <stdint.h>
#include <strto_internal.h>
#include <libc_strings.h>

long int strto_main(const char **p, unsigned int base, uintmax_t error, uintmax_t limval, int limdigit, char *sign) {
  long int rc = 0;
  int digit = -1;
  const char *x;
  while ((x = memchr(libc_digits, tolower(**p), base)) != NULL) {
    digit = x - libc_digits;
    if (((uintmax_t)rc < limval) || (((uintmax_t)rc == limval) && (digit <= limdigit))) {
      rc = rc * base + (unsigned)digit;
      ++(*p);
    } else {
      errno = ERANGE;
      /* TODO: Only if endptr != NULL - but do we really want *another* parameter? */
      while (memchr(libc_digits, tolower(**p), base) != NULL) ++(*p);
      /* TODO: This is ugly, but keeps caller from negating the error value */
      *sign = '+';
      return error;
    }
  }
  if (digit == -1) {
    *p = NULL;
    return 0;
  }
  return rc;
}