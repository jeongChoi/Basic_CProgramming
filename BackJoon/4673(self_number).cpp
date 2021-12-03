#include <stdio.h> 

int self_number(int num);

int main() {
	int temp[10001] = { 0 };

	for (int i = 1; i < 10001; i++) {
		int idx = self_number(i);
		if (idx > 10000) {
			continue;
		}
		temp[idx] = 1;
	}

	for (int i = 1; i <= 10000; i++) {
		if (temp[i] == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}


int self_number(int num) {
	int temp = num;

	while (num != 0) {
		temp += num % 10;
		num /= 10;
	}

	return temp;
}
