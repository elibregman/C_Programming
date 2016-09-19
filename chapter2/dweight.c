#include <stdio.h>

int main(void)
{
    /* computes the dimensional weight of a 12 by 10 by 8 inch box */
    int height, length, width, volume, weight;
    
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Weight (pounds): %d\n", weight);

    return 0;
}
