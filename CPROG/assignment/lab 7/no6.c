//6.Write a C program that dynamically allocates memory for an integer array, fills it with values, and prints them using pointers.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr; // Pointer to hold the address of the dynamically allocated array

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));
    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i); // Using pointer notation to fill the array
    }

    // Print the elements using pointer notation
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // Using pointer notation to access elements
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}