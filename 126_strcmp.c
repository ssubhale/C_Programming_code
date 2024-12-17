#include <stdio.h>
#include <string.h>

int main(void)
{
    int iResult;
    char szStr1[20];
    char szStr2[20];

    printf("Enter string 1 : ");
    gets(szStr1);

    printf("Enter string 2 : ");
    gets(szStr2);

    iResult = strcmp(szStr1, szStr2);

    if (iResult == 0)
    {
        printf("Both stringa are same");
    }
    else
    {
        printf("Both strings are not same");
    }

    return 0;
}

