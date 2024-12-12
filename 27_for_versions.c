#include <stdio.h>


int main(void)
{
    int iCounter;
    int iCounter1;
    int iCounter2;

    for (iCounter = 0; iCounter < 3; iCounter++)
        printf("%d\n", iCounter);


    iCounter = 0;
    for ( ; iCounter < 3; iCounter++)
        printf("%d\n", iCounter);


    for (iCounter = 0; ; iCounter++ )
    {
        if (iCounter == 3)
            break;
        
        printf("%d\n", iCounter);
    }


    for (iCounter = 0; iCounter < 3; )
    {
        printf("%d\n", iCounter);
        iCounter++;
    }


    iCounter = 0;
    for ( ; ; )
    {
        if (iCounter == 3)
            break;

        printf("%d\n", iCounter);
        iCounter++;
    }


    iCounter = 0;
    for ( ; iCounter< 3; )
    {
        printf("%d\n", iCounter);
        iCounter++;
    }


    for (
        iCounter1 = 0, iCounter2 = 3;
        iCounter1 < 3 && iCounter2 > 0;
        iCounter1++, iCounter2--
        )
        printf("%d %d\n",iCounter1, iCounter2);
                
    return 0;
}

