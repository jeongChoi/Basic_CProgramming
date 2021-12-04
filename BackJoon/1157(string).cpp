#include <stdio.h> 
#include <string.h>

int main() {
	char c[1000000];
	int arr[26] = { 0 };
	int i = 0;
	int count = 0;
	int big[2] = { 0, -1 }; // sum, index; 


	scanf("%s", &c);

	while (c[i] != '\0') {
		if (c[i] >= 'A' and c[i] <= 'Z') {
			arr[c[i] - 'A'] += 1;
		}
		else {
			arr[c[i] - 'a' ] += 1;
		}
		i++;
	}
	
	for (int k = 0; k < 26; k++) {
		if (big[0] < arr[k] ) {
			count = 0;
			count++;
			big[0] = arr[k];
			big[1] = k;
		}
		else if (big[0] == arr[k]) {
			count++;
		}
	}

	if (count >= 2) {
		printf("?\n");
	}
	else {
		printf("%c\n", big[1] + 'A');
	}

	return 0;
}
