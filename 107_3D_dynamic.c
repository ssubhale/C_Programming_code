#include <stdio.h>
#include <malloc.h>

int main(void)
{
    int iPlane;
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;
    int iCounter3;
    int ***pppPtr = NULL;

    printf("Enter 2D array count for 3D array : ");
    scanf("%d", &iPlane);

    printf("Enter 1D array count for each 2D array : ");
    scanf("%d", &iRows);

    printf("Enter element count for each 1D array : ");
    scanf("%d", &iColumns);

    pppPtr = (int ***) malloc(iPlane * sizeof(int **));

    if (NULL == pppPtr)
    {
        printf("Memory allocation FAILED");
        return -1;
    }

    for (iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
    {
        pppPtr[iCounter1] = (int **) malloc(iRows * sizeof(int *));
        if (NULL == pppPtr[iCounter1])
        {
            printf("Memory allocation FAILED");
            return -1;
        }
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            pppPtr[iCounter1][iCounter2] = (int *) malloc(iColumns * sizeof(int));
            if (NULL == pppPtr[iCounter1][iCounter2])
            {
                printf("Memory allocation FAILED");
                return -1;
            }
            printf("\n");
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("Enter plane %d row %d column %d value : ", iCounter1, iCounter2, iCounter3);
                scanf("%d", &pppPtr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    printf("\n3D array elements\n");
    for (iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            printf("\n");
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("arr[%d][%d][%d] : %d\n", iCounter1, iCounter2, iCounter3, pppPtr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    if (pppPtr != NULL)
    {
        for (iCounter1 = 0; iCounter1 < iPlane; iCounter1++)
        {
            if (pppPtr[iCounter1] != NULL)
            {
                for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
                {
                    if (pppPtr[iCounter1][iCounter2] != NULL)
                    {
                        free(pppPtr[iCounter1][iCounter2]);
                        pppPtr[iCounter1][iCounter2] = NULL;
                    }
                }
                free(pppPtr[iCounter1]);
                pppPtr[iCounter1] = NULL;
            }
        }
        free(pppPtr);
        pppPtr = NULL;
    }

    return 0;
}

