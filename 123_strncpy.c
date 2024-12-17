#include <stdio.h>
#include <string.h>

int main(void)
{
    int iValue;
    char szSource[20];
    char szDestination[20];

    printf("Enter source string : ");
    gets(szSource);

    printf("Enter value of n : ");
    scanf("%d", &iValue);

    printf("Source string is : ");
    puts(szSource);

    strncpy(szDestination, szSource, iValue);

    printf("Destination string is : ");
    puts(szDestination);
    
    return 0;
}

