#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;

    int iNoOfChars = 0;
    int iNoOfSpaces = 0;
    int iNoOfTabs = 0;
    int iNoOfLines = 1;

    char chChar;

    fp = fopen("characters.txt", "r");

    if (NULL == fp)
    {
        printf("Cant open file");
        return -1;
    }

    while(1)
    {
        chChar = fgetc(fp);

        if (chChar == EOF)
            break;
        
        iNoOfChars++;

        if (chChar == ' ')
            iNoOfSpaces++;
        
        else if (chChar == '\t')
            iNoOfTabs++;

        else if (chChar == '\n')
            iNoOfLines++;
    }

    fclose(fp);
    fp = NULL;

    printf("\nNo of characters are %d\n", iNoOfChars);
    printf("No of spaces are %d\n", iNoOfSpaces);
    printf("No of tabs are %d\n", iNoOfTabs);
    printf("No of lines are %d\n", iNoOfLines);

    return 0;
}

