#include <stdio.h>
#define MAX1 10
#define MAX2 10

int main(void)
{
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;

    int arr[MAX1][MAX2];

    printf("Enter 1D array count for 2D array (< %d) : ",MAX1);
    scanf("%d", &iRows);

    printf("Enter element count count for 1D array (< %d) : ", MAX2);
    scanf("%d", &iColumns);

    if (iRows > MAX1 || iColumns > MAX2)
    {
        printf("Enter valid 1D or element count");
        return -1;
    }

    printf("Enter array elements\n");
    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("Enter arr[%d][%d] : ", iCounter1, iCounter2);
            scanf("%d", &arr[iCounter1][iCounter2]);
        }
    }

    printf("Array element\n");
    for (iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for (iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("arr[%d][%d] : %d\n", iCounter1, iCounter2, arr[iCounter1][iCounter2]);
        }
    }

    return 0;
}

