#include <stdio.h>
#define MAX 10

int CompareArray(int [], int [], int);

int main(void)
{
    int iCount1;
    int iCount2;
    int iCounter;
    int iAns;

    int arr1[MAX];
    int arr2[MAX];

    printf("Enter element count for first array : ");
    scanf("%d", &iCount1);

    printf("Enter element count for second array : ");
    scanf("%d", &iCount2);

    if (iCount1 > MAX || iCount2 > MAX)
    {
        printf("Please enter element count < %d", MAX);
        return 0;
    }
    else if (iCount1 != iCount2)
    {
        printf("Array 1 and Array 2 are not equal");
        return 0;
    }

    printf("\nEnter elements for first array\n");
    for (iCounter = 0; iCounter < iCount1; iCounter++)
    {
        printf("Enter element %d value : ",iCounter + 1);
        scanf("%d", &arr1[iCounter]);
    }

    printf("\nEnter elements for second array\n");
    for (iCounter = 0; iCounter < iCount2; iCounter++)
    {
        printf("Enter element %d value : ",iCounter + 1);
        scanf("%d", &arr2[iCounter]);
    }

    printf("\nElements of first array\n");
    for (iCounter = 0; iCounter < iCount1; iCounter++)
        printf("%d\t",arr1[iCounter]);

    printf("\nElements of second array\n");
    for (iCounter = 0; iCounter < iCount2; iCounter++)
        printf("%d\t",arr2[iCounter]);

    iAns = CompareArray(arr1, arr2, iCount1);

    if (iAns == 1)
        printf("\nArray 1 and Array 2 are equal");
    else
        printf("\nArray 1 and Array 2 are not equal");

    return 0;
}


int CompareArray(int arr1[], int arr2[], int iLength)
{
    int iResult;
    int iCounter;

    for (iCounter = 0; iCounter < iLength; iCounter++)
    {
        if (arr1[iCounter] == arr2[iCounter])
            iResult = 1;
    }

    return iResult;
}

