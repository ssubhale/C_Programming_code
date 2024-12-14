#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int *pPtr = &iNo;

    printf("%d\n", iNo);                // 10
    printf("%d\n", &iNo);               // 12384380

    printf("%d\n", pPtr);               // 12384380
    printf("%d\n", &pPtr);              // 12384376

    printf("%d\n", *pPtr);              // 10

    *pPtr = 20;

    printf("%d\n", *pPtr);              // 20
    printf("%d\n", iNo);                // 20

    return 0;
}

