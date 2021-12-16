#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int x[5];
	int small = 1001;

	scanf("%d %d %d %d", &x[0], &x[1], &x[2], &x[3]);

	x[2]= x[2] - x[0];
	x[3] =x[3] - x[1];

	for (int i = 0; i < 4; i++) {
		if (x[i] < small) {
			small = x[i];
		}
	}

	printf("%d\n", small);

	
	return 0;
}
