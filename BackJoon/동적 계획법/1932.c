#pragma warning(disable : 4996)
#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)

int cost[501][501] = { 0 };

int main(void) {
	int n, i, temp;

	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			scanf("%d", &cost[i][j]);
		}
	}


	for (i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cost[i][j] = MAX(cost[i - 1][j - 1] + cost[i][j], cost[i - 1][j] + cost[i][j]);
		}
	}

	temp = cost[n][1];

	for (i = 2; i <= n; i++) {
		temp = MAX(temp, cost[n][i]);
	}
	
	printf("%d\n", temp);

	return 0;
}