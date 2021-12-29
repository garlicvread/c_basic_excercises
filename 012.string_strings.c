/*
A string is saved in the form of 'char' type array. For example,
>>> char arrayName[lengthOfStringArray + 1] = stringLength;

To be specific, if you want to store a string array, declare the type of array, and initiate it as follows.
>>> char fruit[6] = "apple";

The length of array is bigger than the actual string as much as 1.
It is because the compiler automatically insert a null character '\0' at the end of the string.

To print out the string, use '%s'.
*/


#include <stdio.h>

int main(void)
{
    // Declare a char type string 'fruit' which has the size of 20, then initiate it with a string "strawberry".
    char fruit[21] = "strawberry";
    
    // Print "딸기 : fruit\n".
    // result --> 딸기 : strawberry
    printf ("딸기 : %s\n", fruit);
    
    // Print "딸기쨈 : fruit "jam"\n".
    // result --> 딸기쨈 : strawberry jam
    printf ("딸기쨈 : %s%s\n", fruit, " jam");
    
    return 0;
}
