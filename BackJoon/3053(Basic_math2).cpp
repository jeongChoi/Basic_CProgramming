#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main(void) {
	int r;

	scanf("%d", &r);

	printf("%f\n", r * r * M_PI);
	printf("%f\n", r * r * 2.0);
	
	return 0;
}
