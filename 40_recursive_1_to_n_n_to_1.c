#include <stdio.h>

void Print1toN(int);
void PrintNto1(int);

int main(void)
{
    int iNo;

    printf("Enter a number : ");
    scanf("%d", &iNo);

    Print1toN(iNo);
    PrintNto1(iNo);

    return 0;
}


void Print1toN(int iNo)
{
    if (iNo == 0)
        return ;
    
    Print1toN(iNo - 1);
    printf("%d\n", iNo);

}


void PrintNto1(int iNo)
{
    if (iNo == 0)
        return ;

    printf("%d\n", iNo);
    PrintNto1(iNo - 1);

}

