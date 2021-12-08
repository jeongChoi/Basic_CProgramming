#ifndef __NAMECARD_H__
#define __NAMECARD_H__

#define NAME_LEN 30
#define PHONE_LEN 30

typedef struct __namecard {
	char name[NAME_LEN];
	char phone[PHONE_LEN];
}NameCard;

NameCard* makeNameCard(char* name, char* phone);

void showNameCardInfo(NameCard* pcard);

int nameCompare(NameCard* pcard, char* name);

void changePhoneNum(NameCard* pcard, char* phone);

#endif
