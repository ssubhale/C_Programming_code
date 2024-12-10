#include <stdio.h>


int main(void)
{
    int iNo = 10;
    char chChar = 'A';
    float fNo = 10.00f;
    double dNo = 56.34;

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));

    printf("%d\n", sizeof(iNo));
    printf("%d\n", sizeof(chChar));
    printf("%d\n", sizeof(fNo));
    printf("%d\n", sizeof(dNo));

    printf("%d\n", sizeof(20));
    printf("%d\n", sizeof('Z'));
    printf("%d\n", sizeof(99.99f));
    printf("%d\n", sizeof(99.99));

    printf("%d\n", sizeof 20);
    printf("%d\n", sizeof iNo);
    // printf("%d\n", sizeof int);          // error

    printf("%d\n", iNo);
    printf("%d\n", sizeof(++iNo));
    printf("%d\n", iNo);

    printf("%d\n", sizeof(void));

    return 0;
}

