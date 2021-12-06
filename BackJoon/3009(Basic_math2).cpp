#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int x[4];
	int y[4];
	int array_x[1001] = { 0 };
	int array_y[1001] = { 0 };
	

	
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &x[i], &y[i]);
		array_x[x[i]] += 1;
		array_y[y[i]] += 1;
	}

	for (int i = 0; i < 3; i++) {
		if (array_x[x[i]] == 1) {
			x[3] = x[i];
		}
		if (array_y[y[i]] == 1) {
			y[3] = y[i];
		}
	}

	printf("%d %d\n", x[3], y[3]);
	return 0;
}
