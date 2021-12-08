#include <stdio.h>


int binarySearch(int arr[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last) {
		mid = (first + last) / 2;

		if (arr[mid] == target) {
			return mid;
		}
		else if(arr[mid] < target){
			last = mid - 1;
		}
		else {
			first = mid + 1;
		}
	}

	return -1;
}

int main(void) {
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = binarySearch(arr, sizeof(arr) / sizeof(int), 5);
	
	if (idx == -1) {
		printf("Å½»ö ½ÇÆĞ\n");
	}
	else {
		printf("Å¸°Ù ÀÎµ¦½º: %d\n", idx);
	}

	idx = binarySearch(arr, sizeof(arr) / sizeof(int), 8);

	if (idx == -1) {
		printf("Å½»ö ½ÇÆĞ\n");
	}
	else {
		printf("Å¸°Ù ÀÎµ¦½º: %d\n", idx);
	}

	return 0;
}
