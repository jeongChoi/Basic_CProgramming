#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, num;
	int arr[10001] = { 0 };
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num] += 1;
	}

	for (int i = 0; i <= 10000; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
				cnt++;
			}
		}
		if (cnt == n) {
			break;
		}
	}

	return 0;
}
