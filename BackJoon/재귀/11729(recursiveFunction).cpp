#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>

void hanoi(int n, int from, int to, int temp) {
	if (n == 1) {
		printf("%d %d\n", from, to);
	}
	else {
		hanoi(n - 1, from, temp, to);
		printf("%d %d\n", from, to);
		hanoi(n - 1, temp, to, from);
	}
}

int count_hanoi(int n, int from, int to, int temp, int count) {
	int cnt = 0;
	if (n == 1) {
		return ++cnt;
	}
	else {
		cnt += count_hanoi(n - 1, from, temp, to, ++count);
		cnt += count_hanoi(n - 1, temp, to, from, ++count);
		return ++cnt;
	}
}

int main(void) {
	int n;
	int count = 1;
	
	scanf("%d", &n);

	printf("%d\n", count_hanoi(n, 1, 3, 2, count));
	hanoi(n, 1, 3, 2);

	return 0;
}
