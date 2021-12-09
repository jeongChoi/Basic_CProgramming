#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

void ListInit(List* plist) {
	plist->tail = NULL;
	plist->cur = NULL;
	plist->before = NULL;
	plist->numOfData = 0;
}

void LInsertFront(List* plist, Data data) { // �Ӹ��κп� �߰��ϴ� ��
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	if (plist->tail == NULL) {
		plist->tail = newNode; 
		newNode->next = newNode;
	}
	else {
		newNode->next = plist->tail->next; // ���ο� ����� ���� �κ��� ���� �Ӹ� �κ��� �ȴ�.
		plist->tail->next = newNode; // ���ο� ��尡 �Ӹ� �κ��� �ȴ�.
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
		newNode->next = plist->tail->next; // ���ο� ��尡 ���� �κ��� �ȴ�.
		plist->tail->next = newNode; // ���� �����κ��� ���ο� ����� ����
		plist->tail = newNode; // ���� �κ��� ���ο� ���� �ٲ�
	}
	(plist->numOfData)++;
}

int LFirst(List* plist, Data* pdata) {
	if (plist->tail == NULL) { 
		return FALSE;
	}

	plist->before = plist->tail; 
	plist->cur = plist->tail->next; // �Ӹ� �κ��� ���� �κ��� ������ ����Ǳ� ������

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
