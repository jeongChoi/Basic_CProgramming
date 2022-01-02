#pragma warning(disable : 4996)
#include <stdio.h>

#define min(a, b) (a < b ? a : b)

int dp[1000001] = { 0 };

int main(void) {
	int n;
	
	scanf("%d", &n);
	
	if (n == 1) {
		printf("0\n");
		return 0;
	}

	if (n <= 3) {
		printf("1\n");
		return 0;
	}

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;

		if (i % 3 == 0 && i % 2 == 0) {
			dp[i] = min(min(dp[i], dp[i / 3] + 1), dp[i/2]+1);
		}
		else if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
		else if (i % 2 == 0) {
			dp[i] = min(dp[i / 2] + 1, dp[i]);
		}
	}

	printf("%d\n", dp[n]);
	
	return 0;
}