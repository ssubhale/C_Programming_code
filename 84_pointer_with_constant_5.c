#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int * const pPtr = &iNo;

    printf("%d\n", iNo);                // 10
    iNo++;
    printf("%d\n", iNo);                // 11

    (* pPtr)++;

    printf("%d\n", pPtr);               // 9435412    
    // pPtr++;                          // error C2166: l-value specifies const object
    
    return 0;
}

