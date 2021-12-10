#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"

int GetOpPrec(char op) {
	switch (op) {
		case '*':
		case '/':
			return 5;
		case '+':
		case '-':
			return 3;
		case '(':
			return 1;
	}

	return -1;
}

int WhoPrecOp(char op1, char op2) {
	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);

	if (op1Prec > op2Prec) return 1;
	else if (op1Prec < op2Prec) return -1;
	else return 0;
}

void ConvToRPNExp(char exp[]) {
	Stack stack;
	int expLen = strlen(exp);
	char* convExp = (char*)malloc(expLen + 1);

	int i, idx = 0;
	char tok, popOp;

	memset(convExp, 0, sizeof(char) * expLen + 1);
	stackInit(&stack);

	for (i = 0; i < expLen; i++) {
		tok = exp[i];
		if (isdigit(tok)) {
			convExp[idx++] = tok;
		}
		else {
			switch (tok) {
			case '(':
				sPush(&stack, tok);
				break;
			case ')':
				while (1) {
					popOp = sPop(&stack);
					if (popOp == '(') break;
					convExp[idx++] = popOp;
				}
				break;
			case '+': case '-':
			case '*': case '/':
				while (!sIsEmpty(&stack) && WhoPrecOp(sPeek(&stack), tok) >= 0) {
					convExp[idx++] = sPop(&stack);
				}

				sPush(&stack, tok);
				break;
			}
		}
	}

	while (!sIsEmpty(&stack)) {
		convExp[idx++] = sPop(&stack);
	}

	strcpy(exp, convExp);
	free(convExp);
}
