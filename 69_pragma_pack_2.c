#include <stdio.h>

struct demo1
{
    char chChar;
    double dNo;

}obj1;                  // 16

#pragma pack(4)

struct demo2
{
    char chChar;
    double dNo;

}obj2;                  // 12

#pragma pack(1)

struct demo3
{
    char chChar;
    double dNO;

}obj3;                  // 9

#pragma pack()

struct demo4
{
    char chChar;
    double dNo;
}obj4;


int main(void)
{
    printf("sizeof(obj1) : %d\n", sizeof(obj1));

    printf("sizeof(obj2) : %d\n", sizeof(obj2));
    
    printf("sizeof(obj3) : %d\n", sizeof(obj3));
    
    printf("sizeof(obj4) : %d\n", sizeof(obj4));
    
    return 0;
}

