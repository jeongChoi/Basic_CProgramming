#include <stdio.h>

int binarySearch(int arr[], int first, int last, int target) {
	
	if (first > last) {
		return -1;
	}

	int mid = (first + last) / 2;

	if (arr[mid] == target) {
		return mid;
	}
	else if (arr[mid] > target) {
		return binarySearch(arr, mid + 1, last, target);
	}
	else {
		return binarySearch(arr, first, mid - 1, target);
	}
}

int main(void) {
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = binarySearch(arr, 0, sizeof(arr) / sizeof(int), 5);
	
	if (idx == -1) {
		printf("Å½»ö ½ÇÆÐ\n");
	}
	else {
		printf("Å¸°Ù ÀÎµ¦½º: %d\n", idx);
	}

	idx = binarySearch(arr, 0, sizeof(arr) / sizeof(int), 8);

	if (idx == -1) {
		printf("Å½»ö ½ÇÆÐ\n");
	}
	else {
		printf("Å¸°Ù ÀÎµ¦½º: %d\n", idx);
	}

	return 0;
}
