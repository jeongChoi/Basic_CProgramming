#include <stdio.h>

int selectionSort(int arr[], int n) {
	int i, j, idx;
	int temp;

	for (i = 0; i < n - 1; i++) {
		idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[idx] > arr[j]) {
				idx = j;
			}
		}
		if (idx != i) {
			temp = arr[i];
			arr[i] = arr[idx];
			arr[idx] = temp;
		}
	}
}

int main(void) {
	int arr[4] = { 3, 2, 4, 1 };

	int n = sizeof(arr) / sizeof(int);

	selectionSort(arr, n);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}

	return 0;
} 