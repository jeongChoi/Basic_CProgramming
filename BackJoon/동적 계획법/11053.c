#pragma warning(disable : 4996)
#include <stdio.h>

#define max(a, b) (a > b ? a : b)

int dp[1001] = { 0 };

int main(void) {
	int n, i, m = 1;
	int a[1001] = { 0 };
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (i = 1; i <= n; i++) {
		dp[i] = 1;
	}

	for (i = 1; i <= n-1; i++) {
		for (int j = i; j <= n; j++) {
			if (a[i] < a[j]) {
				dp[j] = max(dp[i] + 1, dp[j]);
				if (m < dp[j]) m = dp[j];
			}
		}
	}

	printf("%d\n", m);
	return 0;
}