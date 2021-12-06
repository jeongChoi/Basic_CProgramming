#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int array[10001] = { -1, -1 };
	int m, n;
	int cnt = -1;
	int sum = 0;

	scanf("%d", &m);
	scanf("%d", &n);
	

	for (int i = 2; i <= n; i++) {
		if (array[i] == 0) {
			for (int j = 2; i * j <= n; j++) {
				array[i * j] = -1;
			}
		}
	}

	
	for (int i = m; i <= n; i++) {
		if (cnt == -1 and array[i] == 0) {
			cnt = i;
			sum += i;
		}
		else if (array[i] == 0) {
			sum += i;
		}
		else {
			continue;
		}
	}

	if (sum == 0) {
		printf("%d\n", cnt);
	}
	else {
		printf("%d\n", sum);
		printf("%d\n", cnt);
	}
	
	return 0;
}
