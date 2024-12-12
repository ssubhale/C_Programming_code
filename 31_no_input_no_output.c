#include <stdio.h>


void Addition(void);


int main(void)
{
    Addition();

    return 0;
}

void Addition(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("For addition enter two numbers : ");
    scanf("%d %d", &iNo1, &iNo2);

    iAns = iNo1 + iNo2;

    printf("Answer is : %d", iAns);

}

