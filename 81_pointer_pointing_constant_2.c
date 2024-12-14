#include <stdio.h>

int main(void)
{
    int iNo = 10;
    const int *pPtr = &iNo;

    printf("%d\n", ++iNo);              // allowed, iNo is non-constant
    // printf("%d\n",(*pPtr) ++);       // error C2166: l-value specifies const object
    printf("%d\n", pPtr);               // 20314564
    printf("%d\n", ++pPtr);             // 20314568 allowed, pPtr is non-constant

    return 0;
}

