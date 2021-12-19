#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _strArr {
	char str[51];
	int len;
}StrArr;

void insertSort(StrArr s[], int n) {
	int i, j;
	StrArr arr;

	for (i = 1; i < n; i++) {
		arr = s[i];
		
		for (j = i - 1; j >= 0; j--) {
			if (s[j].len > arr.len) {
				s[j + 1] = s[j];
			}
			else if (s[j].len == arr.len) {
				if (strcmp(s[j].str, arr.str) <= -1) {
					break;
				}
				else {
					s[j + 1] = s[j];
				}
			}
			else {
				break;
			}
		}
		s[j + 1] = arr;

	}
}

int main(void) {
	int n;
	scanf("%d", &n);

	StrArr strArr[20001];

	for (int i = 0; i < n; i++) {
		scanf("%s", &strArr[i].str);
		strArr[i].len = strlen(strArr[i].str);
	}

	insertSort(strArr, n);

	printf("%s\n", strArr[0].str);

	for (int i = 1; i < n; i++) {
		if (!strcmp(strArr[i].str,strArr[i - 1].str)) {
			continue;
		}
		else {
			printf("%s\n", strArr[i].str);
		}
	}
	return 0;
}
