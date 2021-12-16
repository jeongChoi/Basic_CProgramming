#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void) {
	int n;

	scanf("%d", &n);

	if (n == 1) {
		return 0;
	}

	while (n != 1) {
		int m = 2;
		while (1) {
			if (n % m == 0) {
				printf("%d\n", m);
				n = n / m;
				break;
			}
			else {
				m++;
			}
		}
	}
	
	return 0;
}
