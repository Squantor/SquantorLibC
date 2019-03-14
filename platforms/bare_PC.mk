# platform settings for PC's with just GCC installed
TOOLCHAIN_PREFIX =
C_SOURCES +=
CXX_SOURCES +=
S_SOURCES += 
COMPILE_C_FLAGS += -nostdlib -fomit-frame-pointer -fno-stack-protector -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-unroll-loops -fmerge-all-constants -fno-ident -mfpmath=sse -mfancy-math-387 -ffunction-sections -fdata-sections -fno-common -c -fmessage-length=0 -fno-builtin
COMPILE_CXX_FLAGS += -nostdlib -fomit-frame-pointer -fno-stack-protector -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-unroll-loops -fmerge-all-constants -fno-ident -mfpmath=sse -mfancy-math-387 -ffunction-sections -fdata-sections -fno-common -c -fmessage-length=0 -fno-builtin -fno-rtti -fno-exceptions 
COMPILE_ASM_FLAGS += -c -x assembler-with-cpp
ALIBS +=
LINK_FLAGS +=
LINK_FLAGS_RELEASE += -s