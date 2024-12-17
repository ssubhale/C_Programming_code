#include <stdio.h>

int main(void)
{
    char szStr[] = "Hello";
    char * pszStr = "Good";
    char szText[50];

    sprintf(szText, "%s %s %s", szStr, pszStr, "Afternoon");

    printf(szText);

    return 0;
}

