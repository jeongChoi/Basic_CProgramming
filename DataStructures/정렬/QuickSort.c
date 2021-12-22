#include <stdio.h>

void swap(int arr[], int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int partition(int arr[], int left, int right) {
	int pivot = arr[left];
	int low = left + 1;
	int high = right;

	while (low <= high) {
		
		while (pivot >= arr[low] && low <= right) {
			low++;
		}

		while (pivot <= arr[high] && high >= (left+1)) {
			high--;
		}

		if (low <= high) {
			swap(arr, low, high);
		}

	}

	swap(arr, left, high);
	return high;
}

void quickSort(int arr[], int left, int right) {
	if (left <= right) {
		int pivot = partition(arr, left, right);
		quickSort(arr, left, pivot - 1);
		quickSort(arr, pivot + 1, right);
	}
}

int main(void) {
	int arr[7] = { 3, 2, 4, 1, 7, 6, 5 };

	int len = sizeof(arr) / sizeof(int) -1;

	quickSort(arr, 0, len);

	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}