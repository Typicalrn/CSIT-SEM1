//5.Implement a program that takes an array of integers as input and prints its elements using pointer notation.
#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements using pointer notation
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // Using pointer notation
    }
    printf("\n");

    return 0;
}