#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, k;
	long long p[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9 }; // p가 증가할수록 범위가 커져 int의 범위를 넘어간다.
	for (int i = 11; i <= 100; i++) {
		p[i] = p[i - 1] + p[i - 5];
	}

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		printf("%lld\n", p[k]);
	}

	return 0;
}