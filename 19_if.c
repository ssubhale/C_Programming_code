#include <stdio.h>


int main(void)
{
    int iNo = 5;

    if (iNo < 10)
        printf("One\n");          // simple statement
        printf("Two\n");

    iNo = 15;
    if (iNo < 10)
        printf("One\n");          // simple statement
        printf("Two\n");

    iNo = 5;
    if (iNo < 10)
    {                           // compound statement
        printf("One\n");
        printf("One\n");
    }

    iNo = 15;
    if (iNo < 10)
    {                           // compound statement
        printf("One\n");
        printf("Two\n");

    }

    iNo = 15;
    if (iNo < 10);              // NULL statement
    {
        printf("One\n");
        printf("Two\n");
    }

    return 0;
}

