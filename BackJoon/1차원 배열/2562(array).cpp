#include <stdio.h> 

int main() {
	int idx[2] = { 0, 1 };
	int arr[8];

	scanf("%d", &idx[0]);

	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
		if (idx[0] < arr[i]) {
			idx[0] = arr[i];
			idx[1] = i+2;
		}
	}

	printf("%d\n", idx[0]);
	printf("%d\n", idx[1]);

	return 0;
}
