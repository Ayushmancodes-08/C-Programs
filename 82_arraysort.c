//  Write program that will accept an array and sort the array in ascending order. Display both the
// unsorted and unsorted arrays.
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array\n", n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Unsorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nsorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}