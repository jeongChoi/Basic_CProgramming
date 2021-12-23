#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int * ptr = &arr[4];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *(ptr--);
	}

	printf("%d\n", sum);

	return 0;
}