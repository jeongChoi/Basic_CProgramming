#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _user {
	char str[101];
	int num;
	int age;
}User;

void merge(User user[], int first, int mid, int last) {
	int i, j, k, l;
	i = first;
	j = mid + 1;
	k = first;

	User* u = (User*)malloc(sizeof(User) * (last + 1));

	while (i <= mid && j <= last) {
		if (user[i].age < user[j].age) {
			u[k++] = user[i++];
		}
		else if (user[i].age == user[j].age && user[i].num < user[j].num) {
			u[k++] = user[i++];
		}
		else {
			u[k++] = user[j++];
		}
	}

	if (i <= mid) {
		for (l = i; l <= mid; l++) {
			u[k++] = user[l];
		}
	}
	else {
		for (l = j; l <= last; l++) {
			u[k++] = user[l];
		}
	}

	for (l = first; l <= last; l++) {
		user[l] = u[l];
	}

	free(u);
}

void mergeSort(User user[], int first, int last) {
	int mid;

	if (first < last) {
		mid = (first + last) / 2;

		mergeSort(user, first, mid);
		mergeSort(user, mid + 1, last);
		merge(user, first, mid, last);
	}
}
int main(void) {
	int n;
	scanf("%d", &n);

	User user[100000];

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &user[i].age, &user[i].str);
		user[i].num = i + 1;
	}
			
	mergeSort(user, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d %s\n", user[i].age, user[i].str);
	}

	return 0;
}
