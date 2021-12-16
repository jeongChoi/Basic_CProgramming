#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void) {
	char s[101];
	int i = 0;
	int sum = 0;

	scanf("%s", &s);


	while (s[i] != '\0') {
		if (s[i] == 'l' || s[i] == 'n') {
			if (s[i + 1] == 'j') {
				sum++;
				i += 2;
			}
			else {
				sum++;
				i++;
			}
		}
		else if (s[i] == 's' or s[i] == 'z') {
			if (s[i + 1] == '=') {
				sum++;
				i += 2;
			}
			else {
				sum++;
				i++;
			}
		}
		else if (s[i] == 'c') {
			if (s[i + 1] == '=' or s[i + 1] == '-') {
				sum++;
				i += 2;
			}
			else {
				sum++;
				i++;
			}
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == 'z' and s[i + 2] == '=') {
				sum++;
				i += 3;
			}
			else if (s[i + 1] == '-') {
				sum++;
				i += 2;
			}
			else {
				sum++;
				i++;
			}
		}
		else {
			sum++;
			i++;
		}
	}

	printf("%d\n", sum);
	return 0;
}
