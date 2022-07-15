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
# Version: 20220715

# library settings
NAME := squantorLibC

# library files and includes

# get base path
BASE := $(patsubst %/,%,$(dir $(lastword $(MAKEFILE_LIST))))

# library files and includes
$(NAME)_LIB_FILES := $(BASE)/src/string/strlen.c \
$(BASE)/src/string/strnlen.c \
$(BASE)/src/string/strtok.c \
$(BASE)/src/string/strcmp.c \
$(BASE)/src/string/strcpy.c \
$(BASE)/src/string/strncpy.c \
$(BASE)/src/string/strncmp.c \
$(BASE)/src/string/memchr.c \
$(BASE)/src/string/memcmp.c \
$(BASE)/src/string/memcpy.c \
$(BASE)/src/string/memmove.c \
$(BASE)/src/string/memset.c \
$(BASE)/src/string/strchr.c \
$(BASE)/src/string/strcat.c \
$(BASE)/src/string/strpbrk.c \
$(BASE)/src/string/strrchr.c \
$(BASE)/src/string/strspn.c \
$(BASE)/src/string/strstr.c \
$(BASE)/src/stdlib/strto.c \
$(BASE)/src/stdlib/strtoul.c \
$(BASE)/src/stdlib/strtol.c \
$(BASE)/src/internal/ctypetable.c \
$(BASE)/src/internal/libc_strings.c \
$(BASE)/src/internal/strto_pre.c \
$(BASE)/src/internal/strto_main.c \
$(BASE)/src/ctype/isalnum.c \
$(BASE)/src/ctype/isalpha.c \
$(BASE)/src/ctype/isascii.c \
$(BASE)/src/ctype/isblank.c \
$(BASE)/src/ctype/iscntrl.c \
$(BASE)/src/ctype/isdigit.c \
$(BASE)/src/ctype/isgraph.c \
$(BASE)/src/ctype/islower.c \
$(BASE)/src/ctype/isprint.c \
$(BASE)/src/ctype/ispunct.c \
$(BASE)/src/ctype/isspace.c \
$(BASE)/src/ctype/isupper.c \
$(BASE)/src/ctype/isxdigit.c \
$(BASE)/src/ctype/tolower.c \
$(BASE)/src/ctype/toupper.c \
$(BASE)/src/errno/errno.c

$(NAME)_LIB_INCLUDES := -I$(BASE)/inc -I$(BASE)/inc_internal

# --- nothing user definable below ---
LIBRARIES += $(NAME)

