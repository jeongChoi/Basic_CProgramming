#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int n;
	int array[1000001] = { -1, -1 };


	for (int i = 2; i <= 123456 * 2; i++) {
		if (array[i] == 0) {
			for (int j = 2; i * j <= 123456 * 2; j++) {
				array[i * j] = -1;
			}
		}
	}
	
	scanf("%d", &n);

	while (n != 0) {
		int cnt = 0;
		for (int i = n+1; i <= 2 * n; i++) {
			if (array[i] == 0) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
		scanf("%d", &n);
	}

	return 0;
}
