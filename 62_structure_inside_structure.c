#include <stdio.h>

struct outer1
{
    int iNo1;
    float fNo1;

    struct inner
    {
        int iNo2;
        float fNo2;
    };
}oObj1;                 // 16

struct outer2
{
    int iNo;
    float fNo;
    
    struct inner2
    {
        int iNO;
        float fNo;
    }iObj;
}oObj2;                // 16

struct outer3
{
    int iNO;
    float fNo;

    struct inner3
    {
        int iNo;
        double dNo;
    }iObj1, iObj2;
}oObj3;                 // 40

struct outer4
{
    int iNo;
    int fNo;

    struct inner4
    {
        int iNo;
        float fNO;
    }iObj1, iObj2, iObj3;
}oObj4;                 // 32

struct outer5
{
    int iNo;
    float fNo;

    struct inner5
    {
        int iNo;
        float fNo;
    }iObj[3];
}oObj5;                 // 32


int main(void)
{
    // printf("%d\n",oObj1.iNo2);                   // error

    printf("sizeof(oObj1) : %d\n", sizeof(oObj1));                  // 16

    printf("sizeof(oObj2) : %d\n", sizeof(oObj2));                  // 16
    
    printf("sizeof(oObj3) : %d\n", sizeof(oObj3));                  // 40
    
    printf("sizeof(oObj4) : %d\n", sizeof(oObj4));                  // 32
    
    printf("sizeof(oObj5) : %d\n", sizeof(oObj5));                  // 32

    printf("sizeof(oObj3.iObj1) : %d\n", sizeof(oObj3.iObj1));                  // 32
    
    // printf("sizeof(oObj3.iObj1) : %d\n", sizeof(oObj3.iObj1));                  // 32
    // printf("sizeof(oObj3.iObj2) : %d\n", sizeof(oObj3.iObj2));                  // 32

    return 0;
}

