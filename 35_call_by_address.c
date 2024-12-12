#include <stdio.h>

void Fun(int *);

int main(void)
{
    int iNo = 10;

    printf("In main iNo is %d\n", iNo);

    Fun(&iNo);

    printf("Leaving main iNo is %d\n", iNo);

    return 0;
}


void Fun(int *pPtr)
{
    printf("In Fun iNo is %d\n", *pPtr);

    ++*pPtr;

    printf("Leaving Fun iNo is %d\n", *pPtr);
}

