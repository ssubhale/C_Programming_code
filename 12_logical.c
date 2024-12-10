#include <stdio.h>


int main(void)
{
    int iAns;

    printf("%d\n", 1 && 1);
    printf("%d\n", 1 && 0);

    printf("%d\n", 1 | 1);
    printf("%d\n", 1 | 0);
    printf("%d\n", 0 | 0);

    printf("%d\n", !0);

    printf("%d\n", 10 && 20);
    printf("%d\n", 10 && -20);

    printf("%d\n", 10 || -20);
    printf("%d\n", 10 || -20);

    printf("%d\n", !10);
    printf("%d\n", !-10);

    return 0;
}

