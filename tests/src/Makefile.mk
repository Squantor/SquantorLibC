# project settings
BIN_NAME = sqlibc_test
C_SOURCES += src/sqlibc_tests.c src/strings.c \
src/mock_file.c \
src/test_strlen.c src/test_strcmp.c \
src/test_memset.c src/test_memcmp.c src/test_memcpy.c src/test_memmove.c src/test_memchr.c \
src/test_dummy.c \
src/test_feof.c src/test_ferror.c \
src/test_getc.c src/test_putc.c
CXX_SOURCES +=
S_SOURCES +=
INCLUDES = -Iinc -I../inc
COMPILE_C_FLAGS += -std=gnu11 -Wall -Wextra
COMPILE_CXX_FLAGS += -std=c++17 -Wall -Wextra
COMPILE_ASM_FLAGS += -c -x assembler-with-cpp
LINK_FLAGS +=
RLIBDIR = -L"../bin/bare_PC/release"
RLIBS = -lsqlibc
DLIBDIR = -L"../bin/bare_PC/debug"
DLIBS = -lsqlibc
