#pragma warning(disable : 4996)
#include <stdio.h>

/*
	����: ���� ������
*/


int main() {
	
	int a, b;
	int max;

	printf("�ΰ��� ����:");
	scanf("%d %d", &a, &b);

	printf("%d�� ", a);
	a % 2 != 0 ? printf("Ȧ���Դϴ�.\n") : printf("¦���Դϴ�.");

	max = a > b ? a : b;
	printf("�� ū���� %d\n", max);

	return 0;
}
