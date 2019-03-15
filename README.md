# sqlibc
Minimal libc implementation, heavely copied/inspired by [PDCLIB](https://rootdirectory.ddns.net/dokuwiki/doku.php?id=pdclib:start). When I need a function that is a reimplementation of libc I put it here, together with its unittests. Most if not all functions contain a few unittests, look in the directory test for those.
## Implemented parts
* memchr, memcmp, memcpy, memmove, memset
* strlen, strcmp, strcpy, strncpy, strtok
* strto something functions
* isalnum, isalpha, isascii, isblank, iscntrl, isdigit, isgraph, islower, isprint, ispunct, isspace, isupper, isxdigit, tolower, toupper
* rudimentary FILE structure for fgetc, getc, fputc, putc, feof
## TODO
* retire FILE system and associated functions
# Limitations
This is only a partial C standard library implementation and tries to conform to the standard. Basically, when I need a libc function, I add it here.
