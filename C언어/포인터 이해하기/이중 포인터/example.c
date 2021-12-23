#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void MaxAndMin(int *arr, int len, int **dmaxptr, int **dminptr) {

	*dmaxptr = *dminptr = &arr[0];

	for (int i = 0; i < len; i++) {
		if (**dmaxptr < arr[i]) {
			*dmaxptr = &arr[i];
		}
		if (**dminptr > arr[i]) {
			*dminptr = &arr[i];
		}
	}
}

int main() {
	int * maxPtr;
	int * minPtr;
	int arr[5] = { 23, 2, 34, 4, 5 };

	int len = sizeof(arr) / sizeof(int);

	MaxAndMin(arr, len, &maxPtr, &minPtr);

	printf("%d %d\n", *maxPtr, *minPtr);
}