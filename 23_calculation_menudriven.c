#include <stdio.h>


int Addition(int, int);
int Subtraction(int, int);
int Multiplication(int, int);
int Division(int, int);
int Modulus(int, int);

int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;
    int iChoice;

    printf("1. Addition \n2. Substraction \n3. Multiplication \n4. Division \n5. Multiplication \nEnter your choice : ");
    scanf("%d", &iChoice);

    if (iChoice <=0 || iChoice > 5)
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Enter two numbers : ");
    scanf("%d %d", &iNo1, &iNo2);

    switch (iChoice)
    {
        case 1:
            iAns = Addition(iNo1, iNo2);
            break;

        case 2:
            iAns = Subtraction(iNo1, iNo2);
            break;

        case 3:
            iAns = Multiplication(iNo1, iNo2);
            break;

        case 4:
            iAns = Division(iNo1, iNo2);
            break;

        case 5:
            iAns = Modulus(iNo1, iNo2);
            break;
    }

    printf("Answer is : %d", iAns);

    return 0;
}


int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

int Subtraction(int iNo1, int iNo2)
{
    return iNo1 - iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
    return iNo1 * iNo2;
}

int Division(int iNo1, int iNo2)
{
    return iNo1 / iNo2;
}

int Modulus(int iNo1, int iNO2)
{
    return iNo1 % iNO2;
}

