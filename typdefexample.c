#include <stdio.h>

int main(void)
{
	typedef double Money;

	Money cash_in;
	Money cash_out;

	printf("Enter how much money you have made in the last two weeks: ");
	scanf("%d", &cash_in);
	printf("Enter how much money you have spent in the last two weeks: ");
	scanf("%d", &cash_out);

	if (cash_in < cash_out) {
		printf("Saving money is as simple as that, good job.\n");
	} else {
		printf("Spend less than you bring in, simple mathematics can save you money.\n");
	}

	return 0;
}