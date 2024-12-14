#include <stdio.h>

struct demo1
{
    char chChar;
    double dNo;

}obj1;

struct demo2
{
    char chChar;
    int iNo;

}obj2;

struct demo3
{
    char chChar;
    double dNo;

}obj3;

struct demo4
{
    char chChar1;
    char chChar2;

}obj4;


int main(void)
{

    printf("sizeof(obj1) : %d\n", sizeof(obj1));               // 12 in 32 bit processor         // 16 in 64 bit processor
    
    printf("sizeof(obj2) : %d\n", sizeof(obj2));               // 8 in 32 bit processor          // 8 in 64 bit processor
    
    printf("sizeof(obj3) : %d\n", sizeof(obj3));               // 12 in 32 bit processor          // 16 in 64 bit processor

    printf("sizeof(obj4) : %d\n", sizeof(obj4));               // 2 in 32 bit processor          // 2 in 64 bit processor
    
    return 0;
}

