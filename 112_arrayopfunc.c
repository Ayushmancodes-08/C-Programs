//  Write a program to read and print an array of n numbers, then find out the smallest number and its
// position in the array. Perform all these operations using pointer and function.
#include <stdio.h>
void arrayop(int *arr, int n, int *smallest, int *position);
int main()
{
    int n, small, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    arrayop(arr, n, &small, &pos);
    printf("The smallest element is %d at position %d\n", small, pos + 1);
    return 0;
}
void arrayop(int *arr, int n, int *smallest, int *position)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
    printf("Array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    *smallest = *arr;
    *position = 0;
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < *smallest)
        {
            *smallest = *(arr + i);
            *position = i;
        }
    }
}