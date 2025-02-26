#include <stdio.h>

// 25) float ( * ( * p[3] ) ( int * ))[2];


float (*Fun1(int *))[2];
float (*Fun2(int *))[2];
float (*Fun3(int *))[2];

int main(void)
{

    float (*(*pPtr[3])(int *))[2] = {Fun1, Fun2, Fun3};

    int iNo = 5;
    int iCounter;
    float (*pResult)[2];

    for (iCounter = 0; iCounter < 3; iCounter++)
    {
        pResult = pPtr[iCounter](&iNo);
        printf("Function %d : %f, %f\n", iCounter + 1, (*pResult)[0], (*pResult)[1]);
    }

    return 0;
}

float (*Fun1(int *ptr))[2]
{
    static float arr[2] = {10.00f, 20.00f};
    return &arr;
}

float (*Fun2(int *ptr))[2]
{
    static float arr[2] = {30.00f, 40.00f};
    return &arr;
}

float (*Fun3(int *ptr))[2]
{
    static float arr[2] = {50.00f, 60.00f};
    return &arr;
}
