#include <stdio.h> // ����� ���̺귯���� ����ϱ� ���� ���

/*
	����: c��� ��� ������
	�ۼ���: 
	�ۼ� ����:
*/

int main(void) {
	int num = 123;
	float num2 = 123.12345;
	char ch = 'a';
	char ch2[10] = "abc";

	printf("%d\n", num);
	printf("%8d\n", num);
	printf("%o\n", num);
	printf("%x\n", num);
	printf("%X\n", num);
	printf("%#x\n", num);
	printf("%#X\n", num);
	printf("%f\n", num2);
	printf("%.2f\n", num2);
	printf("%8.2f\n", num2);
	printf("%e\n", num2);
	printf("%c\n", ch);
	printf("%s\n", ch2);

	return 0;
}
