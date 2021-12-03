#include <stdio.h> 

int main() {
	int big, small, n;
	int arr[1000001];

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	big = arr[1];
	small = arr[1];

	for (int i = 2; i <= n; i++) {
		if (arr[i] > big) {
			big = arr[i];
		}
		if (arr[i] < small) {
			small = arr[i];
		}
	}

	printf("%d %d\n", small, big);

	return 0;
}
