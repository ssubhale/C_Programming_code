#include <stdio.h>

struct inner
{
    int iNO;
    float fNo;
};

struct outer
{
    int iNO;
    float fNo;
    struct inner iObj;
    
}oObj;


int main(void)
{
    printf("sizeof(oObj) : %d", sizeof(oObj));

    return 0;
}

