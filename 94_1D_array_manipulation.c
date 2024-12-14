#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    printf("%d\n", &arr);                   // 14024228

    printf("%d\n", arr);                    // 14024228

    printf("%d\n", arr[0]);                 // 10

    printf("%d\n", arr[0] + 1);             // 11

    printf("%d\n", arr + 1);                // 14024232

    printf("%d\n", &arr + 1);               // 14024248

    printf("%d\n", *arr);                   // 10

    printf("%d\n", *arr + 1);               // 11
    
    printf("%d\n", *(arr + 1));             // 20

    return 0;
}

