#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	while (a + b + c != 0) {
		float aa, bb, cc;
		aa = pow(a, 2.0);
		bb = pow(b, 2.0);
		cc = pow(c, 2.0);

		if (aa > bb) {
			if (aa > cc) {
				if (aa == bb + cc) {
					printf("right\n");
				}
				else {
					printf("wrong\n");
				}
			}
			else {
				if (cc == aa + bb) {
					printf("right\n");
				}
				else {
					printf("wrong\n");
				}
			}
		}
		else {
			if (bb > cc) {
				if (bb == aa + cc) {
					printf("right\n");
				}
				else {
					printf("wrong\n");
				}
			}
			else {
				if (cc == aa + bb) {
					printf("right\n");
				}
				else {
					printf("wrong\n");
				}
			}
		}

		scanf("%d %d %d", &a, &b, &c);
	}
	return 0;
}
