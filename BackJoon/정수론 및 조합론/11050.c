#pragma warning(disable : 4996)
#include <stdio.h>

int main(void) {
	int n, k;
	int s1= 1, s2 = 1;

	scanf("%d %d", &n, &k);

	for (int i = k; i >= 1; i--) {
		s1 *= n--;
		s2 *= i;
	}

	printf("%d\n", s1/s2);
	return 0;
}