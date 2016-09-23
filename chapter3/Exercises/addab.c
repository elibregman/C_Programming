#include <stdio.h>

/* given two integers, a and b, their sum is calculated*/

int main(void)
{
    int a, b, sum;

    printf("Enter two integers spaced apart: ");
    scanf("%d%d", &a, &b);
    
    sum = a + b;

    printf("Sum: %d\n", sum);

    return 0;
}
