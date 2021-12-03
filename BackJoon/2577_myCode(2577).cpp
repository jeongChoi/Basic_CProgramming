#include <stdio.h> 

int main() {
	int a, b, c;
	int arr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int x = 100000000;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int sum = a * b * c;

	printf("%d\n", sum);
	
	if (sum < x) {
		while (sum < x) {
			x = x / 10;
		}
		printf("%d\n", x);
	}
	

	while (x >= 1) {
		int i = sum / x;
		if (sum % x == sum) {
			sum = sum % x;
			arr[i] += 1;
			x = x / 10;
		}
		else {
			sum = sum % x;
			arr[i] += 1;
			x = x / 10;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
