#include <stdio.h>
#include <stdlib.h>
#include "DequeBaseQueue.h"

void QueueInit(Queue* pq) {
	pq->head = NULL;
	pq->tail = NULL;
}
int QIsEmpty(Queue* pq) {
	if (pq->head == NULL) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

void Enqueue(Queue* pq, Data data) {
	return DQAddLast(pq, data);
}

Data Dequeue(Queue* pq) {
	return DQRemoveLast(pq);
}

Data QPeek(Queue* pq) {
	return DQGetLast(pq);
}
