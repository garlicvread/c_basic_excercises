/*
The assignment operator '=' is not able to use in case of arrays.
This is because the assignment operation requires steady size of data,
but the size of an array varies as the declaration.
*/

#include <stdio.h>

// Call string.h header file to handle strings.
#include <string.h>


int main(void)
{
    // Initiate char type parameter fruit with "strawberry".
    // The size of array is 20.
    char fruit[20] = "strawberry";
    printf("%s\n", fruit);
    
    // Using strcpy(), store "banana" to 'fruit'.
    strcpy(fruit, "banana");
    
    // Print 'fruit' with the format text and line break
    printf("%s\n", fruit);
    
    return 0;
}
