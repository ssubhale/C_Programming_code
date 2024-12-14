#include <stdio.h>
#define MAX 5

int main(void)
{
    int arr[MAX];
    int iCounter;

    for (iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("Enter value %d : ", iCounter + 1);
        scanf("%d", &arr[iCounter]);
    }

    for (iCounter = 0; iCounter < MAX; iCounter++)
        printf("Value of arr[%d] is %d\n", iCounter, arr[iCounter]);
    
    return 0;
}

