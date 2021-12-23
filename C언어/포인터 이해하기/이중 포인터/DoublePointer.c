#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;

	printf("%9p %9p\n", ptr, *dptr); // *dptr = ptr = &num;
	printf("%9g %9g\n", *ptr, **dptr); // **dptr = *ptr = num;
	ptr2 = *dptr;	// ptr2 = *ptr = ptr = &num;
	*ptr2 += 2;
	printf("%9g %9g \n", *ptr, *ptr2);
}