//4.Write a program to copy the contents of one file to another.
#include <stdio.h>
#include <stdlib.h>

void copyFile(const char *sourceFile, const char *destFile) {
    FILE *src, *dest;
    char ch;

    // Open the source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error opening source file '%s'!\n", sourceFile);
        exit(1);
    }

    // Open the destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error opening destination file '%s'!\n", destFile);
        fclose(src); // Close the source file before exiting
        exit(1);
    }

    // Copy the contents from source to destination
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("Contents copied from '%s' to '%s' successfully.\n", sourceFile, destFile);
}

int main() {
    char sourceFile[100], destFile[100];

    // Ask the user for the source and destination file names
    printf("Enter the source file name: ");
    scanf("%s", sourceFile);
    printf("Enter the destination file name: ");
    scanf("%s", destFile);

    // Call the copy function
    copyFile(sourceFile, destFile);

    return 0;
}