#include <stdio.h>


int main(int argc, char * argv[])
{
    int iCounter;

    printf("Argument count is %d\n", argc);

    printf("Argument value \t");

    for(iCounter = 0; iCounter < argc; iCounter++)
        puts(argv[iCounter]);

    return 0;
}


