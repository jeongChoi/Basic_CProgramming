#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int n, m;
	int array[101] = { 0 };
	int big = 0;
	int sum = 0;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}


	for (int i = n - 1; i >= 1; i--) {
		big = array[i];
		for (int j = i - 1; j >= 1; j--) {
			big += array[j];
			for (int k = j - 1; k >= 1; k--) {
				big += array[k];
				if (big <= m and big > sum) {
					sum = big;
				}
				big -= array[k];
			}
			big -= array[j];
		}
	}

	printf("%d\n", sum);

	return 0;
}
