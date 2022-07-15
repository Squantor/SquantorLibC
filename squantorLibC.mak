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
LIB_DIR := $(patsubst %/,%,$(dir $(lastword $(MAKEFILE_LIST))))

# library files and includes
$(NAME)_LIB_FILES := $(LIB_DIR)/src/string/strlen.c \
$(LIB_DIR)/src/string/strnlen.c \
$(LIB_DIR)/src/string/strtok.c \
$(LIB_DIR)/src/string/strcmp.c \
$(LIB_DIR)/src/string/strcpy.c \
$(LIB_DIR)/src/string/strncpy.c \
$(LIB_DIR)/src/string/strncmp.c \
$(LIB_DIR)/src/string/memchr.c \
$(LIB_DIR)/src/string/memcmp.c \
$(LIB_DIR)/src/string/memcpy.c \
$(LIB_DIR)/src/string/memmove.c \
$(LIB_DIR)/src/string/memset.c \
$(LIB_DIR)/src/string/strchr.c \
$(LIB_DIR)/src/string/strcat.c \
$(LIB_DIR)/src/string/strpbrk.c \
$(LIB_DIR)/src/string/strrchr.c \
$(LIB_DIR)/src/string/strspn.c \
$(LIB_DIR)/src/string/strstr.c \
$(LIB_DIR)/src/stdlib/strto.c \
$(LIB_DIR)/src/stdlib/strtoul.c \
$(LIB_DIR)/src/stdlib/strtol.c \
$(LIB_DIR)/src/internal/ctypetable.c \
$(LIB_DIR)/src/internal/libc_strings.c \
$(LIB_DIR)/src/internal/strto_pre.c \
$(LIB_DIR)/src/internal/strto_main.c \
$(LIB_DIR)/src/ctype/isalnum.c \
$(LIB_DIR)/src/ctype/isalpha.c \
$(LIB_DIR)/src/ctype/isascii.c \
$(LIB_DIR)/src/ctype/isblank.c \
$(LIB_DIR)/src/ctype/iscntrl.c \
$(LIB_DIR)/src/ctype/isdigit.c \
$(LIB_DIR)/src/ctype/isgraph.c \
$(LIB_DIR)/src/ctype/islower.c \
$(LIB_DIR)/src/ctype/isprint.c \
$(LIB_DIR)/src/ctype/ispunct.c \
$(LIB_DIR)/src/ctype/isspace.c \
$(LIB_DIR)/src/ctype/isupper.c \
$(LIB_DIR)/src/ctype/isxdigit.c \
$(LIB_DIR)/src/ctype/tolower.c \
$(LIB_DIR)/src/ctype/toupper.c \
$(LIB_DIR)/src/errno/errno.c

$(NAME)_LIB_INCLUDES := -I$(LIB_DIR)/inc -I$(LIB_DIR)/inc_internal

# --- nothing user definable below ---
LIBRARIES += $(NAME)

