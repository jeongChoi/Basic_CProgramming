#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int replace(char** a) {
	
	int count1 = 0;
	int count2 = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (a[i][j] == 'W') {
						count1++;
					}
					else {
						count2++;
					}
				}
				else {
					if (a[i][j] == 'B') {
						count1++;
					}
					else {
						count2++;
					}
				}
			}
			else {
				if (j % 2 == 0) {
					if (a[i][j] == 'B') {
						count1++;
					}
					else {
						count2++;
					}
				}
				else {
					if (a[i][j] == 'W') {
						count1++;
					}
					else {
						count2++;
					}
				}
			}
		}
	}

	return count1>count2 ? count2 : count1;
}

int main(void) {
	
	int n, m;
	int i, j, k, z;
	char chess[51][51];

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%s", &chess[i]);
	}

	int cnt = 2501;
	int count;

	char **ch = (char **)malloc(sizeof(char*) * 8);
	
	for (int a = 0; a < 8; a++) {
		ch[a] = (char*)malloc(sizeof(char) * 9);
	}

	for (i = 0; i <= n - 8; i++) {
		for (j = 0; j <= m - 8; j++) {
			int a = 0;
			for (k = i; k < i + 8; k++, a++) {
				int b = 0;
				for (z = j; z < j + 8; z++, b++) {
					ch[a][b] = chess[k][z];
				}
			}
			count = replace(ch);
			if (count < cnt) {
				cnt = count;
			}
		}
	}

	printf("%d\n", cnt);
	
	return 0;
}
