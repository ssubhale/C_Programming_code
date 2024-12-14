#include <stdio.h>

int main(void)
{
    int arr[3][2][4] = {10,20,30,40,50,60,70,80,90};

    printf("%d\n", arr[0]);                                 // 9435100 - 9435132
    // 3D chya 0th 2D ch nav 1D purn addr

    printf("%d\n", arr[0][0]);                              // 9435100
    // 3D chya 0th 2D chya 0th 1D ch nav 0th element cha addr

    printf("%d\n", arr[0][0][0]);                           // 10
    // 3D chya 0th 2D chya 0th 1D chya 0th element ch nav (value)

    printf("%d\n", arr[1]);                                 // 9435132 - 9435148
    // 3D chya 1st 2D ch nav 1D purn addr

    printf("%d\n", arr[1][0]);                              // 9435132
    // 3D chya 1st 2D chya 0th 1D ch nav --> 0th element cha addr

    printf("%d\n", arr[1][0][0]);                           // 90
    // 3D chya 1st 2D chya 0th 1D chya 0th element ch nav(value)

    printf("%d\n", arr[2]);                                 // 9435148 - 9435164
    // 3D chya 2nd 2D ch nav 1D purn addr

    printf("%d\n", arr[2][0]);                              // 9435148
    // 3D chya 2nd 2D chya 0th 1D nav --> 0th element cha addr

    printf("%d\n", arr[2][0][0]);                           // 0
    // 3D chya 2nd 2D chya 0th 1D chya 0th element ch nav(value)



    printf("%d\n", arr[0] + 1);                             // 9435116
    // 3D chya 0th 2D chya 1D size ne pudhe

    printf("%d\n", arr[0][0] + 1);                          // 9435104
    // 3D chya 0th 2D chya 0th 1D chya element size ne pudhe

    printf("%d\n",arr[0][0][0] + 1);                        // 11
    // 3D chya 0th 2D chya 0th 1D chya 0th element ch nav( value + 1)

    printf("%d\n", arr[1] + 1);                             // 9435148
    // 3D chya 1st 2D chya 1D size ne pudhe

    printf("%d\n", arr[1][0] + 1);                          // 9435136
    // 3D chya 1st 2D chya 0th 1D chya element size ne pudhe

    printf("%d\n", arr[1][0][0] + 1);                       // 91
    // 3D chya 1st 2D chya 0th 1D chya 0th element ch nav( value + 1)

    printf("%d\n", arr[2] + 1);                             // 9435180
    // 3D chya 2nd 2D chya 1D size ne pudhe

    printf("%d\n", arr[2][0] + 1);                          // 9435168
    // 3D chya 2nd 2D chya 0th 1D chya element size ne pudhe

    printf("%d\n", arr[2][0][0] + 1);                       // 1
    // 3D chya 2nd 2D chya 0th 1D chya 0th element ch nav( value + 1)



    printf("%d\n", &arr);                                   // 9435100 - 9435196
    // (array chya nav) purn array cha addr

    printf("%d\n", arr);                                    // 9435100 - 9435132
    // 3D ch nav purn 2D cha addr

    printf("%d\n", *arr);                                   // 9435100  (9435100 - 9435116)
    // *(3D ch nav purn 2D cha addr) tya addr value

    printf("%d\n", **arr);
    // *(*(3D ch nav purn 2D cha addr) tya addr value) addr varil value       // 9435100  (9435100 - 9435104)

    printf("%d\n", ***arr);
    // *(*(*(3D ch nav purn 2D cha addr) tya addr value) addr varil value ) value      // 10



    printf("%d\n", &arr + 1);                               // 9435196
    // 3D array size ne pudhe

    printf("%d\n", arr);                                    // 9435132
    // 2D array size ne pudhe

    printf("%d\n", *arr + 1);                               // 9435116
    // 1D size ne pudhe

    printf("%d\n", **arr + 1);                              // 9435104
    // element size ne pudhe

    printf("%d\n", ***arr + 1);                             // 11
    // value + 1



    printf("%d\n", &(**arr));                               // 9435100 - 9435116
    // (1D chya nav) purn 1D cha addr

    printf("%d\n", &(*arr));                            // 9435132
    // 2D size ne pudhe



    printf("%d\n",arr + 1);                             // 9435132
    // 2D size ne pudhe

    printf("%d\n", *(arr + 2));                         // 9435164
    // 2D size ne 2 da pudhe

    printf("%d\n", *(arr + 2) + 1);                         // 9435180
    // 2D size ne 2 da pudhe ani parat 1D size ne pudhe

    printf("%d\n", *(*(arr + 2) + 1));                         // 9435180

    printf("%d\n", *(*(arr + 2) + 1) + 3);                         // 9435184

    printf("%d\n", *(*(*(arr + 2) + 1) + 3));                         // 0
    
    
    return 0;
}
