#include <stdio.h>

void AddSub(int, int, int *, int *);

int main(void)
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter two numbers : ");
    scanf("%d %d", &iNo1, &iNo2);

    AddSub(iNo1, iNo2, &iSum, &iDiff);

    printf("Addition is %d\n", iSum);
    printf("Sibtraction is %d\n", iDiff);

    return 0;
}

void AddSub(int iNo1, int iNo2, int *iSum, int *iDiff)
{
    *iSum = iNo1 + iNo2;
    *iDiff = iNo1 - iNo2;
}

