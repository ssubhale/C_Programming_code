#include <stdio.h>
#define MAX1 10
#define MAX2 10
#define MAX3 10

int main(void)
{
    int iPlanes;
    int iRows;
    int iColumns;

    int iCounter1;
    int iCounter2;
    int iCounter3;

    int arr[MAX1][MAX2][MAX3];

    printf("Enter 2D array count for 3D array (< %d) : ",MAX1);
    scanf("%d", &iPlanes);

    printf("Enter 1D array count for 2D array (< %d) : ", MAX2);
    scanf("%d", &iRows);

    printf("Enter element count for 1D array (< %d) : ", MAX3);
    scanf("%d", &iColumns);

    if (iPlanes > MAX1 || iRows > MAX2 || iColumns > MAX3)
    {
        printf("Enter valid 2D, 1D, or element count");
        return -1;
    }

    printf("Enter array element\n");
    for (iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("Enter arr[%d][%d][%d] : ", iCounter1, iCounter2, iCounter3);
                scanf("%d", &arr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    printf("Array elements\n");
    for (iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for (iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("arr[%d][%d][%d] : %d\n", iCounter1, iCounter2, iCounter3, arr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    return 0;
}

