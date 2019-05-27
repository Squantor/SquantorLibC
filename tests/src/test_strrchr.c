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
#include <strings.h>
#include <test_strrchr.h>
#include <string.h>

void testStrrchrSetup(void) 
{
    
}

void testStrrchrTeardown(void) 
{

}

MU_TEST(testStrrchrNormal) 
{
    char abccd[] = "abccd";
    mu_check(strrchr(abcde, '\0') == &abcde[5]);
    mu_check(strrchr(abcde, 'e') == &abcde[4]);
    mu_check(strrchr(abcde, 'a') == &abcde[0]);
    mu_check(strrchr(abccd, 'c') == &abccd[3]);
}

MU_TEST_SUITE(testStrrchr) 
{
    MU_SUITE_CONFIGURE(&testStrrchrSetup, &testStrrchrTeardown);
    MU_RUN_TEST(testStrrchrNormal);
}

void testStrrchrSuite()
{
    MU_RUN_SUITE(testStrrchr);
}