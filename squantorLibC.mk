# MIT License

# Copyright (c) 2020 Bart Bilos

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

# squantorLibC library files
#
# Version: 20200427

# library files and includes
FILES += squantorLibC/src/string/strlen.c \
squantorLibC/src/string/strnlen.c \
squantorLibC/src/string/strtok.c \
squantorLibC/src/string/strcmp.c \
squantorLibC/src/string/strcpy.c \
squantorLibC/src/string/strncpy.c \
squantorLibC/src/string/strncmp.c \
squantorLibC/src/string/memchr.c \
squantorLibC/src/string/memcmp.c \
squantorLibC/src/string/memcpy.c \
squantorLibC/src/string/memmove.c \
squantorLibC/src/string/memset.c \
squantorLibC/src/string/strchr.c \
squantorLibC/src/string/strcat.c \
squantorLibC/src/string/strpbrk.c \
squantorLibC/src/string/strrchr.c \
squantorLibC/src/string/strspn.c \
squantorLibC/src/string/strstr.c \
squantorLibC/src/stdlib/strto.c \
squantorLibC/src/stdlib/strtoul.c \
squantorLibC/src/stdlib/strtol.c \
squantorLibC/src/internal/ctypetable.c \
squantorLibC/src/internal/libc_strings.c \
squantorLibC/src/internal/strto_pre.c \
squantorLibC/src/internal/strto_main.c \
squantorLibC/src/ctype/isalnum.c \
squantorLibC/src/ctype/isalpha.c \
squantorLibC/src/ctype/isascii.c \
squantorLibC/src/ctype/isblank.c \
squantorLibC/src/ctype/iscntrl.c \
squantorLibC/src/ctype/isdigit.c \
squantorLibC/src/ctype/isgraph.c \
squantorLibC/src/ctype/islower.c \
squantorLibC/src/ctype/isprint.c \
squantorLibC/src/ctype/ispunct.c \
squantorLibC/src/ctype/isspace.c \
squantorLibC/src/ctype/isupper.c \
squantorLibC/src/ctype/isxdigit.c \
squantorLibC/src/ctype/tolower.c \
squantorLibC/src/ctype/toupper.c \
squantorLibC/src/errno/errno.c

INCLUDES += -IsquantorLibC/inc -IsquantorLibC/inc_internal


