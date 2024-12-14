#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    int * pPtr1 = &arr[0];
    int * pPtr2 = &arr[4];

    printf("%d\n", pPtr1);
    printf("%d\n", pPtr2);

    // printf("%d\n", pPtr1 + pPtr2);               // error C2110: '+' : cannot add two pointers

    return 0;
}

