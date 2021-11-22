#pragma warning(disable : 4996)
#include <stdio.h> // 입출력 라이브러리를 사용하기 위한 헤더

/*
	설명: c언어 입력 서식자
	작성자:
	작성 일자:
*/


int main() {
	char name[20];
	int age;
	char gender;
	float height;
	double weight;

	printf("이름, 나이, 성별, 실수1, 실수2: ");
	scanf("%s %d %c %f %lf", name, &age, &gender, &height, &weight);
	printf("이름: %s\n", name);
	printf("age: %d\n", age);
	printf("gender: %c\n", gender);
	printf("float: %f\n", height);
	printf("double: %lf\n", weight);

	return 0;
}

