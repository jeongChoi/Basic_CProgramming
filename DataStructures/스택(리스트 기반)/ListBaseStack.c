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
	newNode->next = pstack->head; // 새 노드가 새 노드 이전의 최근 추가된 노드와 연결

	pstack->head = newNode; // 포인터 변수 head가 새 노드를 가리킴
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

