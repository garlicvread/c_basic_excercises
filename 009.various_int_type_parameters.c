#include <stdio.h>

// Each data type has different memory storage size,
// but when it comes to 'print' process, use %d.

// Exceptions:
    // 'long' type: Attach lower case l to %d, so that it becomes %ld.
    // 'long long' type: 8 byte. Attach lower case l twice, so that it becomes %lld.

// To check the size of data: sizeof
// e.g.) printf("size of long long type data: %dbyte\n", sizeof(long long));

int main(void)
{
    // Declare a 'short' type parameter 'sh' and initiate it with '32767'.
    short sh = 32767;
    
    // Declare a 'int' type parameter 'in' and initiate it with '2147483647'.
    int in = 2147483647;
    
    // Declare a 'long' type parameter 'ln' and initiate it with '2147483647'.
    long ln = 2147483647;
    
    // Declare a 'long long' type parameter 'lln' and initiate it with '123451234512345'.
    long long lln = 123451234512345;

    printf("print 'short' type parameter: %d\n", sh);
    printf("print 'int' type parameter: %d\n", in);
    printf("print 'long' type parameter: %ld\n", ln);
    printf("print 'long long' type parameter: %lld\n", lln);
    
    return 0;
}
