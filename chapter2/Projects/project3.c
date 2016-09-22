#include <stdio.h>

int main(void)
{

	float amt = 0;
	float tax = 0;

	printf("Enter an amount: ");
	scanf("%f", &amt);

	tax = amt * 0.05;
	amt += tax;

	printf("With tax added: $%.2f\n", amt);
	
	return 0;
}