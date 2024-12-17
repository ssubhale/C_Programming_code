#include <stdio.h>


int main(int argc, char * argv[])
{
    int iAns;

    if (argc != 3)
    {
        printf("Invalid arguments : $program name value1 value2");
        return -1;
    }

    iAns = atoi(argv[1]) + atoi(argv[2]);
    
    printf("Addition is %d", iAns);

    return 0;
}

