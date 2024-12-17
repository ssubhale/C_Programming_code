#include <stdio.h>
#include <string.h>

int main(void)
{
    char chChar;
    char szStr[20];
    char * pPtr;

    printf("Enter string : ");
    gets(szStr);

    printf("Enter character to be found : ");
    scanf("%c", &chChar);

    pPtr = strchr(szStr, chChar);

    if (pPtr == NULL)
        printf("Character is not found");
    else
        printf("Character is found a %d location", (pPtr - szStr) + 1);

    return 0;
}

