#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Man.h"

Man* makeMan(char* num, char* name) {
	Man* man = (Man*)malloc(sizeof(Man));
	strcpy(man->num, num);
	strcpy(man->name, name);

	return man;
}
