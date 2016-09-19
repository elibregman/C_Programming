#include <stdio.h>

#define HEIGHT_FT 5
#define HEIGHT_IN 9

int main(void)
{
    int weight;
    printf("Enter your weight(pounds): ");
    scanf("%d", &weight);

    printf("Your height is %dft %dinches\n", HEIGHT_FT, HEIGHT_IN);
    printf("Your weight is %dlbs\n", weight);
    return 0;
}
