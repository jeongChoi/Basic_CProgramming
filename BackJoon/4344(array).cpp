#include <stdio.h> 

int main() {
	int N, i;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		int n;
		int grade[1001];
		float sum = 0.0;
		float avg = 0.0;
		float result = 0.0;
		int count = 0;

		scanf("%d", &n);

		for (int j = 1; j <= n; j++) {
			scanf("%d", &grade[j]);
			sum += grade[j];
		}

		avg = sum / n;
		
		for (int j = 1; j <= n; j++) {
			if (grade[j] > avg) {
				count += 1;
			}
		}

		result = (float)count / n * 100;

		printf("%.3f%%\n", result);
	}
}
