#include <stdio.h>
#include <string.h>


int main(int argc, char * argv[], char * envp[])
{
    int iCounter;

    printf("Environment setting are : \n");

    for (iCounter = 0; envp[iCounter] != NULL; iCounter++)
        puts(envp[iCounter]);
    
    return 0;
}

