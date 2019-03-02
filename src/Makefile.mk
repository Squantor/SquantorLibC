# project settings
BIN_NAME = libsqlibc
C_SOURCES = src/string/strlen.c src/string/strtok.c src/string/strcmp.c src/string/strncpy.c \
src/string/memchr.c src/string/memcmp.c src/string/memcpy.c src/string/memmove.c src/string/memset.c \
src/stdlib/strto.c \
src/internal/ctypetable.c \
src/ctype/isspace.c src/ctype/isxdigit.c \
src/stdio/stdFILE.c \
src/stdio/putchar.c src/stdio/fputc.c src/stdio/getchar.c src/stdio/fgetc.c
INCLUDES = -Iinc
COMPILE_C_FLAGS += -std=gnu11 -Wall -Wextra -Wno-main -fno-common -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections 
COMPILE_CXX_FLAGS += -std=c++17 -Wall -Wextra -Wno-main -fno-common -c -fmessage-length=0 -fno-builtin -ffunction-sections -fdata-sections -fno-rtti -fno-exceptions 
COMPILE_ASM_FLAGS += -c -x assembler-with-cpp
LINK_FLAGS += -flto -nostdlib -Xlinker --gc-sections -Xlinker -print-memory-usage

