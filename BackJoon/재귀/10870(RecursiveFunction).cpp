#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int fibo(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}


int main(void) {
	int n;
	int fib;

	scanf("%d", &n);

	fib = fibo(n);

	printf("%d\n", fib);

	return 0;
}
