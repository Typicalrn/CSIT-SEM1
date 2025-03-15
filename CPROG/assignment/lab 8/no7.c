//7.Implement a program that takes a file name as input, checks if the file exists, and displays an appropriate message.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[256]; // Buffer to hold the file name

    // Prompt the user for the file name
    printf("Enter the file name to check: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    FILE *file = fopen(filename, "r");
    
    if (file) {
        // If the file exists, close it and display a message
        fclose(file);
        printf("The file '%s' exists.\n", filename);
    } else {
        // If the file does not exist, display an error message
        printf("The file '%s' does not exist.\n", filename);
    }

    return EXIT_SUCCESS;
}