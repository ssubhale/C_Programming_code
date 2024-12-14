#include <stdio.h>

int main(void)
{
    int iNo = 10;
    int const * const pPtr = &iNo;

    printf("%d\n", iNo);
    iNo++;
    printf("%d\n", iNo);

    // (* pPtr) ++;                     // error C2166: l-value specifies const object
    // pPtr++;                          // error C2166: l-value specifies const object

    return 0;
}

