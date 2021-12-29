/*
The scanf() function is used to store the value inputted through your keyboard.

Usage:
    1. Use the format text fit the type of parameter.
    2. Place '&' in front of the parameter.
    
    e.g.)
        To input integer data to a int type parameter 'a':
        >>> scanf("%d", &a);
*/


#include <stdio.h>

int main(void)
{
	int a;
    // Use the format text, then put '&' in front of the data which will be inputted.
    scanf("%d", &a);
	
	printf("Inputted Value : %d\n", a);

	return 0;
}
