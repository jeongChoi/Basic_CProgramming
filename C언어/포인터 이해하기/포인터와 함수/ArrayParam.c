#pragma warning(disable : 4996)
#include <stdio.h>

void ShowArray(int * param, int len) { // 배열을 함수의 인자로 받는 방법1
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", param[i]);
	}
	printf("\n");
}

void ShowArray2(int param[], int len) { // 배열을 함수의 인자로 받는 방법2
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", param[i]);
	}
	printf("\n");
}

int main() {
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };

	ShowArray(arr1, sizeof(arr1) / sizeof(int));
	ShowArray(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}