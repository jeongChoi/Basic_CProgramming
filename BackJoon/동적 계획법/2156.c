#pragma warning(disable : 4996)
#include <stdio.h>

#define max(a, b) (a > b ? a : b)

int dp[10001] = { 0 };

int main(void) {
	int n;
	int g[10001] = { 0 };
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &g[i]);
	}

	dp[1] = g[1];
	dp[2] = dp[1] + g[2];
	dp[3] = max(max(dp[1] + g[3], dp[2]), g[2] + g[3]);

	if (n <= 3) {
		printf("%d\n", dp[n]);
		return 0;
	}

	for (int i = 4; i <= n; i++) {
		dp[i] = max(max(dp[i - 3] + g[i - 1] + g[i], dp[i - 2] + g[i]), dp[i-1]);
	}

	printf("%d\n", dp[n]);
	
	return 0;
}