#include <stdio.h>


int main(void)
{
    int iNo1 = 0;
    int iNo2 = 1;
    int iNo3 = 2;
    int iAns;

    iAns = iNo1 && ++iNo2 || iNo3++;
    printf("%d %d %d %d", iNo1, iNo2, iNo3, iAns);

    return 0;
}

