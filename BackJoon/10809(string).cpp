#include <stdio.h> 
#include <string.h>

int main() {
	char s[101];
	int arr[26] = { 0 };
	
	scanf("%s", &s);

	for (int i = 0; i <= 100; i++) {
		if (s[i] == '\0') {
			break;
		}
		int idx = (int)s[i] - 97;
		if (arr[idx] == 0) {
			arr[idx] = i+1;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == 0) {
			printf("%d ", -1);
		}
		else {
			printf("%d ", arr[i]-1);
		}
	}

	/*
	char c = 'a';

	for (int i = 0; i < 26; i++) {
		printf("%d %c\n", (int)c, c);
		c = c++;
	}
	*/
	return 0;
}
