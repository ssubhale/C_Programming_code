#include <stdio.h>


int main(void)
{
    int iAns;
    int iNo = 10;

    printf("%d\n", iNo);

    iAns = --iNo;
    printf("%d\n", iNo);
    printf("%d\n", iAns);

    iAns = iNo--;
    printf("%d\n", iNo);

    iNo--;
    printf("%d\n", iNo);
    
    --iNo;
    printf("%d\n", iNo);

    printf("%d\n", iNo--);
    printf("%d\n", iNo);

    printf("%d\n", --iNo);
    printf("%d\n", iNo);

    return 0;
}

