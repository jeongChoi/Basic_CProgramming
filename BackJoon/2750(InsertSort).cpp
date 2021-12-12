#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void insert_Sort(int arr[], int n) {
	int i, j, key;

	for (i = 1; i < n; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > key) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}
		arr[j + 1] = key;
	}
}
int main(void) {
	int arr[1001] = { 0 };
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	insert_Sort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
