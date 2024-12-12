#include <stdio.h>


int main(void)
{
    int iCounter = 0;

    while (iCounter < 3)
    {
        printf("%d\n", iCounter);
        iCounter++;
    }

    iCounter = 3;
    while (iCounter < 3)
    {
        printf("%d\n", iCounter);       // no output
        iCounter++;
    }

    return 0;
}

