#include <stdio.h>
#include <string.h>

int main(void)
{
    char szStr[] = "Hello";

    printf("%d\n", sizeof(szStr));              // 6

    printf("%d\n", strlen(szStr));              // 5

    printf("%c\n", szStr[0]);                   // H

    // szStr = "Bye";                  //  error C2106: '=' : left operand must be l-value

    return 0;
}

