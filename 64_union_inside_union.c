#include <stdio.h>

union outer1
{
    int iNo;
    double dNo;

    union inner1
    {
        int iNo;
        double dNo;
    }iObj1, iObj2;
}oObj1;

union outer2
{
    int iNo;
    double dNo;

    union inner2
    {
        int iNo;
        float fNo;
    }iObj[2];
}oObj2;


int main(void)
{
    printf("sizeof(oObj1) : %d\n", sizeof(oObj1));

    printf("sizeof(oObj2) : %d\n", sizeof(oObj2));
    
    return 0;
}

