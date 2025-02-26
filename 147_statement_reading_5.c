#include <stdio.h>
#include <malloc.h>

// 27) void * * ( * ( * p )[3] )( void ( * ( * )[3])( void ) ) );


void **Fun1(void (*(*)[3])(void));
void Fun2(void);


int main(void)
{
    int iCounter;

    void  **ppResult = NULL;

    void **(*(*pPtr1)[3])(void (*(*)[3])(void)) = NULL;

    void (*arr[3])(void) = {Fun2, Fun2, Fun2};

    pPtr1 = (void **(*(*)[3])(void (*(*)[3])(void)))malloc(3 * sizeof(void **(*)(void (*(*)[3])(void))));

    if (NULL == pPtr1)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    (*pPtr1)[0] = Fun1;
    (*pPtr1)[1] = Fun1;
    (*pPtr1)[2] = Fun1;

    ppResult = (*pPtr1)[0](&arr);

    void (*(*pPtr2)[3])(void) = (void (*(*)[3])(void))ppResult[0];

    for (iCounter = 0; iCounter < 3; iCounter++)
        (*pPtr2)[iCounter]();

    free(pPtr1);

    return 0;
}

void Fun2(void)
{
    printf("\nFun2 called");
}

void **Fun1(void (*(*arr)[3])(void))
{
    printf("\nFun1 called");

    static void *pPtr;
    pPtr = (void *)arr;

    return &pPtr;
}


