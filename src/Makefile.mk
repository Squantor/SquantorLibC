# project settings
BIN_NAME = libsqlibc
C_SOURCES = src/string/strlen.c src/string/strnlen.c \
src/string/strtok.c src/string/strcmp.c src/string/strcpy.c src/string/strncpy.c src/string/strncmp.c \
src/string/memchr.c src/string/memcmp.c src/string/memcpy.c src/string/memmove.c src/string/memset.c \
src/stdlib/strto.c src/stdlib/strtoul.c src/stdlib/strtol.c\
src/internal/ctypetable.c src/internal/libc_strings.c \
src/internal/strto_pre.c src/internal/strto_main.c \
src/ctype/isspace.c src/ctype/isxdigit.c \
src/ctype/toupper.c src/ctype/tolower.c \
src/errno/errno.c
INCLUDES = -Iinc -Iinc_internal
COMPILE_C_FLAGS += -std=gnu11 -Wall -Wextra -Wno-main 
COMPILE_CXX_FLAGS += -std=c++17 -Wall -Wextra -Wno-main
COMPILE_ASM_FLAGS += -c -x assembler-with-cpp
LINK_FLAGS += -flto -nostdlib -Xlinker --gc-sections -Xlinker -print-memory-usage
