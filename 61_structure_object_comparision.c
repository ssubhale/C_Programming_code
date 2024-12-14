#include <stdio.h>

struct student
{
    int iRoll;
    char chDivision;
    float fPercentage;
};

int Compare(struct student obj1, struct student obj2);

int main(void)
{
    struct student obj1;
    struct student obj2;
    int iAns;

    printf("Information of first student\n");
    printf("Enter roll number : ");
    scanf("%d", &obj1.iRoll);

    printf("Enter division : ");
    scanf("%c %c", &obj1.chDivision, &obj1.chDivision);

    printf("Enter percentage : ");
    scanf("%f", &obj1.fPercentage);

    printf("\nInformation of second student\n");
    printf("Enter roll number : ");
    scanf("%d", &obj2.iRoll);

    printf("Enter division : ");
    scanf("%c %c", &obj2.chDivision, &obj2.chDivision);

    printf("Enter percentage : ");
    scanf("%f", &obj2.fPercentage);

    iAns = Compare(obj1, obj2);

    if (iAns == 1)
    {
        printf("Objects are same");
    }
    else
    {
        printf("Objects are differnt");
    }

    return 0;
}

int Compare(struct student obj1, struct student obj2)
{
    if ((obj1.iRoll == obj2.iRoll) && (obj1.chDivision == obj2.chDivision) && (obj1.fPercentage == obj2.fPercentage))
        return 1;
    else
        return 0;
}

