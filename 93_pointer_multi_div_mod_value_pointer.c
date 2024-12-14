#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    int *pPtr1 = &arr[0];
    int *pPtr2 = &arr[2];

    printf("%d\n", pPtr1);                              // 17823596
    printf("%d\n", *pPtr1);                             // 10

    printf("%d\n", pPtr2);                              // 17823604
    printf("%d\n", *pPtr2);                             // 30

    // // multiplication (pointer * value)
    // printf("%d", pPtr1 * 3);                         // error C2296: '*' : illegal, left operand has type 'int *'

    // // multiplication (pointer * pointer)
    // printf("%d", pPtr1 * pPtr2);                     // error C2296: '*' : illegal, left operand has type 'int *'
                                                        // error C2297: '*' : illegal, right operand has type 'int *'

    // // division (pointer / value)
    // printf("%d", pPtr1 / 3);                         // error C2296: '/' : illegal, left operand has type 'int *'

    // // division (pointer / pointer)
    // printf("%d", pPtr1 / pPtr2);                     // error C2296: '/' : illegal, left operand has type 'int *'
                                                        // error C2297: '/' : illegal, right operand has type 'int *'

    // // modulus (pointer % value)
    // printf("%d", pPtr1 % 3);                         // error C2296: '%' : illegal, left operand has type 'int *'

    // // modulus (pointer % pointer)
    // printf("%d", pPtr1 % pPtr2);                     // error C2296: '%' : illegal, left operand has type 'int *'
                                                        // error C2297: '%' : illegal, right operand has type 'int *'


    return 0;
}

