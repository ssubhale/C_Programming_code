#include <stdio.h>


int main(void)
{
    printf("signed int in decimal (10) : %d\n", 10);
    printf("signed int (10) : %i\n", 10);
    printf("unsigned int in decimal (10) : %d\n", 10);
    printf("signed int in decimal (-10) : %d\n", -10);
    printf("unsigned int in decimal (-10) : %u\n", -10);

    printf("unsigned int in ocatal (10) : %o\n", 10);
    printf("unsigned int in hex small (10) : %x\n", 10);
    printf("unsigned int in hex capital (10) : %X\n", 10);

    printf("012 : %d\n",012);
    printf("0X0A : %d\n", 0X0A);

    printf("character (65) : %c\n",65);

    printf("signed long (10) : %ld\n", 10);
    printf("signed short (10) : %hd\n", 10);

    printf("unsigned long (10) : %lu\n", 10);
    printf("unsigned short (10) : %hu\n", 10);

    printf("signed float (10) : %f\n", 10.00);
    printf("signed float in exponent small(e) (10) : %e\n", 10.00);
    printf("signed float in exponent capital(E) (10) : %E\n", 10.00);

    printf("signed either e or f (10) : %g\n", 10.00);
    printf("signed either E or F (10) : %G\n", 10.00);

    printf("signed double (10) : %lf\n", 10.00);

    printf("string char array / char pointer (10) : %s\n", 10.00);

    printf("pointer / address (10) : %p\n", 10);

    return 0;
}

