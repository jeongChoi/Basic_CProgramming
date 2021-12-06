#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int m, n;
	int array[1000001] = { -1, -1 };

	scanf("%d %d", &m, &n);

	for (int i = 2; i <= n; i++) {
		if (array[i] == 0) {
			for (int j = 2; i * j <= n; j++) {
				array[i * j] = -1;
			}
		}
	}
	
	for (int i = m; i <= n; i++) {
		if (array[i] == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
