#include <stdio.h>

int insertionSort(int arr[], int n) {
	int i, j;
	int temp;

	for (i = 1; i < n; i++) {
		temp = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > temp) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j + 1] = temp;
	}
}

int main(void) {
	int arr[5] = { 5, 3, 2, 4, 1 };

	int n = sizeof(arr) / sizeof(int);

	insertionSort(arr, n);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
