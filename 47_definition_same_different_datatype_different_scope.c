#include <stdio.h>

int No = 10;

void Fun(void);

int main(void)
{
    int No = 20;
    printf("%d\n", No);             // 20

    {
        char No = 'A';
        printf("%d\n", No);         // 65
    }

    printf("%d\n", No);             // 20

    Fun();

    return 0;
}


void Fun(void)
{
    printf("%d\n", No);             // 10
}

