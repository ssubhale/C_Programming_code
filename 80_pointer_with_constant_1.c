#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int *pPtr = &iNo;

    printf("%d\n", iNo++);              // allowed, iNo is non-constant
    printf("%d\n",(*pPtr)++);           // allowed, Pointer pointing to non constant
    printf("%d\n",pPtr);                // 20183260
    printf("%d\n",++pPtr);              // 20183264 allowed, pPtr is non-constant

    return 0;
}

