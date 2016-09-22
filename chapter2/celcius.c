#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahr, cel;
    printf("Enter Fahrenheit temp: ");
    scanf("%f", &fahr);
    
    cel = (fahr - FREEZING_PT) * SCALE_FACTOR;
    printf("Celcius equivalent: %f\n", cel);

    return 0;
}
