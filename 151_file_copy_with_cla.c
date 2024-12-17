#include <stdio.h>

int main(int argc, char * argv[])
{
    FILE *fpSource = NULL;
    FILE *fpDestination = NULL;
    char chChar;

    fpSource = fopen(argv[1], "r");
    if (NULL == fpSource)
    {
        printf("Cant open source file");
        return -1;
    }

    fpDestination = fopen(argv[2], "w");
    if (NULL == fpDestination)
    {
        printf("Cant open destination file");
        fclose(fpSource);
        fpSource = NULL;

        return -1;
    }

    while(1)
    {
        chChar = fgetc(fpSource);
        if (chChar == EOF)
            break;
        fputc(chChar, fpDestination);
    }

    fclose(fpSource);
    fpSource = NULL;
    fclose(fpDestination);
    fpDestination = NULL;

    printf("Copied successfully");

    return 0;
}

