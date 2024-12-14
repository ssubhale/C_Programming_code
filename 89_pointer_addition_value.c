#include <stdio.h>

int main(void)
{
    float arr[5] = {10.00f, 20.00f, 30.00f, 40.00f, 50.00f};
    float * pPtr = &arr[0];

    printf("%d\n", pPtr);               // 13631120
    printf("%f\n", *pPtr);              // 10.00

    printf("%d\n", pPtr + 3);           // 13631132
    printf("%f\n", *(pPtr) + 3);        // 13.00

    printf("%d\n", pPtr);               // 13631120
    printf("%f\n", *pPtr);              // 10.00

    return 0;
}

