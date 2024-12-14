#include <stdio.h>

struct outer1
{
    int iNo;
    float fNo;

    union inner1
    {
        int iNo;
        float fNo;
    }iObj1, iObj2;
    
}oObj1;

struct outer2
{
    int iNo;
    double dNo;

    union inner2
    {
        int iNo;
        double dNo;
    }iObj[2];
}oObj2;


int main(void)
{
    printf("sizeof(oObj1) : %d\n", sizeof(oObj1));              // 16

    printf("sizeof(oObj2) : %d\n", sizeof(oObj2));              // 32

    return 0;
}

