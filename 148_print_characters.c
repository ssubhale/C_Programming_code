#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char chChar;

    fp = fopen("characters.txt", "r");

    if (NULL == fp)
    {
        printf("\nCant open file\n");
        return -1;
    }

    while(1)
    {
        chChar = fgetc(fp);
        if (chChar == EOF)
            break;
        else
            printf("%c", chChar);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}

