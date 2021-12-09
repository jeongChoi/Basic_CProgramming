#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

void ListInit(List* plist) {
	plist->tail = NULL;
	plist->cur = NULL;
	plist->before = NULL;
	plist->numOfData = 0;
}

void LInsertFront(List* plist, Data data) { // 머리부분에 추가하는 것
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) {
		plist->tail = newNode; 
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next; // 새로운 노드의 다음 부분이 원래 머리 부분이 된다.
		plist->tail->next = newNode; // 새로운 노드가 머리 부분이 된다.
	}
	(plist->numOfData)++;
}

void LInsert(List* plist, Data data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) {
		plist->tail = newNode;
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next; // 새로운 노드가 꼬리 부분이 된다.
		plist->tail->next = newNode; // 원래 꼬리부분이 새로운 노드의 다음
		plist->tail = newNode; // 꼬리 부분을 새로운 노드로 바꿈
	}
	(plist->numOfData)++;
}

int LFirst(List* plist, Data* pdata) {
	if (plist->tail == NULL) { 
		return FALSE;
	}

	plist->before = plist->tail; 
	plist->cur = plist->tail->next; // 머리 부분이 꼬리 부분의 다음과 연결되기 때문에

	*pdata = plist->cur->data;
	return TRUE;
}

int LNext(List* plist, Data* pdata) {
	if (plist->tail == NULL) {
		return FALSE;
	}

	plist->before = plist->cur;
	plist->cur = plist->cur->next;

	*pdata = plist->cur->data;
	return TRUE;
}

Data LRemove(List* plist) {
	Node* rpos = plist->cur;
	Data rdata = rpos->data;

	if (rpos == plist->tail) {
		if (plist->tail == plist->tail->next) plist->tail = NULL;
		else plist->tail = plist->before;
	}

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(rpos);
	(plist->numOfData)--;
	return rdata;
}

int LCount(List* plist) {
	return plist->numOfData;
}
