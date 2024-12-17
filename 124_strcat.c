#include <stdio.h>
#include <string.h>

int main(void)
{
    char szSource[20];
    char szDestination[20];

    printf("Enter source string : ");
    gets(szSource);

    printf("Enter destination string : ");
    gets(szDestination);

    strcat(szDestination, szSource);

    printf("Concatenated string is : ");
    puts(szDestination);

    return 0;
}

