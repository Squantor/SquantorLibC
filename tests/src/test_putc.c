/*
MIT License

Copyright (c) 2019 Bart Bilos

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
/*
*/
#include <sqMinUnitC.h>
#include <test_putc.h>
#include <stdio.h>

#define GOODCHAR    55
#define BADCHAR     0

bool testPutcWrite(sqlibcFILE_t *this, void *buf, size_t len, size_t *written);
char const testPutcFilename[] = "testPutc";

sqlibcFILEops_t const testPutcOperations = {&testPutcWrite, NULL};
FILE testPutcFile = {0, &testPutcOperations, testPutcFilename};

bool testPutcWrite(sqlibcFILE_t *this, void *buf, size_t len, size_t *written)
{
    // assume single char for now
    char c = *(char *) buf;
    if(c == BADCHAR || len > 1)
    {
        this->errno = EBUSY;
        return false;
    }
    else
    {
        *written = len;
        return true;
    }
}

void testPutcSetup(void) 
{
    
}

void testPutcTeardown(void) 
{

}

MU_TEST(testPutcNormal) 
{
    mu_check(putc(GOODCHAR, &testPutcFile) != EOF);
    mu_check(putc(BADCHAR, &testPutcFile) == EOF);
}

MU_TEST_SUITE(testPutc) 
{
    MU_SUITE_CONFIGURE(&testPutcSetup, &testPutcTeardown);
    MU_RUN_TEST(testPutcNormal);
}

void testPutcSuite()
{
    MU_RUN_SUITE(testPutc);
}