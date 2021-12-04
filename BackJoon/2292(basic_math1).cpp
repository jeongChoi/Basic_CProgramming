#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void) {

	long long n;

	scanf("%lld", &n);

	long long array[1000000] = { 0, 1, 7 };
	long long r = 6;
	
	if (n == 1) {
		printf("%d\n", 1);
		return 0;
	}
	else if (n <= 7) {
		printf("2\n");
		return 0;
	}
	
	for (int i = 2; i < 1000000; i++) {
		array[i+1] = array[i] + i * r;

		if (array[i + 1] >= n) {
			printf("%d\n", i+1);
			return 0;
		}
	}
	

	return 0;
}
