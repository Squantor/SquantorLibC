# SquantorLibC unittests
Here live the unittests for each of libc functions. Each libc function gets it own test file and tests, most of these are verbatim lifted from PDLIBC and adapted to my own implementation of [MinUnitC](https://github.com/Squantor/squantorMinUnitC).
## Compiling
This project uses gnu make as its build system on a Linux platform. There are two build targets: release and debug. Release builds with optimizations and minimal debugging information. Debug builds with no optimization and full debug information.
```
$ make debug
$ make release
```
### Depedencies
This program depends on my slightly modified version of [minimal C testing framework](https://github.com/Squantor/squantorMinUnitC.git). This is automatically checked out when using ```git clone --recurse-submodules```.
# TODO
