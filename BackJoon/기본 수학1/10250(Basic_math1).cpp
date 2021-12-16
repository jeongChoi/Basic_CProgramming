#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void) {
	int T; // testcase Count;
	int h, w, n; // hotel floor, room, customer Count;

	int r_f;
	int r_n;
	int room;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &h, &w, &n);

		if (n <= h) {
			r_f = n;
			r_n = 1;
		}
		else if (n % h == 0) {
			r_f = h;
			r_n = n / h;
		}
		else {
			r_f = n % h;
			r_n = n / h + 1;
		}
		
		room = (r_f * 100) + r_n;
		printf("%d\n", room);
	}


	return 0;
}
