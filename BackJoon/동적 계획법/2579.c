#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

#define max(a, b) a > b ? a : b

int main(void) {
	int n, i;
	int step[301] = { 0 };
	int dp[301] = { 0 };
	
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &step[i]);
	}

	if (n == 1) {
		printf("%d\n", step[n]);
		return 0;
	}
	else if (n == 2) {
		printf("%d\n", step[1] + step[2]);
		return 0;
	}
	else if (n == 3) {
		printf("%d\n", max(step[1] + step[3], step[2] + step[3]));
		return 0;
	}

	dp[1] = step[1];
	dp[2] = step[1] + step[2];
	dp[3] = max(dp[1] + step[3], step[2] + step[3]);

	for (i = 4; i <= n; i++) {
		dp[i] = max(dp[i - 2] + step[i], dp[i-3] + step[i-1] + step[i]);
	}
	
	
	printf("%d\n", dp[n]);
	return 0;
}