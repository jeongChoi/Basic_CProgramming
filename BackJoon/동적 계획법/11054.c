#pragma warning(disable : 4996)
#include <stdio.h>

#define max(a, b) (a > b ? a : b)

int dp_up[1001] = { 0 };
int dp_down[1001] = { 0 };
int main(void) {
	int n, i, m = 1;
	int a[1001] = { 0 };
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	if (n == 1) {
		printf("1\n");
		return 0;
	}

	for (i = 1; i <= n; i++) {
		dp_up[i] = 1;
		dp_down[i] = 1;
	}

	for (i = 1; i <= n - 1; i++) {
		for (int j = i; j <= n; j++) {
			if (a[i] < a[j]) {
				dp_up[j] = max(dp_up[i] + 1, dp_up[j]);
			}
		}
	}

	for (i = n; i >= 2; i--) {
		for (int j = i; j >= 1; j--) {
			if (a[i] < a[j]) {
				dp_down[j] = max(dp_down[i] + 1, dp_down[j]);
			}
		}
		a[i] = dp_up[i] + dp_down[i] - 1;
		if (a[i] > m) {
			m = a[i];
		}
	}
	a[1] = dp_up[1] + dp_down[1] - 1;

	if (a[1] > m) {
		printf("%d\n", a[1]);
	}
	else {
		printf("%d\n", m);
	}

	return 0;
}