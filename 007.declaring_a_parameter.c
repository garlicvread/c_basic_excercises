#include <stdio.h>

int main(void)
{
  // Declare 'int' type parameter 'a'
	int a;
  
	// Declare 'int' type parameter 'b' and 'c' in one line
  int b, c;
  
  // Declare 'double' type parameter 'da'
	double da;
  
  // Declare 'char' type parameter 'ch'
	char ch;
  
  // Initiate parameter 'a' as 10
	a = 10;

  // Input the int type parameter 'b' into 'a'
  b = a;
  
	// Input a + 20 to int type parameter 'c'
  c = a + 20;
  
  // Input a floating number 3.5 into 'double' parameter 'da'
	da = 3.5;
  
  // Input character 'A' into 'char' type parameter 'ch'
	ch = 'A';

	printf("Value of parameter a: %d\n", a);
	printf("Value of parameter b: %d\n", b);
	printf("Value of parameter c: %d\n", c);
	printf("Value of parameter da: %.1lf\n", da);
	printf("Value of parameter ch: %c\n", ch);

	return 0;
}
