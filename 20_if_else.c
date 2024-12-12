#include <stdio.h>


int main(void)
{
    int iNo = 5;

    if (iNo < 10)
        printf("One\n");
    else
        printf("Two\n");

    iNo = 15;
    if (iNo < 10)
        printf("One\n");
    else
        printf("Two\n");

    iNo = 5;
    if (iNo < 10)
        printf("One\n");              // simple statement
        // printf("Two\n");           // error
    else
        printf("Three\n");

    iNo = 5;
    if (iNo < 10)
    {                               // compound statement
        printf("One\n");
        printf("Two\n");
    }
    else
        printf("Three\n");

    iNo = 5;
    if (iNo < 10);                  // NULL statement
    // {                            // error
    //     printf("One\n");
    //     printf("Two\n");
    // }
    else
        printf("Three\n");


    return 0;
}

