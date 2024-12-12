#include <stdio.h>

int main(void)
{
    extern int g_iNo;

    void Fun(void);

    printf("In main %d\n",g_iNo);

    Fun();

    return 0;    
}

int g_iNo = 20;

