#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char sent[1000001];
    int cnt = 0;


    scanf("%[^\n]", sent); // 엔터가 나올때까지 문자열로 받는다.

    int length = strlen(sent);
    // printf("%d\n", length);
    if (length > 1)
    {
        for (int i = 1; i < length - 1; i++)
        {
            if (sent[i] == ' ')
            {
                cnt = cnt + 1;
            }
        }
        printf("%d", cnt + 1);
    }
    else
    {
        if (sent[0] != ' ') {
            printf("%d", 1);
        }
        else {
            printf("%d", 0);
        }
    }

    return 0;

}
