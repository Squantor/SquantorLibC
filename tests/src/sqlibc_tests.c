#include <rt0/syscall.h>
#include <test_strlen.h>
#include <test_strto.h>
#include <test_strtok.h>

int minunitRun; /* tests run */
int minunitFailures; /* tests failed */
int minunitAsserts; /* asserts run */

int write( int f, const char* d, int l )
{
   int ret = syscall3( SYS_write, f, ( long )( d ), l );

   return( ret );
}

int str_len( const char *string )
{
   int length = 0;
   while( *string ) { string++; length++; }
   return( length );
}

void println( const char* string )
{
   write( 1, string, str_len( string ) );
   write( 1, "\n", 1 );
}

int main(int argc, char *argv[]) {
    int failedTests = 0;
    // sort test modules on dependencies
    failedTests += testStrlenSuite();
    failedTests += testStrtoSuite();
    failedTests += testStrtokSuite();
    // print something if we have a failure
    if(minunitFailures != 0)
        println("Test failures occured!");
    else
        println("All tests passed.");
    return 0;
}
