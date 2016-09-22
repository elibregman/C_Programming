#include <stdio.h>

int main(void)
{
	long l = 0;
	printf("Enter a value for x: ");
	scanf("%ld", &l);

	printf("Answer to the polynomial = %ld\n", 3*l*l*l*l*l + 2*l*l*l*l -5*l*l*l - l*l + 7*l - 6);

	return 0;
}