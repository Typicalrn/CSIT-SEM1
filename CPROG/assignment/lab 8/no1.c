//1.Write a C program to create a text file named data.txt and write "Hello, World!" into it.
#include <stdio.h>

int main() {
    // Open the file in write mode ("w")
    FILE *file = fopen("data.txt", "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit the program with an error code
    }

    // Write "Hello, World!" to the file
    fprintf(file, "Hello, World!\n");

    // Close the file
    fclose(file);

    printf("Data written to data.txt successfully.\n");

    return 0;
}