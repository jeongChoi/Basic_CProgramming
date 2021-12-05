#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int array[5001] = { 0, 0, 0, 1, -1, 1 };
	int N;
	
	scanf("%d", &N);

	for (int i = 6; i < N+1; i++) {
		if (array[i - 5] > 0) {
			array[i] = array[i - 5] + 1;
		}
		else if (array[i - 3] > 0) {
			array[i] = array[i - 3] + 1;
		}
		else {
			array[i] = -1;
		}
	}

	printf("%d\n", array[N]);

	return 0;
}
