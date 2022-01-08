#pragma warning(disable : 4996)
#include <stdio.h>

int main(void) {
	int n, i, k;
	int min = 1000000;
	int max = 1;

	scanf("%d", &n);

	for (i = 0; i < n; i++) { // 왜 이렇게 코드를 짰는지 생각해보기
		scanf("%d", &k);
		if (k > max) {
			max = k;
		}
		if (k < min) {
			min = k;
		}
	}

	printf("%d\n", max*min);
	return 0;
}