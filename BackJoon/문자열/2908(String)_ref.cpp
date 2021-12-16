#include <stdio.h> 
#include <string.h>
#include <stdlib.h>


int main(void)
{
    int num1, num2, a, b;
   
    scanf("%d %d", &num1, &num2);
    
    a = (num1 / 100) + (((num1 % 100) / 10)) * 10 + (((num1 % 100) % 10) * 100);
    b = (num2 / 100) + (((num2 % 100) / 10)) * 10 + (((num2 % 100) % 10) * 100);
    
    
    if (a > b) {
        printf("%d\n", a);
    }
    else {
        printf("%d\n", b);
    }
    return 0;
}
