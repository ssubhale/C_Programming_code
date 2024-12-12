#include <stdio.h>

int main(void)
{

    extern int No;
    // extern float No;             // error LNK2019: unresolved external symbol _No referenced in function _main

    printf("%d\n",No);              // 20

    return 0;
}

int No = 20;

