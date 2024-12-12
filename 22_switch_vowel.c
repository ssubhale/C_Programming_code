#include <stdio.h>


int main(void)
{
    char chChar;

    printf("Enter letter to check its vowel or not : ");
    scanf("%c", &chChar);

    switch(chChar)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is capital letter vowel", chChar);
            break;

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is small letter vowel", chChar);
            break;

        default:
            printf("Enter another choice");
    }

    return 0;
}

