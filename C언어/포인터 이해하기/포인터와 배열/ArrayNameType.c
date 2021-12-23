#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int arr[3] = { 0, 1, 2 };
	int * ptr = arr; // 포인터 변수를 배열의 이름(배열의 첫 번째 요소)으로 초기화

	printf("배열의 이름: %p \n", arr); // 배열도 포인터의 한 종류이며 주소의 변경이 불가능하여 포인터 상수라 한다.
	printf("포인터의 이름: %p \n", ptr);
	printf("첫 번째 요소: %p \n", &arr[0]);
	printf("두 번째 요소: %p \n", &arr[1]);
	printf("세 번째 요소: %p \n", &arr[2]);

	return 0;
}