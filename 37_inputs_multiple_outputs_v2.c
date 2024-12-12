#include <stdio.h>

int AddSub(int, int, int *);

int main(void)
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter two numbers : ");
    scanf("%d %d", &iNo1, &iNo2);

    iSum = AddSub(iNo1, iNo2, &iDiff);

    printf("Addition is %d\n", iSum);
    printf("Subtraction is %d\n", iDiff);

    return 0;
}

int AddSub(int iNo1, int iNo2, int *iDiff)
{
    *iDiff = iNo1 - iNo2;
    return iNo1 + iNo2;
}

