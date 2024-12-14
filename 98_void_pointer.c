#include <stdio.h>

int main(void)
{
    int iNo = 10;

    void *pPtr = &iNo;

    printf("%d\n", iNo);
    printf("%d\n", &iNo);

    printf("%d\n", pPtr);
    printf("%d\n", &pPtr);

    // printf("%d\n", *pPtr);               // error C2100: illegal indirection
    printf("%d\n", *(int *) pPtr);

    return 0;
}

