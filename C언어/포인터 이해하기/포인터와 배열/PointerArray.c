#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int num1 = 10, num2 = 20, num3 = 30;
	int *arr[3] = { &num1, &num2, &num3 }; // 포인터 배열이므로 변수들의 주소값으로 배열을 초기화
	int arr2[3] = { num1, num2, num3 };

	printf("%d %d\n", *arr[0], arr2[0]);
	printf("%d %d\n", *arr[1], arr2[1]);
	printf("%d %d\n", *arr[2], arr2[2]);

	char * strArr[3] = { "simple", "String", "array" };

	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
	return 0;
}