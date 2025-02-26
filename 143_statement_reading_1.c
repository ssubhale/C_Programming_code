#include <stdio.h>

// 23) void * ( * p )( double, int ( * )( ) );

int Fun1(void);
void *Fun2(double d, int (*)());
int *Fun3(void *(*)(void));
void *Fun4(void);


int main(void)
{
    void *(*pPtr1)(double, int (*)());

    pPtr1 = Fun2; 

    void *pPtr2 = pPtr1(3.14, Fun1);
    
    printf("Returned value: %d\n", *(int *)pPtr2);

    return 0;
}

int Fun1(void)
{
    return 42;
}

void *Fun2(double d, int (*Func)())
{
    static int value = 50;
    printf("Received double: %lf\n", d);
    printf("Function pointer called, result: %d\n", Func());
    return &value;
}

int *Fun3(void *(*Func)(void))
{
    static int num = 10;
    printf("Fun3 called\n");
    return &num;
}

void *Fun4(void)
{
    static int data = 100;
    printf("Fun4 called\n");
    return &data;
}

