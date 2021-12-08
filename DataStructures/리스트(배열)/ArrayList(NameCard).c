#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Point.h"
#include "NameCard.h"


int main(void) {

	List list;
	NameCard *card;

	
	ListInit(&list);

	card = makeNameCard("kkk", "010-1111-1111");
	LInsert(&list, card);

	card = makeNameCard("ccc", "010-2222-2222");
	LInsert(&list, card);

	card = makeNameCard("zzz", "010-3333-3333");
	LInsert(&list, card);

	if (LFirst(&list, &card)) {
		if (!(nameCompare(card, "ccc"))) {
			showNameCardInfo(card);
		}
		while (LNext(&list, &card)) {
			if (!(nameCompare(card, "ccc"))) {
				showNameCardInfo(card);
				break;
			}
		}
	}

	if (LFirst(&list, &card)) {
		if (!(nameCompare(card, "zzz"))) {
			changePhoneNum(card, "010-5555-5555");
		}
		while (LNext(&list, &card)) {
			if (!(nameCompare(card, "zzz"))) {
				changePhoneNum(card, "010-5555-5555");
				break;
			}
		}
	}

	if (LFirst(&list, &card)) {
		if (!(nameCompare(card, "kkk"))) {
			card = LRemove(&list);
			free(card);
		}
		while (LNext(&list, &card)) {
			if (!(nameCompare(card, "kkk"))) {
				card = LRemove(&list);
				free(card);
			}
		}
	}

	if (LFirst(&list, &card)) {
		
		showNameCardInfo(card);

		while (LNext(&list, &card)) {
			showNameCardInfo(card);
		}
	}

	return 0;
}
