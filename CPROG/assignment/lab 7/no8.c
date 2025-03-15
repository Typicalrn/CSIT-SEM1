//8.Write a C program to reverse an array using pointers.
#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *start = arr;          // Pointer to the start of the array
    int *end = arr + n - 1;   // Pointer to the end of the array
    int temp;

    // Swap elements from start to end until the pointers meet
    while (start < end) {
        // Swap the values
        temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int n, i;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    reverseArray(arr, n);

    // Print the reversed array
    printf("The reversed array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // Using pointer notation to access elements
    }
    printf("\n");

    return 0;
}