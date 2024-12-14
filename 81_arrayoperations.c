// Write a program that will accept an array, and find the largest number, smallest number, sum of
// the elements and average of the elements present in the array.
#include <stdio.h>
int main()
{
    int n, i, sum = 0, large, small;
    float avg;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array\n", n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    large = small = arr[0];
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (arr[i] > large)
            large = arr[i];
        if (arr[i] < small)
            small = arr[i];
    }
    avg = sum / n;
    printf("The Largest number in Array is %d\n", large);
    printf("The Smallest number in Array is %d\n", small);
    printf("The Sum of elements in Array is %d\n", sum);
    printf("The Average of elements in Array is %f", avg);
    return 0;
}