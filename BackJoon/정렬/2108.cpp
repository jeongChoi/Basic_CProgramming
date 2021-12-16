#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void morge(int arr[], int left, int right, int mid) {
	int i, j, k, l;
	int sorted[500001];

	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right) {
		if (arr[i] >= arr[j]) {
			sorted[k++] = arr[j++];
		}
		else {
			sorted[k++] = arr[i++];
		}
	}

	if (i <= mid) {
		for (l = i; l <= mid; l++) {
			sorted[k++] = arr[l];
		}
	}
	else {
		for (l = j; l <= right; l++) {
			sorted[k++] = arr[l];
		}
	}

	for (l = left; l <= right; l++) {
		arr[l] = sorted[l];
	}
}
void morge_sort(int arr[], int left, int right) {
	int mid;

	if (left < right) {
		mid = (left + right) / 2;
		morge_sort(arr, left, mid);
		morge_sort(arr, mid + 1, right);
		morge(arr, left, right, mid);
	}
}
int main(void) {
	int n;
	int arr[500001];
	int cnt[8001] = { 0 };
	int num = 0;
	int sum = 0;

	scanf("%d", &n);

	int *k = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		if (arr[i] < 0) {
			cnt[arr[i] + 8001] += 1;
			if (cnt[arr[i] + 8001] > num) {
				num = cnt[arr[i] + 8001];
			}
		}
		else {
			cnt[arr[i]] += 1;
			if (cnt[arr[i]] > num) {
				num = cnt[arr[i]];
			}
		}
	}

	int kk = 0;
	for (int i = 4001; i <= 8000; i++) {
		if (cnt[i] == num) {
			k[kk] = i - 8001;
			kk++;
		}
		if (kk == 2) {
			break;
		}
	}
	for (int i = 0; i <= 4000; i++) {
		if (kk == 2) {
			break;
		}
		if (cnt[i] == num) {
			k[kk] = i;
			kk++;
		}
	}

	printf("%.f\n", round((float)sum / n)); // Æò±Õ

	morge_sort(arr, 0, n-1);

	printf("%d\n", arr[n / 2]); // Áß¾Ó°ª;

	printf("%d\n", k[kk-1]);

	printf("%d\n", abs(arr[n - 1] - arr[0])); // ¹üÀ§

	return 0;
}
