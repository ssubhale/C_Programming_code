#include <stdio.h>


int main(void)
{        
    char chChar1 = 'A';
    char chChar2 = 65;              // allowed

    int iNo1 = 65;
    int iNo2 = 'A';                 // allowed

    char chChar3 = ',';
    char chChar4 = '!';

    printf("chChar1 in char format : %c\n", chChar1);               // A
    printf("chChar1 in int format : %d\n", chChar1);                // 65

    printf("chChar2 in char format : %c\n", chChar2);               // A
    printf("chChar2 in int format : %d\n", chChar2);                // 65

    printf("iNo1 in char format : %c\n", iNo1);                     // A
    printf("iNo1 in int format : %d\n", iNo1);                      // 65

    printf("iNo2 in char format : %c\n", iNo2);                     // A
    printf("iNo2 in int format : %d\n", iNo2);                      // 65
    
    printf("chChar3 + chChar4 in char format %c\n", chChar3 + chChar4);             // M
    printf("chChar3 + chChar4 in int format %d\n", chChar3 + chChar4);              // 77
    
    return 0;
}