#include <stdio.h>

int main(void)
{
    // %lf: floating number.
    printf("%.1lf\n", 1e6);
    printf("%.7lf\n", 3.14e-5);
  
    // %le: e expressions.
    printf("%le\n", 0.0000314);
    printf("%.2le\n", 0.0000314);
  
    return 0;
}
