#include <stdio.h>

int main(void)
{
    char arr[5] = {'A', 'B', 'C', 'D', 'E'};
    char * pPtr = &arr[4];

    printf("%d\n", pPtr);                   // 10353020
    printf("%c\n", * pPtr);                 // E

    printf("%d\n", pPtr - 3);               // 10353017
    printf("%d\n", *(pPtr - 3));            // 66

    printf("%d\n", pPtr);                   // 10353020
    printf("%c\n", * pPtr);                 // E

    return 0;
}

