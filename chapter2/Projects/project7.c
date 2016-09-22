#include <stdio.h>

int main(void)
{
	int amt = 0;

	printf("Enter a dollar amount: ");
	scanf("%d", &amt);

	int twenties = amt / 20;
	amt -= (twenties * 20);

	int tens = amt / 10;
	amt -= (tens * 10);

	int fives = amt / 5;
	amt -= (fives * 5);

	int singles = amt / 1;
	amt -= (singles * 1);

	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d\n", singles);

	return 0;
}