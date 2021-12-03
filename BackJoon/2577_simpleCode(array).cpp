#include <stdio.h> 

int main() {
	int a, b, c;
	int arr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int sum = a * b * c;

	while (sum != 0) {
		arr[sum % 10] += 1;
		sum /= 10;
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}


	return 0;
}
