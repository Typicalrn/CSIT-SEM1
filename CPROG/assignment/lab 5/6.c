// 6.Create a function findMax(int arr[], int size) that takes an array and returns the maximum element.
#include <stdio.h>
int findMax(int arr[], int size);

void main()
{
    int arr[10], i, max;
    printf("Enter 10 elements of array:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = findMax(arr, 10);
    printf("The max element is %d", max);
}

int findMax(int arr[], int size)
{
    int max = arr[0], i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}