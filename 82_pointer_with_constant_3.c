#include <stdio.h>

int main(void)
{
    const int iNo = 10;
    const int * pPtr = &iNo;

    // iNo++;                   // error C2166: l-value specifies const object
    // (* pPtr)++;              // error C2166: l-value specifies const object
    printf("%d\n", pPtr);       // 15728236
    pPtr++;
    printf("%d\n", pPtr);       // 15728240
    
    return 0;
}

