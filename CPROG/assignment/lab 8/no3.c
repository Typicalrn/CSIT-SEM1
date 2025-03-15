//3.Implement a program that writes an array of integers to a file and then reads the file to display the numbers.
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "numbers.txt"

void writeArrayToFile(int *arr, int size) {
    // Open the file in write mode
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    // Write the array to the file
    for (int i = 0; i < size; i++) {
        fprintf(file, "%d\n", arr[i]); // Write each integer on a new line
    }

    // Close the file
    fclose(file);
}

void readArrayFromFile() {
    // Open the file in read mode
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    // Read the integers from the file and display them
    int number;
    printf("Contents of the file '%s':\n", FILENAME);
    while (fscanf(file, "%d", &number) == 1) {
        printf("%d ", number);
    }
    printf("\n");

    // Close the file
    fclose(file);
}

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of integers to write to the file: ");
    scanf("%d", &n);

    // Declare an array of size n
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Write the array to the file
    writeArrayToFile(arr, n);

    // Read the array from the file and display it
    readArrayFromFile();

    // Free the allocated memory
    free(arr);

    return 0;
}