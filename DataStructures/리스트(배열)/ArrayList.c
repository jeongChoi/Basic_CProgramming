#include <stdio.h>
#include "ArrayList.h"

void ListInit(List* plist) {
	(plist->numofData) = 0;
	(plist->curPosistion) = -1;
}

void LInsert(List* plist, LData data) {
	if (plist->numofData >= LIST_LEN) {
		puts("저장이 불가능!!");
		return;
	}
	
	plist->arr[plist->numofData] = data;
	(plist->numofData)++;
}

int LFirst(List* plist, LData* pdata) {
	if (plist->numofData == 0) {
		return FALSE;
	}

	(plist->curPosistion) = 0;
	*pdata = plist->arr[0];
	
	return TRUE;
}

int LNext(List* plist, LData* pdata) {
	if (plist->curPosistion >= (plist->numofData) - 1) {
		return FALSE;
	}

	(plist->curPosistion)++;
	*pdata = plist->arr[plist->curPosistion];
	return TRUE;
}

LData LRemove(List* plist) {
	int rpos = plist->curPosistion;
	int num = plist->numofData;
	int i;

	LData rdata = plist->arr[rpos];

	for (int i = rpos; i < num; i++) {
		plist->arr[i] = plist->arr[i + 1];
	}

	(plist->numofData)--;
	(plist->curPosistion)--;

	return rdata;
}

int LCount(List* plist) {
	return plist->numofData;
}
