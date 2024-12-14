#include <stdio.h>

int Addition(int, int);
int Multiplication(int, int);

int main(void)
{
    int iAnswer;
    int (*fpPtr)(int, int) = NULL;

    // fpPtr = &Addition;
    fpPtr = Addition;
    iAnswer = fpPtr(10, 20);

    printf("Addition is %d\n", iAnswer);

    fpPtr = Multiplication;
    iAnswer = fpPtr(10, 20);

    printf("Multiplication is %d\n", iAnswer);

    return 0;
}

int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
    return iNo1 * iNo2;
}

