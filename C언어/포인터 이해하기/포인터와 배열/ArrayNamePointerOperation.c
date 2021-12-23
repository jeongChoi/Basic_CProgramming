#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g \n", *arr1, *arr2); // 배열  자체가 포인터이므로 배열의 첫 번째 요소의 값이 출력된다.
	*arr1 += 100;
	*arr2 += 100;
	printf("%d %g \n", arr1[0], arr2[0]);

	return 0;
}