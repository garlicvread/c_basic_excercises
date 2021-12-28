#include <stdio.h>

int main(void)
{
    // Declare a 'unsigned int' type parameter a and initiate it with 4294967295.
    unsigned int a = 4294967295;
    
    printf("%d\n", a);
    
    // Initiate a with '-1'.
    a = -1;
    
    printf("%u\n", a);
    
    return 0;
}
