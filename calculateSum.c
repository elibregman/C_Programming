#include <stdio.h>

int main(void)
{
	
	int n = 0, i = 0, sum = 0;

	printf("Enter 10 integers to add (0 to terminate): ");
	while (n < 10) {
		scanf("%d", &i);
		if (i == 0) {
			break;
		}
		sum += i;
		n++;
	}

	printf("Sum = %d\n", sum);

	return 0;
}