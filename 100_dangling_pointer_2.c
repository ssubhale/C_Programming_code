#include <stdio.h>

void Fun(int **);

int main(void)
{
    int *pPtr = NULL;

    Fun(&pPtr);

    printf("%d\n", *pPtr);          // 10

    return 0;
}

void Fun(int **ppPtr)
{
    int iNo = 10;

    *ppPtr = &iNo;

    printf("%d\n", **ppPtr);        // 10
}

