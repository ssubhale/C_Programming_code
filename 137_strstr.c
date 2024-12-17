#include <stdio.h>
#include <string.h>

int main(void)
{
    char szStr1[20];
    char szStr2[20];
    char * pPtr = NULL;

    printf("Enter string : ");
    gets(szStr1);

    printf("Enter string to b found : ");
    gets(szStr2);

    pPtr = strstr(szStr1, szStr2);

    if (pPtr == NULL)
        printf("String not found");
    else
    {
        printf("String is found at %d location", (pPtr - szStr1) + 1);
        printf("String found in '%s'", pPtr);
    }

    return 0;
}

