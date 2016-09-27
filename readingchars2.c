#include <stdio.h>

int main(void)
{

	int len = 0;
	char ch;

	printf("Enter any message: ");
	scanf("%c", &ch);
	while (ch != '\n') {
		len++;	
		scanf("%c", &ch);
	}

	printf("Your message was %d character(s) long.\n", len);

	return 0;
}