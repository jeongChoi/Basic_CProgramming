#pragma warning(disable : 4996)
#include <stdio.h>

void showAllString(int argc, char * argv[]) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s \n", argv[i]);
	}
}

int main(void) {
	char * str[3] = {
		"C Programming",
		"C++ Programming",
		"JAVA"
	};
	showAllString(3, str);

	return 0;
}