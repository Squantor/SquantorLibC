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
mocks for FILE handling reads and writes, used by file functions
*/
#include <stdio.h>
#include <mock_file.h>

bool testFileRead(sqlibcFILE_t *this, void *buf, size_t len, size_t *read);
bool testFileWrite(sqlibcFILE_t *this, const void *buf, size_t len, size_t *written);

char const testFileFilename[] = "testFILE";
sqlibcFILEops_t const testGetcOperations = {testFileWrite, testFileRead};
FILE testFile = {0, &testGetcOperations, testFileFilename};

char const testbuf[] = "1A";
size_t testbufIndex = 0;

// reset the file mock
void mockFileReset(void)
{
    testbufIndex = 0;
}

bool testFileRead(sqlibcFILE_t *this, void *buf, size_t len, size_t *read)
{
    if(len != 1)
    {
        this->errno = EINVAL;
        return false;
    }
    if(testbufIndex < sizeof(testbuf))
    {
        char *c = (char *) buf;
        *c = testbuf[testbufIndex];
        *read = sizeof(char);
        testbufIndex++;
        return true;
    }
    else
    {
        this->errno = EBUSY;
        return false;
    }
}

bool testFileWrite(sqlibcFILE_t *this, const void *buf, size_t len, size_t *written)
{
    if(len != 1)
    {
        this->errno = EINVAL;
        return false;
    }
    // differentiate between bad and good to test both code paths
    char c = *(char *) buf;
    if(c == BADCHAR)
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