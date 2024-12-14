#include <stdio.h>

int main(void)
{
    const int iNo = 10;
    int * pPtr = &iNo;

    // iNo++;                       // error C2166: l-value specifies const object
    printf("%d\n", iNo);

    (* pPtr)++;
    printf("%d\n", iNo);            // 11

    printf("%d\n", pPtr);           // 10157380

    pPtr++;
    printf("%d\n", pPtr);           // 10157384

    return 0;
}

