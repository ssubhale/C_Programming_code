#include <stdio.h>

union outer1
{
    int iNo;
    double dNo;

    struct inner1
    {
        int iNO;
        float fNo;
    }iObj1, iObj2;
}oObj1;

union outer2
{
    int iNo;
    float fNo;

    struct inner2
    {
        char chChar1;
        char chChar2;
    }iObj3, iObj4;
}oObj2;


int main(void)
{
    printf("sizeof(oObj1) : %d\n", sizeof(oObj1));

    printf("sizeof(oObj2) : %d\n", sizeof(oObj2));

    return 0;
}

