#include <stdio.h>
#include <string.h>

int main(void)
{
    char szStr[20];

    printf("Enter the string : ");
    gets(szStr);

    strlwr(szStr);

    printf("String in lower case : ");
    puts(szStr);
    
    return 0;
}

