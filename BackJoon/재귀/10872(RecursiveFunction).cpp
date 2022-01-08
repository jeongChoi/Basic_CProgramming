#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int fact(int n) {
	if (n == 1 or n == 0) {
		return 1;
	}
	else if(n >= 2) {
		return n * fact(n - 1);
	}
}


int main(void) {
	int n;
	int fac;

	scanf("%d", &n);

	fac = fact(n);

	printf("%d\n", fac);

	return 0;
}
