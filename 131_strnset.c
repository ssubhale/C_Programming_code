#include <stdio.h>
#include <string.h>

int main(void)
{
    int iValue;
    char chChar;
    char szStr[20];

    printf("Enter string : ");
    gets(szStr);
    
    printf("Enter character to set : ");
    scanf("%c", &chChar);

    printf("Enter value of n : ");
    scanf("%d", &iValue);

    strnset(szStr, chChar, iValue);

    printf("New string : ");
    puts(szStr);

    return 0;
}

