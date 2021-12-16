#include <stdio.h> 

int main() {
	int x, y;
	int n = 0;
	int result = -1;
	int cycle = 0;
	
	scanf("%d", &n);
	x = n / 10;
	y = n % 10;

	while (n != result) {
		x = (x + y) % 10;
		result = (y * 10) + x;
		cycle++;
		x = result / 10;
		y = result % 10;
	}

	printf("%d", cycle);

	return 0;
}
