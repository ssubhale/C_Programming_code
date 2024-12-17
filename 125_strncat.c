#include <stdio.h>
#include <string.h>

int main(void)
{
    int iValue;
    char szSource[20];
    char szDestination[20];

    printf("Enter destination string : ");
    gets(szDestination);

    printf("Enter source string : ");
    gets(szSource);

    printf("Enter value of n : ");
    scanf("%d", &iValue);

    strncat(szDestination, szSource, iValue);

    printf("Concatenated string is : ");
    puts(szDestination);

    return 0;
}

