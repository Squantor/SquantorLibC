# project settings
BIN_NAME = sqlibc_test
C_SOURCES += src/sqlibc_tests.c \
src/test_strlen.c \
src/test_memset.c src/test_memcmp.c src/test_memcpy.c src/test_memmove.c src/test_memchr.c
CXX_SOURCES +=
S_SOURCES +=
INCLUDES = -Iinc -I../inc
COMPILE_C_FLAGS += -std=gnu11 -Wall -Wextra
COMPILE_CXX_FLAGS += -std=c++17 -Wall -Wextra
COMPILE_ASM_FLAGS += -c -x assembler-with-cpp
LINK_FLAGS +=
RLIBDIR = -L"../bin/PC/release"
RLIBS = -lsqlibc
DLIBDIR = -L"../bin/PC/debug"
DLIBS = -lsqlibc
