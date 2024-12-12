#include <stdio.h>


int main(void)
{
    // extern int g_iNo;         // error LNK2019: unresolved external symbol _g_iNo referenced in function _main

    void Fun(void);

    printf("%d\n", g_iNo);

    Fun();

    return 0;
}

static int g_iNo =30;
