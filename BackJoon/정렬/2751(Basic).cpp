#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int k;
	int array[2000001] = { 0 };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &k);
		if (k < 0) {
			array[k + 2000001] += 1;
		}
		else {
			array[k] += 1;
		}
	}

	int cnt = 0;

	for (int i = 1000001; i <= 2000000; i++) {
		if (array[i] == 1) {
			printf("%d\n", i - 2000001);
			cnt++;
		}	
		if (cnt == n) {
			return 0;
		}
	}

	for (int i = 0; i <= 1000000; i++) {
		if(array[i] == 1) {
			printf("%d\n", i);
			cnt++;
		}
		if (cnt == n) {
			break;
		}
	}
	
	return 0;
}
