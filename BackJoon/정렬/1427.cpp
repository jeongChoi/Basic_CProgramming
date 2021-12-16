#pragma warning(disable : 4996)
#include <stdio.h>

void selectSort(int a[], int n) {
	int i;
	int idx;
	for (i = 0; i < n-1; i++) {
		int temp = -1;
		for (int j = i + 1; j < n; j++) {
			if (temp < a[j]) {
				temp = a[j];
				idx = j;
			}
		}
		if (temp > a[i]) {
			temp = a[i];
			a[i] = a[idx];
			a[idx] = temp;
		}
	}
}

int main(void) {
	int array[11]; // �迭�� ũ�Ⱑ ũ�� �ʰ� �ð��� 2���̹Ƿ� ���� ������ ����� ���� �ذ� 
	char num[11];

	scanf("%s", &num);

	int i = 0;

	while (num[i] != '\0') {
		array[i] = num[i] - '0';
		i++;
	}
	
	selectSort(array, i);

	for (int j = 0; j < i; j++) {
		printf("%d", array[j]);
	}

	return 0;

}
