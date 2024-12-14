#include <stdio.h>

struct student
{
    int iRoll;
    char chDivision;
    float fPercentage;
};

int main(void)
{
    struct student obj1;
    struct student obj2;
    struct student obj3;

    printf("Student information\n");
    printf("Enter roll number : ");
    scanf("%d", &obj1.iRoll);

    printf("Enter division : ");
    scanf("%c %c", &obj1.chDivision, &obj1.chDivision);

    printf("Enter percentage : ");
    scanf("%f", &obj1.fPercentage);

    obj2.iRoll = obj1.iRoll;
    obj2.chDivision = obj1.chDivision;
    obj2.fPercentage = obj1.fPercentage;

    obj3 = obj1;

    printf("First object : %d %c %f\n", obj1.iRoll, obj1.chDivision, obj1.fPercentage);
    printf("Second object : %d %c %f\n", obj2.iRoll, obj2.chDivision, obj2.fPercentage);
    printf("Third object : %d %c %f\n", obj3.iRoll, obj3.chDivision, obj3.fPercentage);

    return 0;
}

