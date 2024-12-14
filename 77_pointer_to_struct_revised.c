#include <stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void Scan(struct demo *);
void Print(const struct demo *);

int main(void)
{
    struct demo obj;

    Scan(&obj);
    Print(&obj);

    return 0;
}

void Scan(struct demo *pPtr)
{
    printf("Enter integer : ");
    scanf("%d", &pPtr -> iNo);
    printf("Enter float : ");
    scanf("%f", &pPtr -> fNo);
}

void Print(const struct demo *pPtr)
{
    printf("Integer value is : %d\n", pPtr -> iNo);
    printf("Float value is : %f\n", pPtr -> fNo);
}

