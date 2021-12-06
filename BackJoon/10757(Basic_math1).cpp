#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

void swap(char* s) {
	char temp;
	int len = strlen(s);

	for (int i = 0; i < len / 2; i++) {
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}


int main(void) {
	char a[10002];
	char b[10002];
	char c[10003] = { '0' };
	scanf("%s %s", a, b);

	swap(a);
	swap(b);

	int i = 0;
	int flag = 0;

	if (strlen(a) >= strlen(b)) {
		while (i < strlen(a)) {
			if (i >= strlen(b)) {
				int sum = (a[i] - 48) + flag;
				if (sum >= 10) {
					sum -= 10;
					flag = 1;
					c[i] = (char)(sum + 48);
					i++;
				}
				else {
					c[i] = (char)(sum + 48);
					flag = 0;
					i++;
				}
			}
			else {
				int sum = (a[i] - 48) + (b[i] - 48) + flag;
				if (sum >= 10) {
					sum -= 10;
					flag = 1;
					c[i] = (char)(sum + 48);
					i++;
				}
				else {
					c[i] = (char)(sum + 48);
					flag = 0;
					i++;
				}
			}
		}
		if (flag == 1) {
			c[i] = (char)(flag + 48);
		}
	}
	else {
		while (i < strlen(b)) {
			if (i >= strlen(a)) {
				int sum = (b[i] - 48) + flag;
				if (sum >= 10) {
					sum -= 10;
					flag = 1;
					c[i] = (char)(sum + 48);
					i++;
				}
				else {
					c[i] = (char)(sum + 48);
					flag = 0;
					i++;
				}
			}
			else {
				int sum = (a[i] - 48) + (b[i] - 48) + flag;
				if (sum >= 10) {
					sum -= 10;
					flag = 1;
					c[i] = (char)(sum + 48);
					i++;
				}
				else {
					c[i] = (char)(sum + 48);
					flag = 0;
					i++;
				}
			}
		}
		if (flag == 1) {
			c[i] = (char)(flag + 48);
		}
	}
	
	swap(c);
	printf("%s", c);
	
	return 0;
}
