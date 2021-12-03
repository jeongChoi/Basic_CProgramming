#include <stdio.h> 

int main() {
	int n;
	char k[100];

	int sum = 0;

	scanf("%d", &n);
	scanf("%s", &k);


	for (int i = 0; i < n; i++) {
		sum += k[i] - '0'; // 문자열 숫자 변경
	}

	printf("%d\n", sum);
	return 0;
}
