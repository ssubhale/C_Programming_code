#include <stdio.h>
#include <string.h>

int main(void)
{
    char * pszStr = "Hello";

    printf("%d\n", sizeof(pszStr));         // 4

    printf("%d\n", strlen(pszStr));         // 5

    printf("%c\n", pszStr[3]);          // l, on windows its ok but, linux its error

    pszStr = "Bye";                     // its ok bcs pointer now pointing to another string

    return 0;
}

