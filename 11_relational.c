#include <stdio.h>


int main(void)
{
    printf("%d\n", 10 < 20);
    printf("%d\n", 10 > 20);

    printf("%d\n", 10 <= 20);
    printf("%d\n", 10 >= 20);
    
    printf("%d\n", 10 == 20);
    printf("%d\n", 10 != 20);
    
    printf("%d\n", 10 < 20 != 1);
    printf("%d\n", 10 < 20 == 1);

    return 0;
}

