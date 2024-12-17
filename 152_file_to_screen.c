#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char szText[50];

    fp = fopen("characters.txt", "r");

    if (NULL == fp)
    {
        printf("Cant open file");
        return -1;
    }

    while(fgets(szText, 49, fp) != NULL)
        printf("%s",szText);

    fclose(fp);
    fp = NULL;    
    
    return 0;
}

