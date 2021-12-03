#include <stdio.h> 

int main() {
	int x;
	int arr[42] = { 0 };
	int result = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &x);

		int mod = x % 42;
		arr[mod] += 1;

		if (arr[mod] == 1) {
			result += 1;
		}
	}

	printf("%d\n", result);


	return 0;
}
