#pragma warning(disable : 4996)
#include <stdio.h>

int main(void) {
	
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p \n", arr1);
	printf("arr1+1: %p \n", arr1 + 1); //arr1[1]을 주소를 가리키게 된다. 즉 8이 증가된 결과가 나온다.
	printf("arr1+2: %p \n", arr1 + 2);

	printf("arr2: %p \n", arr2);
	printf("arr2+1: %p \n", arr2 + 1);	//arr2[1]을 주소를 가리키게 된다. 즉 12가 증가된 결과가 나온다.

	
	return 0;
}