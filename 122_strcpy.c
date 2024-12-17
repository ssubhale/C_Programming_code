#include <stdio.h>
#include <string.h>

int main(void)
{
    char szSource[20];
    char szDestination[20];

    printf("Enter source string : ");
    gets(szSource);

    printf("Source string is : ");
    puts(szSource);

    strcpy(szDestination, szSource);

    printf("Destination string is : ");
    puts(szDestination);
    
    return 0;
}

