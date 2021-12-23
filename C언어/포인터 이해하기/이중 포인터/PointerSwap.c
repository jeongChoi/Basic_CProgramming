#pragma warning(disable : 4996)
#include <stdio.h>

void SwapIntPtr1(int * p1, int * p2) { // swap이 실패한 이유는 포인터 변수 p1에 ptr1을 단순 대입한 상황
	int * temp = p1;					// call-by-value
	p1 = p2;
	p2 = temp;
}

void SwapIntPtr2(int ** dp1, int ** dp2) { // swap이 성공한 이유는 포인터 변수 ptr1, ptr2의 주소 값을 참조하였기 때문에
	int * temp = *dp1;						// call-by-Reference
	*dp1 = *dp2;
	*dp2 = temp;
}

int main() {
	int num1 = 10, num2 = 20;
	int *ptr1 = &num1;
	int *ptr2 = &num2;

	printf("*ptr1 *ptr2: %d %d \n", *ptr1, *ptr2);

	SwapIntPtr1(ptr1, ptr2);
	printf("After SwapIntPtr1  *ptr1 *ptr2: %d %d \n", *ptr1, *ptr2);
	SwapIntPtr2(&ptr1, &ptr2);
	printf("After SwapIntPtr2  *ptr1 *ptr2: %d %d \n", *ptr1, *ptr2);
}