#include <stdio.h>
#include <string.h>
#define MAX 50

int main(int argc, char * argv[], char * envp[])
{
    int iCounter;
    char szStr[MAX] = "Hello, Good; Morning, Afternoon; Night";
    char * pszSubStr = NULL;

    printf("%s\n\n", szStr);                    // Hello, Good; Morning, Afternoon; Night

    pszSubStr = strtok(szStr, ", ;");

    while(pszSubStr != NULL)
    {
        puts(pszSubStr);
        pszSubStr = strtok(NULL, ", ;");
    }

    printf("\nLeaving main\n");

    return 0;
}



// OUTPUT

// Hello, Good; Morning, Afternoon; Night

// Hello
// Good
// Morning
// Afternoon
// Night

// Leaving main