#include <stdio.h>
#include <math.h> /* M_PI */

int main(void)
{
	/* 10 m radius */
	int r = 10;
	float volume = (4.0f/3.0f) * (M_PI * r * r * r);

	printf("Volume of sphere with a 10m radius: %.2f\n", volume);

	return 0;
}