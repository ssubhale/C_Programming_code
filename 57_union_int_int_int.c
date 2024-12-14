#include <stdio.h>

union demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
    union demo obj;

    printf("%d %d %d\n", obj.iNo1, obj.iNo2, obj.iNo3);
    
    obj.iNo1 = 10;
    printf("%d %d %d\n", obj.iNo1, obj.iNo2, obj.iNo3);

    obj.iNo2 = 20;
    printf("%d %d %d\n", obj.iNo1, obj.iNo2, obj.iNo3);

    obj.iNo3 = 30;
    printf("%d %d %d\n", obj.iNo1, obj.iNo2, obj.iNo3);

    return 0;
}

