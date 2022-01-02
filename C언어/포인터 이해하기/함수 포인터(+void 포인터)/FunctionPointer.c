#pragma warning(disable : 4996)
#include <stdio.h>

void simpleAdder(int n1, int n2) {
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void showString(char * str) {
	printf("%s \n", str);
}

int main(void) {
	char * str = "Function Pointer";
	int num1 = 10; int num2 = 20;

	void(*fptr1)(int, int) = simpleAdder;
	void(*fptr2)(char *) = showString;

	fptr1(num1, num2);
	fptr2(str);

	return 0;
}