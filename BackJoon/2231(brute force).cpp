#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int n;
	int array[1000054] = { 0 };
	

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int k = i;
		int sum = i;

		while (k != 0) {
			sum += k % 10;
			k = k / 10;
		}

		if (array[sum] == 0) {
			array[sum] = i;
		}

		if (array[n] != 0) {
			break;
		}
		
	}
	
	printf("%d\n", array[n]);

	return 0;
}
