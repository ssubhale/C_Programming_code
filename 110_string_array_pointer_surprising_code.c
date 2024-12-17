#include <stdio.h>
#include <string.h>

void Fun(char []);

int main(void)
{
    Fun("Hello");

    return 0;
}

void Fun(char szStr[])
{
    printf("%c\n", szStr[3]);

    szStr = "Bye";

    printf("%s", szStr);

    // जेव्हा जेव्हा formal parameter हा array syntax ने असतो तेव्हा तेव्हा तो array नसून pointer असतो.

}

