#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int array[1001] = { -1, -1 };
	int n;
	int num[101];
	int temp = -1;
	int count = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		if (num[i] > temp) {
			temp = num[i];
		}
	}

	for (int i = 2; i <= temp; i++) {
		if (array[i] == 0) {
			int j = 2;
			while (i * j <= temp) {
				array[i * j] = -1;
				j++;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (array[num[i]] == 0) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}
