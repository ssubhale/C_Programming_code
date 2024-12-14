#include <stdio.h>
#define MAX 3

struct demo
{
    int iNo;
    float fNo;
};


int main(void)
{
    int iCounter;
    struct demo arr[MAX];

    for (iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("Enter obj %d values\n", iCounter + 1);
        printf("Enter integer value : ");
        scanf("%d", &arr[iCounter].iNo);
        printf("Enter float value : ");
        scanf("%f", &arr[iCounter].fNo);
    }

    for (iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("Obj %d values are\n", iCounter + 1);
        printf("Integer is %d\n", arr[iCounter].iNo);
        printf("Float is %f\n", arr[iCounter].fNo);
    }

    return 0;
}

