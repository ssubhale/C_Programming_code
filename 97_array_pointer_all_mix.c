#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    int *pPtr[] = {arr, arr + 1, arr + 2, arr + 3, arr + 4};

    int **ppPtr = &pPtr;

    printf("%d\t%d\t%d\n\n", arr, *arr, &arr);                                      // 7339364      10          7339364

    printf("%d\t%d\t%d\n\n", pPtr, *pPtr, **pPtr);                                  // 7339344      7339364     10

    printf("%d\t%d\t%d\n\n", ppPtr, *ppPtr, **ppPtr);                               // 7339344      7339364     10

    *ppPtr++;
    printf("%d\t%d\t%d\n\n", ppPtr - pPtr, *ppPtr - arr, **ppPtr);                  // 1        1       20

    *++ppPtr;
    printf("%d\t%d\t%d\n\n", ppPtr - pPtr, *ppPtr - arr, **ppPtr);                  // 2        2       30
    
    ++*ppPtr;
    printf("%d\t%d\t%d\n\n", ppPtr - pPtr, *ppPtr - arr, **ppPtr);                  // 2        3       40

    return 0;
}


