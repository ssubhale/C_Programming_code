#include <stdio.h>


int main(void)
{
    int iNo1 = 10;                           // block scope

    printf("%d\n", iNo1);                    // 10
    // printf("%d\n", iNo2);                // error

    {
        int iNo2 = 20;                      // block scope
        printf("%d\n", iNo1);               // 10
        printf("%d\n", iNo2);               // 20
    }

    printf("%d\n", iNo1);                   // 10
    // printf("%d\n", iNo2);                // error

    return 0;
}

