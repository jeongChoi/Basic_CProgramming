#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void) {
	int T; // testcase Count;
	int k, n;
	int room[15][15] = { {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}, };
	
	
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			if (j == 1) {
				room[i][1] = 1;
			}
			else {
				room[i][j] = room[i][j - 1] + room[i - 1][j];
			}
		}
	}

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		scanf("%d", &n);

		printf("%d\n", room[k][n]);
	}



	return 0;
}
