#include <stdio.h>
#include <string.h>

int main(void)
{
    char * pszStr = "Hello";
    char szStr[] = "Good";

    printf("The length of Hello is : %d\n", strlen(pszStr));
    printf("The length of Good is : %d\n", strlen(szStr));
    printf("The length of Afternoon is : %d\n", strlen("Afternoon"));

    return 0;
}

