#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int arr[3] = { 15, 25, 35 };
	int * ptr = arr; // int * ptr = &arr[0];

	printf("%d %d \n", arr[0], ptr[0]);
	printf("%d %d \n", arr[1], ptr[1]);
	printf("%d %d \n", arr[2], ptr[2]);
	printf("%d %d \n", *arr, *ptr);

	return 0;
}