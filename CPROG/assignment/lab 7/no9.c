//9.Implement a function that takes an array and its size as parameters and returns the sum of elements using pointers.
#include <stdio.h>
// Function to calculate the sum of elements in an array using pointers
int sumArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Accessing elements using pointer notation
    }
    return sum;
}

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the array elements
    int total = sumArray(arr, n);

    // Print the sum
    printf("The sum of the array elements is: %d\n", total);

    return 0;
}