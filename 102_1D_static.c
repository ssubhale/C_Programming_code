#include <stdio.h>
#define MAX 10

int main(void)
{
    int arr[MAX];
    int iNoOfElements;
    int iCounter;

    printf("Enter elements count ( < %d ) : ", MAX);
    scanf("%d", &iNoOfElements);

    if (iNoOfElements > MAX)
    {
        printf("Please enter valid element count");
        return -1;
    }

    printf("Enter elements values for array\n");
    for (iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        printf("Enter %d value : ", iCounter + 1);
        scanf("%d", &arr[iCounter]);
    }

    printf("\nEnter elements values in array\n");
    for (iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        printf("Element %d value : %d\n",iCounter + 1, arr[iCounter]);
    }

    return 0;
}

