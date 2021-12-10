#include <stdio.h>
#include <ctype.h>
#include "ListBaseStack.h"

int EvalRPNExp(char exp[]) {
	Stack stack;
	int expLen = strlen(exp);
	int i;
	char tok, op1, op2;

	stackInit(&stack);

	for (i = 0; i < expLen; i++) {
		tok = exp[i];

		if (isdigit(tok)) {
			sPush(&stack, tok - '0');
		}
		else {
			op2 = sPop(&stack);
			op1 = sPop(&stack);

			switch (tok) {
			case '+':
				sPush(&stack, op1 + op2);
				break;
			case '-':
				sPush(&stack, op1 - op2);
				break;
			case '*':
				sPush(&stack, op1 * op2);
				break;
			case '/':
				sPush(&stack, op1 / op2);
				break;
			}
		}
	}

	return sPop(&stack);
}
