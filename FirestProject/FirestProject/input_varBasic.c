#pragma warning(disable : 4996)
#include <stdio.h> // ����� ���̺귯���� ����ϱ� ���� ���

/*
	����: c��� �Է� ������
	�ۼ���:
	�ۼ� ����:
*/


int main() {
	char name[20];
	int age;
	char gender;
	float height;
	double weight;

	printf("�̸�, ����, ����, �Ǽ�1, �Ǽ�2: ");
	scanf("%s %d %c %f %lf", name, &age, &gender, &height, &weight);
	printf("�̸�: %s\n", name);
	printf("age: %d\n", age);
	printf("gender: %c\n", gender);
	printf("float: %f\n", height);
	printf("double: %lf\n", weight);

	return 0;
}

