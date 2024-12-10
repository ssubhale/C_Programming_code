#include <stdio.h>


int main(void)
{
    printf("sizeof(char) : %d\n", sizeof(char));
    // printf("sizeof(short char) : %d\n", sizeof(short char));                 // NA
    // printf("sizeof(long char) : %d\n", sizeof(long char));                   // NA
    // printf("sizeof(long long char) : %d\n", sizeof(long long char));         // NA

    printf("sizeof(int) : %d\n", sizeof(int));
    printf("sizeof(short int) : %d\n", sizeof(short int));
    printf("sizeof(long int) : %d\n", sizeof(long int));
    printf("sizeof(long long int) : %d\n", sizeof(long long int));

    printf("sizeof(float) : %d\n", sizeof(float));
    // printf("sizeof(short float) : %d\n", sizeof(short float));               // NA
    // printf("sizeof(long float) : %d\n", sizeof(long float));                 // NA
    // printf("sizeof(long long float) : %d\n", sizeof(long long float));       // NA

    printf("sizeof(double) : %d\n", sizeof(double));
    // printf("sizeof(short double) : %d\n", sizeof(short double));             // NA
    printf("sizeof(long double) : %d\n", sizeof(long double));
    // printf("sizeof(long long double) : %d\n", sizeof(long long double));     // NA

    return 0;
}

