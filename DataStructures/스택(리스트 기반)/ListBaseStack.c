#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

void stackInit(Stack* pstack) {
	pstack->head = NULL;
}

int sIsEmpty(Stack* pstack) {
	if (pstack->head == NULL) {
		return TRUE;
	}
	else return FALSE;
}

void sPush(Stack* pstack, Data data) {
	Node* newNode = (Node*)malloc(sizeof(Node));

	newNode->data = data;
	newNode->next = pstack->head; // �� ��尡 �� ��� ������ �ֱ� �߰��� ���� ����

	pstack->head = newNode; // ������ ���� head�� �� ��带 ����Ŵ
}

Data sPop(Stack* pstack) {
	Data rdata;
	Node* rnode;

	if (sIsEmpty(pstack)) {
		printf("Stack memory Error!!\n");
		exit(-1);
	}

	rdata = pstack->head->data;
	rnode = pstack->head;

	pstack->head = pstack->head->next;
	free(rnode);

	return rdata;
}

Data sPeek(Stack* pstack) {
	if (sIsEmpty(pstack)) {
		printf("Stack memory Error!!\n");
		exit(-1);
	}

	return pstack->head->data;
}

