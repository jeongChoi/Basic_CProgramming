#include <stdio.h> // 입출력 라이브러리를 사용하기 위한 헤더

/*
	설명: c언어 출력 서식자
	작성자: 
	작성 일자:
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
