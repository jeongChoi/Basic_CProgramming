#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void) {
	long long a, b, c;
	long long i = 1;

	scanf("%lld %lld %lld", &a, &b, &c);

	long long sum = a;
	long long price = c - b;
	

	if (price <= 0) {
		printf("-1\n");
		
		return 0;
	}
	
	i = sum / price + 1;

	

	printf("%lld\n", i);

	return 0;
}
