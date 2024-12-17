#include <stdio.h>


int main(int argc, char * argv[])
{
    int iAns = 0;
    int iCounter;

    for (iCounter = 1; iCounter < argc; iCounter++)
        iAns = iAns + atoi(argv[iCounter]);

    printf("Addition is %d", iAns);

    return 0;
}

