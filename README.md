# SquantorLibC
Minimal libc implementation, heavely copied/inspired by [PDCLIB](https://rootdirectory.ddns.net/dokuwiki/doku.php?id=pdclib:start). When I need a function that is a reimplementation of libc I put it here, together with its unittests. Most if not all functions contain a few unittests, look in the directory test for those.
## Checking out
use ```git clone --recurse-submodules https://github.com/Squantor/$(PROJECT).git``` to clone the repo and its submodules.
## Compiling
This project uses gnu make as its build system on a Linux platform. There are two build targets: release and debug. Release builds with optimizations and minimal debugging information. Debug builds with no optimization and full debug information.
```
$ make debug
$ make release
```
### Depedencies
This program depends on my slightly modified version of [minimal C testing framework](https://github.com/Squantor/squantorMinUnitC.git). This is automatically checked out when using ```git clone --recurse-submodules```.

## Implemented parts
* ctype: isalnum, isalpha, isascii, isblank, iscntrl, isdigit, isgraph, islower, isprint, ispunct, isspace, isupper, isxdigit, tolower toupper
* errno: errno variable
* stdlib: strstol, strto, strtol, stroul
* string: memchr, memcmp, memcpy, memmove, memset, strcat, strchr, strcpy, strlen, strncmp, strncpy, strnlen, strpbrk, strrchr, strspn, strstr, strto, strtok
## TODO
* add printf
## Limitations
This is only a partial C standard library implementation and tries to conform to the standard. Basically, when I need a libc function, I add it here.
