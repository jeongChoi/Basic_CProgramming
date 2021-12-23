#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	int num1 = 100, num2 = 100;
	int *pnum;

	pnum = &num1;	// 포인터 변수에 변수 num1의 주소값을 저장
	(*pnum) += 30;	// 포인터 변수가 가리키는 변수에 값을 30 증가

	pnum = &num2;
	(*pnum) -= 30;

	printf("%d %d\n", num1, num2);

	return 0;
}