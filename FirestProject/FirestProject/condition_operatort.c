#pragma warning(disable : 4996)
#include <stdio.h>

/*
	설명: 조건 연산자
*/


int main() {
	
	int a, b;
	int max;

	printf("두개의 정수:");
	scanf("%d %d", &a, &b);

	printf("%d는 ", a);
	a % 2 != 0 ? printf("홀수입니다.\n") : printf("짝수입니다.");

	max = a > b ? a : b;
	printf("더 큰수는 %d\n", max);

	return 0;
}
