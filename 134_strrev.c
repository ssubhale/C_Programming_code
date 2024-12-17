#include <stdio.h>
#include <string.h>

int main(void)
{
    char szStr[20];

    printf("Enter string : ");
    gets(szStr);

    strrev(szStr);

    printf("Reverse string is : ");
    puts(szStr);

    return 0;
}

