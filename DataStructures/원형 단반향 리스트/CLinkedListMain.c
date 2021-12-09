#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

int main(void) {
	
	List list;
	int i, nodeNum;
	ListInit(&list);
	Data data;
	Man* man;

	man = makeMan("123", "k");
	LInsert(&list, man);
	man = makeMan("345", "L");
	LInsert(&list, man);
	man = makeMan("567", "P");
	LInsert(&list, man);
	man = makeMan("789", "C");
	LInsert(&list, man);

	if (LFirst(&list, &data)) {
		printf("%s %s ", data->num, data->name);

		for (i = 0; i < LCount(&list) - 1; i++) {
			if (LNext(&list, &data)) {
				printf("%s %s ", data->num, data->name);
			}
		}
	}



	printf("\n");


	return 0;
}
