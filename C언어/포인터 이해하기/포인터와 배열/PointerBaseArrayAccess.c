#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int arr[3] = { 11, 22, 33 };
	int *ptr = arr;

	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); // ptr이 참조하는 값이 변하지는 않는다.

	printf("%d\n", *ptr); ptr++; // ptr이 참조하는 값이 증가 혹은 감소한다.
	printf("%d\n", *ptr); ptr++;
	printf("%d\n", *ptr); ptr--;
	printf("%d\n", *ptr); ptr--;
	printf("%d\n", *ptr);

	return 0;
}