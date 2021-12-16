#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int second(char c);

int main(void) {
	char s[15];
	int i = 0;
	int sum = 0;

	scanf("%s", &s);

	while (s[i] != '\0') {
		char c = s[i];
		sum += second(c);

		i++;
	}

	printf("%d\n", sum);
}

int second(char c) {
	switch (c) {

		case 'A':
		case 'B':
		case 'C':
			return 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			return 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			return 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			return 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			return 7;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			return 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			return 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			return 10;
			break;
		default:
			break;
	}
}
