//2.Write a C program to read and display the contents of an existing file using fgetc().
#include <stdio.h>

int main() {
    FILE *file;
    int ch;

    // Open the file "data.txt" in read mode ("r")
    file = fopen("data.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening file 'data.txt'!\n");
        return 1; // Exit the program with an error code
    }

    // Read and display the contents of the file using fgetc()
    printf("Contents of the file 'data.txt':\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Display the character
    }

    // Close the file
    fclose(file);

    return 0;
}