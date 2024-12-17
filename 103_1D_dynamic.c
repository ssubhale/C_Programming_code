#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int iCounter;
    int iNoOfElements;
    int *pPtr = NULL;

    printf("Enter element count for array : ");
    scanf("%d", &iNoOfElements);

    pPtr = (int *) malloc(iNoOfElements * sizeof(int));

    if (NULL == pPtr)
    {
        printf("Memory allocation FAILED");
        return -1;
    }

    printf("Enter array elements\n");
    for (iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        printf("Enter element %d value : ", iCounter + 1);
        scanf("%d", &pPtr[iCounter]);
    }

    printf("Array elements are\n");
    for (iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        printf("pPtr[%d] : %d\n", iCounter, pPtr[iCounter]);
    }

    if (pPtr != NULL)
    {
        free(pPtr);
        pPtr = NULL;
    }

    return 0;
}

