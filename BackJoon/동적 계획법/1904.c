#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int arr[1000001] = { 0, 1, 2 };
	
	scanf("%d", &n);
	
	if (n == 1) {
		printf("1");
		return 0;
	}
	else if (n == 2) {
		printf("2");
		return 0;
	}

	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746 ; // 문제의 핵심이 되는 부분
	}

	printf("%d", arr[n]);

	return 0;
}