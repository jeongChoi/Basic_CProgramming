#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int num = 10;
	int * ptr = &num; // 포인터 변수 ptr에 num의 주소 값으로 초기화
	int * ptr2 = ptr; // 포인터 변수 ptr이 가리키는 변수의 주소값을 ptr2에 초기화

	(*ptr)++;
	(*ptr2)++;

	printf("%d\n", num);

	return 0;
}