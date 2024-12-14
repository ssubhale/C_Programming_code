#include <stdio.h>

int main(void)
{
    double arr[5] = {10.00, 20.00, 30.00, 40.00, 50.00};

    double * pPtr = &arr[4];

    printf("%d\n", &pPtr);              // 4259140
    printf("%lf\n", *pPtr);             // 50.00

    --pPtr;

    printf("%d\n", &pPtr);              // 4259140
    printf("%lf\n", *pPtr);             // 40.00

    return 0;
}

