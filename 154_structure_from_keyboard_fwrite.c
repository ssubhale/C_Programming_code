#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char chChar = 'Y';

    struct student
    {
        char szName[50];
        int iRollNo;
        float fPercentage;
    };

    struct student obj;

    fp = fopen("student_structure.txt", "w");

    if (NULL == fp)
    {
        printf("Can't open file");
        return -1;
    }

    while (chChar == 'Y' || chChar == 'y')
    {
        printf("\nEnter name, roll number, and percentage: ");
        scanf("%s %d %f", obj.szName, &obj.iRollNo, &obj.fPercentage);
        fwrite(&obj, sizeof(obj), 1, fp);

        printf("Add another record (Y/N): ");
        scanf("%c %c", &chChar, &chChar);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}

