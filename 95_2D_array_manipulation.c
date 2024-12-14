#include <stdio.h>

int main(void)
{
    int arr[3][4] = {10,20,30,40,50,60,70,80,90};

    printf("%d\n", &arr);                       // 10943110 - 10943158
    // &(2D chya nav) purn 2D cha addr

    printf("%d\n", arr);                        // 10943110 - 10943114
    // 2D ch nav 0th element cha addr --> 0th 1D cha addr

    printf("%d\n", arr[0]);                     // 10943110
    // 2D 0th element nav --> 0th 1D ch nav --> 1D nav 0th element addr

    printf("%d\n", arr[0][0]);                  // 10
    // 2D chya 0th 1D chya 0th element ch nav(value)



    printf("%d\n", &arr + 1);                   // 10943158
    // 2D size ne pudhe

    printf("%d\n", arr + 1);                    // 10943126
    // 1D size ne pudhe

    printf("%d\n", arr[0] + 1);                 // 10943126
    // 2D chya 0th 1D size ne pudhe

    printf("%d\n", arr[0][0] + 1);              // 11
    // 2D chya 0th 1D chya 0th element nav(value + 1)



    printf("%d\n", &arr[0]);                    // 10943110 - 10943126
    // &(2D 0th 1D ch nav) purn 0th 1D cha addr

    printf("%d\n", &arr[0] + 1);                // 10943126
    // 1D size ne pudhe

    printf("%d\n", &arr[0][0]);                 // 10943110 - 10943114
    // &(2D chya 0th 1D chya 0th element ch nav) 1D chya 0th element cha purn addr

    printf("%d\n", &arr[0][0] + 1);             // 10943114
    // &(2D chya 0th 1D chya 0th element ch nav) 1D chya 0th element cha purn addr + 1 (element size ne pudhe)



    printf("%d\n", arr[1]);                     // 10943126 - 10943130
    // 2D chya 1st 1D ch nav --> 1D 0th element cha addr

    printf("%d\n", arr[1][0]);                  // 50
    // 2D chya 1st 1D chya 0th element ch nav(value)

    printf("%d\n", arr[1] + 1);                 // 10943130
    // 2D chya 1st 1D ch nav --> 1D 0th element cha addr element size ne pudhe

    printf("%d\n", arr[1][0] + 1);              // 51
    // value + 1



    printf("%d\n", arr[2]);                     // 10943142
    // 2D chya 2nd 1D ch nav --> 0th element addr

    printf("%d\n", arr[2][0]);                  // 90
    // 2D chya 2nd 1D chya 0th element ch nav(value)

    printf("%d\n", arr[2] + 1);                     // 10943146
    // 2D chya 2nd 1D chya element size ne pudhe

    printf("%d\n", arr[2][0]+1);                // 91
    // value + 1


    
    printf("%d\n", &arr[2]);                    // 10943142 - 10943158
    // &(2D chya 2nd 1D ch nav) purn 1D cha addr

    printf("%d\n", &arr[2][0]);                 // 10943142 - 10943146
    // &(2D chya 2nd 1D chya 0th element ch nav) element ch addr

    printf("%d\n", &arr[2] + 1);                // 10943158
    // 2D chya 2nd 1D size ne pudhe

    printf("%d\n", &arr[2][0] + 1);             // 10943146
    // 2D chya 2nd 1D chya 0th element size ne pudhe



    printf("%d\n", *arr);                       // 10943110
    // 2D chya navala * (1D nav 0th element cha addr)

    printf("%d\n", **arr);                      // 10
    // 2D chya navala * * (1D nav 0th element cha addr) value

    printf("%d\n", *arr + 1);                   // 10943114
    // element size ne pudhe

    printf("%d\n", **arr + 1);                  // 11
    // 2D chya navala * * (1D nav 0th element cha addr) value + 1



    printf("%d\n", arr + 2);                    // 10943142
    // 2D chya 1D size ne 2 veles pudhe

    printf("%d\n",*(arr + 2));                  // 10943142
    // *(2D chya 1D size ne 2 veles pudhe)

    printf("%d\n", *(arr + 2) + 3);             // 10943154
    // *(2D chya 1D size ne 2 veles pudhe) pasun 3 da element size ne pudhe

    printf("%d\n", *(*(arr + 2) + 3));          // 0
    // *(*(2D chya 1D size ne 2 veles pudhe) pasun 3 da element size ne pudhe) addr varil value


    return 0;
}

