// 9.Write a function reverseArray(int arr[], int size) that reverses the elements of an array.
#include <stdio.h>
void reverseArray(int arr[], int size){
    int i, b, first = 0, last = size - 1;
    while (first < last)
    {
        b = arr[first];
        arr[first] = arr[last];
        arr[last] = b;
        first++;
        last--;
    }
    printf("\nThe reverse of array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void main(){
    int i, arr[10];
    printf("Enter 10 elements of an array:");
    for (i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    printf("The original array is:\n");
    for (i = 0; i < 10; i++){
        printf("%d\t", arr[i]);
    }
    reverseArray(arr, 10);
}

