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
#ifndef STRING_H
#define STRING_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

void *memchr(const void *s, int c, size_t n);
void *memset(void *s, int c, size_t n);
void *memmove(void *s1, const void * s2, size_t n);
void *memcpy(void *__restrict__ s1, const void *__restrict__ s2, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);

size_t strlen(const char *str);
size_t strnlen(const char *str, size_t num);
char *strcpy(char *__restrict__ s1, const char *__restrict__ s2);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
char *strncpy(char *__restrict__ s1, const char *__restrict__ s2, size_t n);
char *strcpy(char *__restrict__ s1, const char *__restrict__ s2);
char *strtok_r(char *__restrict__ s1, const char *__restrict__ s2, char ** pos);
char *strchr(const char *s, int c);
char *strcat(char *__restrict__ s1, const char *__restrict__ s2);
char *strpbrk(const char *s1, const char *s2);
char *strrchr(const char *s, int c);
size_t strspn(const char * s1, const char * s2);
char *strstr(const char *s1, const char *s2);

#ifdef __cplusplus
}
#endif

#endif
