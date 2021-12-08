#include <stdio.h>

int linearSearch(int arr[], int len, int target) {

	for (int i = 0; i < len; i++) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	int arr[] = { 1, 3, 5, 7, 8 };
	int idx;

	idx = linearSearch(arr, sizeof(arr) / sizeof(int), 3);

	if (idx != -1) {
		printf("Ÿ�� �ε���: %d\n", idx);
	}
	else {
		printf("Ÿ�� ����\n");
	}

	idx = linearSearch(arr, sizeof(arr) / sizeof(int), 9);

	if (idx != -1) {
		printf("Ÿ�� �ε���: %d\n", idx);
	}
	else {
		printf("Ÿ�� ����\n");
	}
	return 0;
}
