#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard* makeNameCard(char* name, char* phone) {
	NameCard *pcard;

	pcard = (NameCard*)malloc(sizeof(NameCard));
	
	strcpy(pcard->name, name);
	strcpy(pcard->phone, phone);

	return pcard;
}

void showNameCardInfo(NameCard* pcard) {
	printf("%s %s\n", pcard->name, pcard->phone);
}

int nameCompare(NameCard* pcard, char* name) {
	
	return strcmp(pcard->name, name);
}

void changePhoneNum(NameCard* pcard, char* phone) {
	strcpy(pcard->phone, phone);
}
