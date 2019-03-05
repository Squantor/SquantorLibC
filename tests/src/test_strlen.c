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
#include <test_strlen.h>
#include <sqstring.h>

static const char strlen_test_length[] = "TestString";
static const char strlen_test_empty[] = "";
static const char strnlen_test_invalid[5] = {'a', 'b', 'c', 'd', 'e' };

void test_strlen_setup(void) 
{
    
}

void test_strlen_teardown(void) 
{

}

MU_TEST(test_strlen_normal) 
{
    mu_check(10 == sqstrlen(strlen_test_length));
}

MU_TEST(test_strlen_empty) 
{
    mu_check(0 == sqstrlen(strlen_test_empty));
}

MU_TEST(test_strnlen_normal) 
{
    mu_check(10 == sqstrnlen(strlen_test_length, sizeof(strlen_test_length)));
}

MU_TEST(test_strnlen_empty) 
{
    mu_check(0 == sqstrnlen(strlen_test_empty, sizeof(strlen_test_empty)));
}

MU_TEST(test_strnlen_invalid) 
{
    mu_check(sizeof(strnlen_test_invalid) == sqstrnlen(strnlen_test_invalid, sizeof(strnlen_test_invalid)));
}

MU_TEST_SUITE(test_strlen) 
{
    MU_SUITE_CONFIGURE(&test_strlen_setup, &test_strlen_teardown);
    
    MU_RUN_TEST(test_strlen_normal);
    MU_RUN_TEST(test_strlen_empty);
    MU_RUN_TEST(test_strnlen_normal);
    MU_RUN_TEST(test_strnlen_empty);
    MU_RUN_TEST(test_strnlen_invalid);
}

void testStrlenSuite()
{
    MU_RUN_SUITE(test_strlen);
}