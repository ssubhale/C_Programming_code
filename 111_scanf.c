#include <stdio.h>
#include <string.h>

int main(void)
{
    char szName[50];

    printf("Enter your name : ");
    scanf("%s", &szName);

    printf("%s", szName);

    return 0;
}

