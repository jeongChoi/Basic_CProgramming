#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int a = 0;
    int b = 0;
    char s[10];
    char num1[10];
    char num2[10];
    int i;
    int j = 0;

    scanf("%[^\n]", &s);
    
    for (i = 2; i >= 0; i--) {
        num1[j] = s[i];
        j++;
    }

    j = 0;

    for (i = 6; i >= 4; i--) {
        num2[j] = s[i];
        j++;
    }
    
    a = atoi(num1);
    b = atoi(num2);

    if (a > b) {
        printf("%d\n", a);
    }
    else {
        printf("%d\n", b);
    }
    
    return 0;
}
