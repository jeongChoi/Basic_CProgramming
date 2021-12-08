#include <stdio.h>
#include "ArrayList.h"


int main(void) {

	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 11);
	LInsert(&list, 13);
	LInsert(&list, 15);
	LInsert(&list, 17);
	LInsert(&list, 20);

	printf("현재 저장된 데이터 수는 %d\n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
	}

	printf("\n\n");

	if (LFirst(&list, &data)) {

		if (data == 20) {
			LRemove(&list);
		}

		while (LNext(&list, &data)) {
			if (data == 20) {
				LRemove(&list);
			}
		}
	}

	printf("현재 저장된 데이터 수는 %d\n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d ", data);

		while (LNext(&list, &data)) {
			printf("%d ", data);
		}
	}

	return 0;
}
