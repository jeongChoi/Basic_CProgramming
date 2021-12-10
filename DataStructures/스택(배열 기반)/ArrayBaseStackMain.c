#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

int main(void) {
	
	Stack stack;
	stackInit(&stack);

	sPush(&stack, 1);
	sPush(&stack, 2);
	sPush(&stack, 3);
	sPush(&stack, 4);
	sPush(&stack, 5);

	while (!sIsEmpty(&stack)) {
		printf("%d ", sPop(&stack));
	}

	return 0;
}
