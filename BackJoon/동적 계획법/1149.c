#pragma warning(disable : 4996)
#include <stdio.h>

#define MIN(a, b) (a < b ? a : b)

int cost[1001][3];
int dp[1001][3];

int main(void) {
	int n, i;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
	}


	for (i = 1; i <= n; i++) {
		dp[i][0] = MIN((cost[i][0] + dp[i - 1][1]), (cost[i][0] + dp[i - 1][2]));
		dp[i][1] = MIN((cost[i][1] + dp[i - 1][0]), (cost[i][1] + dp[i - 1][2]));
		dp[i][2] = MIN((cost[i][2] + dp[i - 1][0]), (cost[i][2] + dp[i - 1][1]));
	}


	printf("%d\n", MIN(MIN(dp[n][0], dp[n][1]), dp[n][2]));

	return 0;
}