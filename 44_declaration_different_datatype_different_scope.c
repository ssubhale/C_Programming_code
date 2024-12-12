#include <stdio.h>

extern int No;

int main(void)
{
    // extern float No;                 // error LNK2019: unresolved external symbol _No referenced in function _main

    printf("%d", No);

    return 0;
}

