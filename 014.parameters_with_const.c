#include <stdio.h>

int main(void)
{
	int income = 0;
	double tax;
    
    // With 'const' declare double type parameter 'tax_rate' then initiate as 0.12.
    // Operate the code.
    const double tax_rate = 0.12;
    
    // Initiate 'tax_rate' as 0.15, run the code, then check if an error occurs.
    // tax_rate = 0.15
    
    
    income = 456;
    tax = income * tax_rate;
    printf("Your tax is : %.1lf.\n", tax);
    
    return 0;
}
