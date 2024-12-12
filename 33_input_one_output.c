#include <stdio.h>


int Addition(int,int);


int main(void)
{
    int iNo1;
    int iNo2;
    int iAns;

    printf("For addition enter two numbers : ");
    scanf("%d %d", &iNo1, &iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Answer is %d ", iAns);

    return 0;
}


int Addition(int iNo1, int iNo2)
{
    int iAns = iNo1 + iNo2;

    return iAns;
}

