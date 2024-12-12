#include <stdio.h>

static int g_iNo =30;

int main(void)
{

    void Fun(void);

    printf("%d\n", g_iNo);              // 30

    Fun();

    return 0;
}

