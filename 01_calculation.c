#include <stdio.h>
#include "calculation.h"


int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("For addition, \nEnter two numbers : ");
    scanf("%d%d", &iNo1, &iNo2);
    iAns = Addition(iNo1, iNo2);
    printf("Addition is : %d", iAns);

    Subtraction();

    printf("Multiplication is %d", Multiplication());

    printf("\nFor division \nEnter numerator : ");
    scanf("%d", &iNo1);
    printf("Enter denominator : ");
    scanf("%d", &iNo2);

    Division(iNo1, iNo2);

    iAns = Modulus();
    printf("Remainder is : %d", iAns);

    return 0;
}

int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

void Subtraction(void)
{
    int iNo1, iNo2;
    printf("\nFor subtraction \nEnter two numbers : ");
    scanf("%d%d", &iNo1, &iNo2);
    printf("Subtraction is : %d", iNo1 - iNo2);
}

int Multiplication()
{
    int iNo1, iNo2;

    printf("\nFor multiplication \nEnter two numbers : ");
    scanf("%d%d", &iNo1, &iNo2);

    return iNo1 * iNo2;
}

void Division(int iNo1, int iNo2)
{
    printf("Quotient is : %d", iNo1 / iNo2);
}

int Modulus(void)
{
    int iNumerator, iDenominator, iRemainder;

    printf("\nFor modulus \nEnter numerator : ");
    scanf("%d", &iNumerator);
    printf("Enter denominator : ");
    scanf("%d", &iDenominator);
    iRemainder = iNumerator % iDenominator;
    return iRemainder;
}

