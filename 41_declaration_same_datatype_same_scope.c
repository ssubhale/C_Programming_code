#include <stdio.h>

int main(void)
{
    extern int iNo;
    extern int iNo;

    printf("%d", iNo);              // 10

    return 0;
}

int iNo = 10;

