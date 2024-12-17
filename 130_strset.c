#include <stdio.h>
#include <string.h>

int main(void)
{
    char chChar;
    char szStr[20];

    printf("Enter string : ");
    gets(szStr);

    printf("Enter character to set : ");
    scanf("%c", &chChar);

    strset(szStr, chChar);
    
    printf("Now string is : ");
    puts(szStr);

    return 0;
}

