#include <stdio.h>

// 24) void ( * p )( int, void ( * )( int ) ) )( int );

void Fun1(int);

void Fun2(int);

void (*Func(int, void (*)(int)))(int);


int main(void) {

    void (*(*pPtr)(int, void (*)(int)))(int);

    pPtr = Func;

    void (*pResult)(int) = pPtr(5, Fun1);

    pResult(10);

    return 0;
}


void Fun1(int iNo)
{
    printf("Fun1 function called : %d\n", iNo);
}

void Fun2(int iNo)
{
    printf("Fun2 function called : %d\n", iNo);
}

void (*Func(int iNo, void (*Fun1)(int)))(int)
{
    printf("Func function called : %d\n", iNo);
    Fun1(iNo);
    return Fun2;
}

