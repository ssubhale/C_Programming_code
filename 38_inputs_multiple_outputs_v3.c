#include <stdio.h>

void AddSub(int *, int *);

int main(void)
{
    int iNo1;
    int iNo2;

    printf("Enter two numbers : ");
    scanf("%d %d", &iNo1, &iNo2);

    AddSub(&iNo1, &iNo2);

    printf("Addition is %d\n", iNo1);
    printf("Subtraction is %d\n", iNo2);

    return 0;
}


void AddSub(int *iNo1, int *iNo2)
{
    int iTemp;

    iTemp = *iNo1 - *iNo2;

    *iNo1 = *iNo1 + *iNo2;

    *iNo2 = iTemp;
}

