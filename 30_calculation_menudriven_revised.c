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

    do
    {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &iChoice);

        if (iChoice <= 0 || iChoice > 6)
        {
            printf("Please enter valid choice");
            continue;
        }

        if (iChoice == 6)
        {
            printf("Exists successfully");
            return 0;
        }

        printf("\nEnter two numbers : ");
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
        printf("Answer is : %d\n", iAns);

    }
    while(1);

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

int Modulus(int iNo1, int iNo2)
{
    return iNo1 % iNo2;
}

