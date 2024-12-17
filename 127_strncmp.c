#include <stdio.h>
#include <string.h>

int main(void)
{
    int iNo, iResult;
    char szStr1[20];
    char szStr2[20];

    printf("Enter string 1 : ");
    gets(szStr1);

    printf("Enter string 2 : ");
    gets(szStr2);

    printf("Enter value of n : ");
    scanf("%d", &iNo);

    iResult = strncmp(szStr1, szStr2, iNo);

    if (iResult == 0)
    {
        printf("Both strings are same");
    }
    else
    {
        printf("Both strings are not same");
    }

    getch();

    return 0;
}

