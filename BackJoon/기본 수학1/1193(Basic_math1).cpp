#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void) {
	int idx, x, target;
	int y = 1;
	int array[100001] = { 0 };
	
	scanf("%d", &x);

	for (idx = 1; idx <= 100000; idx++) {
		array[idx] = array[idx - 1] + idx;
		
		if (array[idx] > x || array[idx] == x)  {
			break;
		}
	}

	target = array[idx - 1] + 1;
	
	if (idx % 2 == 0) {
		while (target != x) {
			y++;
			idx--;
			target++;
		}
		printf("%d/%d\n", y, idx);
	}
	else {
		while (target != x) {
			y++;
			idx--;
			target++;
		}
		printf("%d/%d\n", idx, y);
	}
	
	return 0;
}
