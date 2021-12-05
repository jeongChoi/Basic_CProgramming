#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void) {
	int a, b, v;
	int m = 0;
	int day = 0;

	scanf("%d %d %d", &a, &b, &v);
	
	day =  (v-b) / (a - b);
	m = (v - b) % (a - b);

	if (m != 0) {
		printf("%d\n", day+1);
	}
	else {
		printf("%d\n", day);
	}



	return 0;
}
