#include <stdio.h> 

int main() {
	int x;
	int score[1001];
	int big = 0;
	float total = 0.0;
	float grade[1001];

	scanf("%d", &x);

	for (int i = 1; i <= x; i++) {
		scanf("%d", &score[i]);
		if (big < score[i]) {
			big = score[i];
		}
	}


	for (int i = 1; i <= x; i++) {
		total +=  ((float) score[i] / big) * 100;
	}

	printf("%f", total / x);
}
