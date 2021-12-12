#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void select_sort(int arr[], int n) {
	int temp, idx;

	for (int i = 0; i < n - 1; i++) {
		temp = arr[i];

		for (int j = i + 1; j < n; j++) {
			if (temp > arr[j]) {
				temp = arr[j];
				idx = j;
			}
		}
		if (temp != arr[i]) {
			arr[idx] = arr[i];
			arr[i] = temp;
		}
	}
}

int main(void) {
	int n;
	int arr[1001] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	select_sort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
