#include <stdio.h>

int g_iNo = 10;             // error LNK2005: _g_iNo already defined in 49_external_linkage_error_main.obj

void Fun(void)
{
    printf("In Fun %d\n",g_iNo);

}

