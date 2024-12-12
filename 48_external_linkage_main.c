#include <stdio.h>

int main(void)
{
    extern int g_iNo;

    void Fun(void);

    printf("%d\n", g_iNo);

    Fun();

    return 0;
}

