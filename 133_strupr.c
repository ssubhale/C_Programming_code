#include <stdio.h>
#include <string.h>

int main(void)
{
    char szStr[20];
    printf("Enter string : ");
    gets(szStr);

    strupr(szStr);

    printf("String in upper case : ");
    puts(szStr);

    return 0;
}

