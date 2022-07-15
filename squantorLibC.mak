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

# current makefile base dir relative to Makefile
BASE_DIR := $(patsubst %/,%,$(dir $(lastword $(MAKEFILE_LIST))))

# library files and includes
$(NAME)_LIB_FILES := $(BASE_DIR)/src/string/strlen.c \
$(BASE_DIR)/src/string/strnlen.c \
$(BASE_DIR)/src/string/strtok.c \
$(BASE_DIR)/src/string/strcmp.c \
$(BASE_DIR)/src/string/strcpy.c \
$(BASE_DIR)/src/string/strncpy.c \
$(BASE_DIR)/src/string/strncmp.c \
$(BASE_DIR)/src/string/memchr.c \
$(BASE_DIR)/src/string/memcmp.c \
$(BASE_DIR)/src/string/memcpy.c \
$(BASE_DIR)/src/string/memmove.c \
$(BASE_DIR)/src/string/memset.c \
$(BASE_DIR)/src/string/strchr.c \
$(BASE_DIR)/src/string/strcat.c \
$(BASE_DIR)/src/string/strpbrk.c \
$(BASE_DIR)/src/string/strrchr.c \
$(BASE_DIR)/src/string/strspn.c \
$(BASE_DIR)/src/string/strstr.c \
$(BASE_DIR)/src/stdlib/strto.c \
$(BASE_DIR)/src/stdlib/strtoul.c \
$(BASE_DIR)/src/stdlib/strtol.c \
$(BASE_DIR)/src/internal/ctypetable.c \
$(BASE_DIR)/src/internal/libc_strings.c \
$(BASE_DIR)/src/internal/strto_pre.c \
$(BASE_DIR)/src/internal/strto_main.c \
$(BASE_DIR)/src/ctype/isalnum.c \
$(BASE_DIR)/src/ctype/isalpha.c \
$(BASE_DIR)/src/ctype/isascii.c \
$(BASE_DIR)/src/ctype/isblank.c \
$(BASE_DIR)/src/ctype/iscntrl.c \
$(BASE_DIR)/src/ctype/isdigit.c \
$(BASE_DIR)/src/ctype/isgraph.c \
$(BASE_DIR)/src/ctype/islower.c \
$(BASE_DIR)/src/ctype/isprint.c \
$(BASE_DIR)/src/ctype/ispunct.c \
$(BASE_DIR)/src/ctype/isspace.c \
$(BASE_DIR)/src/ctype/isupper.c \
$(BASE_DIR)/src/ctype/isxdigit.c \
$(BASE_DIR)/src/ctype/tolower.c \
$(BASE_DIR)/src/ctype/toupper.c \
$(BASE_DIR)/src/errno/errno.c

$(NAME)_LIB_INCLUDES := -I$(BASE_DIR)/inc -I$(BASE_DIR)/inc_internal

# --- nothing user definable below ---
LIBRARIES += $(NAME)

