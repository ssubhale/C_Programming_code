#include <stdio.h>

struct demo1
{
    char chChar;
    double dNo;
    int iNo;

}obj1;

struct demo2
{
    char chChar;
    int iNo;
    double dNo;

}obj2;


int main(void)
{
    printf("sizeof(obj1) : %d\n",sizeof(obj1));

    printf("sizeof(obj2) : %d\n",sizeof(obj2));
    
    return 0;
}

