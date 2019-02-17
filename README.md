# sqlibc
Minimal libc implementation. When I need a function that is a reimplementation of libc I put it here, together with its unittests. Next to standard libc functions it also contains non standard functions that would fit well in libc. Most if not all functions contain a few unittests, look in the directory test for those.
## Implemented parts
* memchr, memcmp, memcpy, memmove, memset
* strlen, strncpy, strtok
* strto something functions
* fgetc, fputc, getchar, putchar
* isalnum, isalpha, isascii, isblank, iscntrl, isdigit, isgraph, islower, isprint, ispunct, isspace, isupper, isxdigit, tolower, toupper
## TODO
* Big rename actions as they are still prefixed with sq as copied from my old embedded code library.
* makefiles should now be specified a platform
* fix warnings, do some cleanup in the whole stdio area

