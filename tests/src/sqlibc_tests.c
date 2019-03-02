#include <minunit.h>
#include <stdio.h>
#include <test_strlen.h>
#include <test_strto.h>
#include <test_strtok.h>

int main(int argc, char *argv[]) {
    int failedTests = 0;
    // sort test modules on dependencies
    failedTests += testStrlenSuite();
    failedTests += testStrtoSuite();
    failedTests += testStrtokSuite();
    if(failedTests > 0)
    {
        printf("ERROR: %d tests failed\n", failedTests);
        return -1;
    }
    else
    {
        printf("All tests ran succesfully\n");
        return 0;
    }
}
