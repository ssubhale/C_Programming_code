#include <stdio.h>

int FactorialRecursive(int);
int FactorialNonRecursive(int);

int main(void)
{
    int iNo;
    int iAns;

    printf("Enter a numbers : ");
    scanf("%d", &iNo);

    iAns = FactorialRecursive(iNo);
    printf("Factorial of %d is %d\n", iNo, iAns);

    iAns = FactorialNonRecursive(iNo);
    printf("Factorial of %d is %d\n", iNo, iAns);

    return 0;
}


int FactorialRecursive(int iNo)
{
    if (iNo == 1)
        return 1;

    return iNo * FactorialRecursive(iNo - 1);
}

int FactorialNonRecursive(int iNo)
{
    int iAns = 1;
    int iCounter;

    for (iCounter = iNo; iCounter > 1; iCounter--)
    {
        iAns = iAns * iCounter;
    }
    return iAns;
}

