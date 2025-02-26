#include <stdio.h>

// void * * ( * p )( float *, int * * ( * )( char *, int * *) );

void **Fun1(float *, int **(*)(char *, int **));
int **Fun2(char *, int **);


int main(void)
{
    void **(*pPtr)(float *, int **(*)(char *, int **)) = Fun1;

    float fNo = 3.14;
    int iNo = 42;
    int *pInt = &iNo;

    void **ppResult = pPtr(&fNo, Fun2);

    int **ippPtr = (int **)ppResult[0];
    int iValue = **ippPtr;

    printf("\nInteger Result: %d", iValue);

    return 0;
}

void **Fun1(float *fpPtr, int **(*Func)(char *, int **))
{
    printf("\nFun1 called");

    int iNo = 100;
    int *pPtr = &iNo;
    char chChar = 'A';

    int **ppPtr = Func(&chChar, &pPtr);

    static void *arr[2];
    arr[0] = (void *)ppPtr;
    arr[1] = (void *)fpPtr;

    return arr;
}

int **Fun2(char *ch, int **pPtr1)
{
    printf("\nFun2 called");

    static int *pPtr2;
    static int iNo = 500;
    pPtr2 = &iNo;

    return &pPtr2;
}


