#include <stdio.h>


int main(void)
{
    switch (2)
    {
        case 1:
            printf("One");

        case 2:
            printf("Two");

        case 3:
            printf("Three");
    }

    switch (3)
    {
        case 1:
            printf("One");

        case 2:
            printf("Two");

        case 3:
            printf("Three");
    }

    switch (5)
    {
        case 1:
            printf("One");

        case 2:
            printf("Two");

        case 3:
            printf("Three");

        default:
            printf("Default");
    }

    switch (5)
    {
        case 1:
            printf("One");

        case 2:
            printf("Two");

        case 3:
            printf("Three");

        default:
            printf("Default");
        
        case 4:
            printf("Four");
    }

    switch (5)
    {
        case 1:
            printf("One");

        case 2:
            printf("Two");

        case 3:
            printf("Three");
    }

    return 0;
}

