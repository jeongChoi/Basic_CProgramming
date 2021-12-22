#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int n;
	int j;
	int arr[41][2] = { {1, 0}, {0, 1} };

	scanf("%d", &n);

	for (int i = 2; i < 41; i++) {
		arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
		arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &j);
		printf("%d %d\n", arr[j][0], arr[j][1]);
	}

	return 0;
}