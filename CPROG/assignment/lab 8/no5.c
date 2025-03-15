//5.Create a C program to count the number of characters, words, and lines in a file.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void countFileContents(const char *filename, int *charCount, int *wordCount, int *lineCount) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int c;
    int inWord = 0;

    *charCount = 0;
    *wordCount = 0;
    *lineCount = 0;

    while ((c = fgetc(file)) != EOF) {
        (*charCount)++;

        if (c == '\n') {
            (*lineCount)++;
        }

        if (isspace(c)) {
            inWord = 0; // We are not in a word anymore
        } else {
            if (inWord == 0) {
                inWord = 1; // We found the start of a new word
                (*wordCount)++;
            }
        }
    }

    // If the file does not end with a newline, we need to count the last line
    if (*charCount > 0 && c != '\n') {
        (*lineCount)++;
    }

    fclose(file);
}

int main() {
    const char *filename = "datatype.txt"; // Specify the file name
    int charCount, wordCount, lineCount;

    countFileContents(filename, &charCount, &wordCount, &lineCount);

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    return EXIT_SUCCESS;
}