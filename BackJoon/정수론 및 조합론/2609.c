#pragma warning(disable : 4996)
#include <stdio.h>

int Gcd(int a, int b) { // 유클리드 호제법을 이용한 최대 공약수 구하기
	int r = a % b;
	if (r == 0) return b;
	else return Gcd(b, r);
}
int main(void) {
	int a, b, gcd, lcm;
	
	scanf("%d %d", &a, &b);

	if (a > b) {
		gcd = Gcd(a, b);
	}
	else {
		gcd = Gcd(b, a);
	}

	lcm = a * b / gcd; // 최소공배수는 두 수의 곱 / 최대 공약수!!
	
	printf("%d\n", gcd);
	printf("%d\n", lcm);

	return 0;
}