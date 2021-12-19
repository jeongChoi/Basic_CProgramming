#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void backtrack(int num[], int visited[], int n, int m, int k, int a) {

	if (k == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", num[i]);
		}
		printf("\n");
		return;
	}
	for (int j = a; j <= n; j++) {
		if (!(visited[j])) {
			num[k] = j;
			visited[j] = 1;
			backtrack(num, visited, n, m, k + 1, j);
			visited[j] = 0;
		}
	}
}

int main(void) {
	int n, m;

	scanf("%d %d", &n, &m);

	int* visited = (int*)calloc((n+1), sizeof(int));
	int* num = (int*)malloc(sizeof(int) * m );


	for (int i = 1; i <= n; i++) {
		num[0] = i;
		visited[i] = 1;
		backtrack(num, visited, n, m, 1, i);
	}
	
	
	free(visited);
	free(num);

	return 0;
}
