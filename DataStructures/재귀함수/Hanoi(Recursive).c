#include <stdio.h>

void hanoi(int num, char from, char to, char temp) {

	if (num == 1) {
		printf("%d : %c -> %c\n", num, from, to);
	}
	else {
		hanoi(num - 1, from, temp, to);
		printf("%d : %c -> %c\n", num, from, to);
		hanoi(num - 1, temp, to, from);
	}

}

int main(void) {

	hanoi(5, 'A', 'C', 'B');

	return 0;
}
