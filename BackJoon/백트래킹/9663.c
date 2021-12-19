#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int cnt = 0;

int promissing(int col[], int i, int n) {
	int k = 1;

	while (k < i) {
		if (col[k] == col[i] || abs(col[i] - col[k]) == i - k) return 0;
		k++;
	}
	return 1;
}
void queen(int col[], int i, int n) {
	int j;

	if (promissing(col, i, n)) {
		if (i == n) {
			cnt += 1;
			return;
		}
		for (j = 1; j <= n; j++) {
			col[i + 1] = j;
			queen(col, i + 1, n);
		}
	}
}

int main(void) {
	int n;

	scanf("%d", &n);

	int* col = (int*)calloc(n+1, sizeof(int));

	queen(col, 0, n);

	printf("%d\n", cnt);
	return 0;
}
