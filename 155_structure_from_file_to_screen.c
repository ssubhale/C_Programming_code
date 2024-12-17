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

    fp = fopen("student_structure.txt", "r");

    if (NULL == fp)
    {
        printf("Cant open file");
        return -1;
    }

    while (fscanf(fp, "%s %d %f", obj.szName, obj.iRollNo, obj.fPercentage) != EOF)
    // while (fread(&obj, sizeof(s), 1, fp) == 1) when structure changes
    {
        printf("%s %d %f\n", obj.szName, obj.iRollNo, obj.fPercentage);
    }
    
    fclose(fp);
    fp = NULL;

    return 0;
}

