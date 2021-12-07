#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int n;
	int man[51][3];

	scanf("%d", &n);

	int rank = n;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &man[i][0], &man[i][1]);
		man[i][2] = rank;
	}

	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (man[i][0] > man[j][0] and man[i][1] > man[j][1]) {
				man[i][2]--;
			}
			else if (man[i][0] < man[j][0] and man[i][1] < man[j][1]) {
				man[j][2]--;
			}
			else {
				man[i][2]--;
				man[j][2]--;
			}
		}
		printf("%d ", man[i][2]);
	}
	
	printf("%d\n", man[n-1][2]);
	return 0;
}
