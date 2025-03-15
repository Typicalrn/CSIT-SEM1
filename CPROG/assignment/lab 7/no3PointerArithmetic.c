//3.Write a program to demonstrate pointer arithmetic by incrementing and decrementing a pointer.
#include <stdio.h>

int main() {
    // Initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Declare a pointer and point it to the first element of the array
    int *ptr = arr;

    // Print the original array using pointer arithmetic
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *(ptr + i)); // Incrementing pointer
    }

    // Demonstrate incrementing the pointer
    printf("\nIncrementing the pointer:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *ptr); // Access the current element
        ptr++; // Increment the pointer to point to the next element
    }

    // Reset the pointer to the beginning of the array
    ptr = arr;

    // Demonstrate decrementing the pointer
    printf("\nDecrementing the pointer:\n");
    for (int i = 0; i < size; i++) {
        // Move the pointer to the end of the array first
        ptr = arr + size; // Point to one past the last element
        ptr--; // Decrement to point to the last element
        printf("Element %d: %d\n", size - 1 - i, *ptr); // Access the current element
        ptr--; // Decrement the pointer to point to the previous element
    }

    return 0;
}