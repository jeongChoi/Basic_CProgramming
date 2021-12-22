#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int first, int mid, int last) {
	int i, j, k, l;
	i = first;
	j = mid + 1;
	k = first;

	int *a = (int *)malloc(sizeof(int)*(last+1));

	while (i <= mid && j <= last) {
		if (arr[i] < arr[j]) {
			a[k++] = arr[i++];
		}
		else {
			a[k++] = arr[j++];
		}
	}

	if (i <= mid) {
		for (l = i; l <= mid; l++) {
			a[k++] = arr[l];
		}
	}
	else {
		for (l = j; l <= last; l++) {
			a[k++] = arr[l];
		}
	}

	for (l = first; l <= last; l++) {
		arr[l] = a[l];
	}

	free(a);
}
void mergeSort(int arr[], int first, int last) {
	int mid;

	if (first < last) {
		mid = (first + last) / 2;
		mergeSort(arr, first, mid);
		mergeSort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}
int main(void) {
	int arr[7] = { 3, 2, 4, 1, 7, 6, 5 };
	int i;

	mergeSort(arr, 0, 6);

	for (i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
