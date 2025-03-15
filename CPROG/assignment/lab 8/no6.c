//6.Write a program to append user-inputted text to an existing file.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *filename = "datatype.txt"; // Specify the file name
    FILE *file;
    char input[256]; // Buffer to hold user input

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    printf("Enter text to append to %s (type 'exit' to quit):\n", filename);

    while (1) {
        // Get user input
        fgets(input, sizeof(input), stdin);

        // Check for exit condition
        if (strncmp(input, "exit", 4) == 0) {
            break; // Exit the loop if user types 'exit'
        }

        // Write the input to the file
        fputs(input, file);
    }

    // Close the file
    fclose(file);
    printf("Text appended to %s successfully.\n", filename);

    return EXIT_SUCCESS;
}