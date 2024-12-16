// Write a program that will insert an ele at a desired pos of an array. Show the array before
// insertion and after insertion of the new element (Array, ele and position will provided by the
// user)
#include <stdio.h>

int main()
{
    int n, ele, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to insert: ");
    scanf("%d", &ele);
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
