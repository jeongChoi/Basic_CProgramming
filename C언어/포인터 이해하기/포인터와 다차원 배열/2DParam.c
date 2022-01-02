#pragma warning(disable : 4996)
#include <stdio.h>

void ShowStyle(int(*arr)[4], int column) {
	int i, j;

	for (i = 0; i < column; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}

int SumArr(int arr[][4], int column) {
	int i, j, sum = 0;
	
	for (i = 0; i < column; i++) {
		for (j = 0; j < 4; j++) {
			sum += arr[i][j];
		}
	}

	return sum;
}

int main(void) {
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[3][4] = { 1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5 };

	ShowStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
	ShowStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
	printf("arr1 Sum : %d\n", SumArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
	printf("arr2 Sum : %d\n", SumArr(arr2, sizeof(arr2) / sizeof(arr2[0])));

	return 0;
}