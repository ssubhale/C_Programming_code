#include <stdio.h>

union demo
{
    char chChar;
    int iNo;
    double dNo;
};

int main(void)
{
    union demo obj;
    printf("%c %d %lf\n", obj.chChar, obj.iNo, obj.dNo);

    obj.chChar = 'A';
    printf("%c %d %lf\n", obj.chChar, obj.iNo, obj.dNo);

    obj.iNo = 10;
    printf("%c %d %lf\n", obj.chChar, obj.iNo, obj.dNo);

    obj.dNo = 99.99;
    printf("%c %d %lf\n", obj.chChar, obj.iNo, obj.dNo);

    return 0;
}
