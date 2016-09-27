#include <stdio.h>

int main(void)
{
	
	typedef enum { false = 0, true = !false } bool;

	bool drinking_age;
	int age;

	printf("Enter your age: ");
	scanf("%d", &age);

	if (age < 21) {
		drinking_age = false;
	} else {
	 	drinking_age = true;
	}

	if (drinking_age) {
		printf("You are of drinking age\n");
	} else {
		printf("You are not of drinking age.\n");
	}


	return 0;
}