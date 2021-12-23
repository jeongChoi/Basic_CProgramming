#pragma warning(disable : 4996)
#include <stdio.h>

void swap3(int *n1, int *n2, int *n3) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = *n3;
	*n3 = temp;

	printf("n1 n2 n3: %d %d %d \n", *n1, *n2, * n3);
}

int main() {
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	printf("num1 num2 num3: %d %d %d \n", num1, num2, num3);

	swap3(&num1, &num2, &num3);
	printf("After Swap(call by Reference) num1 num2 num3 : %d %d %d \n", num1, num2, num3);
	return 0;
}