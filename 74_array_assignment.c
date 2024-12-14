#include <Stdio.h>
#define MAX 10

void ArrayAssignment(int [], int [], int);

int main(void)
{
    int iCount;
    int iCounter;

    int arr1[MAX];
    int arr2[MAX];

    printf("Enter element count for array (< %d) : ", MAX);
    scanf("%d", &iCount);

    if (iCount > MAX)
    {
        printf("Please element count < %d", MAX);
        return 0;
    }

    printf("\nEnter elements for array\n");
    for (iCounter = 0; iCounter < iCount; iCounter++)
    {
        printf("Enter element %d value : ", iCounter + 1);
        scanf("%d", &arr1[iCounter]);
    }

    printf("\nElements of first array\n");
    for (iCounter = 0; iCounter < iCount; iCounter++)
        printf("%d\t", arr1[iCounter]);

    ArrayAssignment(arr1, arr2, iCount);

    printf("\nElements of second array\n");
    for (iCounter = 0; iCounter < iCount; iCounter++)
        printf("%d\t", arr2[iCounter]);

    return 0;
}


void ArrayAssignment(int arr1[], int arr2[], int iLength)
{
    int iCounter;

    for (iCounter = 0; iCounter < iLength; iCounter++)
    {
        arr2[iCounter] = arr1[iCounter];
    }
}