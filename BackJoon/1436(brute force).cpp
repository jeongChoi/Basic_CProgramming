#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void itoaSub(int num, char* str, int radix) {
	int tmp = num;
	int cnt = 0;

	while (tmp != 0) {
		tmp /= 10;
		cnt++;
	}

	str[cnt] = '\0';
	do {
		cnt--;
		str[cnt] = (char)(num % 10 + 48);
		num = num / 10;
	} while (num != 0);

}
int main(void) {
	char num[20];
	int n;
	int array[10001] = { 0, 666, 1666, 2666, 3666, 4666, 5666, 6660 };
	
	scanf("%d", &n);

	if (n <= 7) {
		printf("%d\n", array[n]);
		return 0;
	}

	int k = 6661;
	int i = 8;

	while (array[n] == 0) {
		itoaSub(k, num, 10);
		int j = 1;
		int cnt = 0;
		while (num[j] != '\0') {
			if (num[j - 1] == '6' && num[j] == '6') {
				cnt++;
			}
			else {
				cnt = 0;
			}

			if (cnt >= 2) {
				break;
			}
			j++;
		}
		if (cnt == 2) {
			array[i] = k;
			i++;
		}
		k++;
	}
	
	printf("%d\n", array[n]);
	return 0;
}
