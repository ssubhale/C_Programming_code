#include <stdio.h>


int main(void)
{
    int iNo = 10;
    int iAns1;
    int iAns2;

    printf("%d\n", iNo);

    iAns1 = iNo++;
    printf("%d\n", iNo);
    printf("%d\n", iAns1);

    iAns2 = ++iNo;
    printf("%d\n", iNo);
    printf("%d\n", iAns2);

    printf("%d\n", ++iNo);
    printf("%d\n", iNo);

    printf("%d\n", iNo++);
    printf("%d\n", iNo);

    printf("%d\n", + +iNo);
    printf("%d\n", iNo);

    printf("%d\n", iNo + 1);
    printf("%d\n", iNo);

    // printf("%d\n", ++10);        // error
    // printf("%d\n", 10++);        // error

    return 0;
}

