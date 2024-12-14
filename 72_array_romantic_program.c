#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};

    printf("%d\n", arr);                    // 19921268

    printf("%d\n", &arr);                   // 19921268
    
    printf("%d\n", arr + 1);                // 19921272
    
    printf("%d\n", &arr + 1);               // 19921288
    
    printf("%d\n", arr[2]);                 // 30

    printf("%d\n", arr[2] + 1);             // 31

    printf("%d\n", &arr[2]);                // 19921276

    printf("%d\n", &arr[2] + 1);            // 19921288s

    printf("%d\n", arr[0]);                 // 10

    printf("%d\n", arr[0] + 1);             // 11

    printf("%d\n", &arr[0]);                // 19921268

    printf("%d\n", &arr[0] + 1);            // 19921272

    // printf("%d\n", arr++);               // error C2105: '++' needs l-value

    // printf("%d\n", ++arr);               // error C2105: '++' needs l-value

    return 0;
}

