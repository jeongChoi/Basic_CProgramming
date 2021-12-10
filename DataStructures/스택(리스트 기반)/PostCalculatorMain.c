#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"
#include "InfixToPostfix.h"
#include "PostCalculator.h"

int main(void) {
	
	char exp1[] = "42*8+";
	char exp2[] = "123+*4/";

	printf("%s = %d \n", exp1, EvalRPNExp(exp1));
	printf("%s = %d \n", exp2, EvalRPNExp(exp2));
	

	return 0;
}
