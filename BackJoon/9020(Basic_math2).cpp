#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int n, num;
	int array[10001] = { -1, -1 };
	int a, b;

	for (int i = 2; i <= 10000; i++) {
		if (array[i] == 0) {
			for (int j = 2; i * j <= 10000; j++) {
				array[i * j] = -1;
			}
		}
	}
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		for (int j = 2; j <= num/2; j++) {
			if (array[j] == 0 and array[num - j] == 0) {
				a = j;
				b = num - j;
			}
		}
		printf("%d %d\n", a, b);
	}

	return 0;
}
