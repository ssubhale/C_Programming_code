#include <stdio.h>

int main(void)
{
    char szStr[] = "Hello";
    char * pszStr = "Good";

    printf("%s ", szStr);
    printf("%s ", pszStr);
    printf("%s ", "Afternoon\n");

    // or

    printf("%s %s %s", szStr, pszStr, "Afternoon");

    return 0;
}

