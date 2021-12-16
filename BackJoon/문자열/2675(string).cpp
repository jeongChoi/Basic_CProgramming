#include <stdio.h> 
#include <string.h>

int main() {
	int T;

	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int R;
		char s[20];
		int j = 0;

		scanf("%d\n", &R);
		scanf("%s\n", &s);

		while (s[j] != '\0') {
			for (int k = 0; k < R; k++) {
				printf("%c", s[j]);
			}
			j++;
		}
		printf("\n");
	}

	return 0;
}
