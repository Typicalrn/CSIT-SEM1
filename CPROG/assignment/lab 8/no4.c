//4.Write a program to copy the contents of one file to another.
#include <stdio.h>
#include <stdlib.h>

void copyFile(const char *src, const char *dest) {
    FILE *src,*dest;
    char ch;
    // Open the source file in read mode
    src = fopen(src, "r");
    if (src == NULL) {
        printf("Error!\n");
        exit(1);
    }
    // Open the destination file in write mode
    dest = fopen(dest, "w");
    if (dest == NULL) {
        printf("Error!\n");
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
    printf("Contents copied from '%s' to '%s' successfully.\n", src, dest);
}

int main() {
    char src[100], dest[100];
    // Ask the user for the source and destination file names
    printf("Enter the source file name: ");
    scanf("%s", src);
    printf("Enter the destination file name: ");
    scanf("%s", dest);
    // Call the copy function
    copyFile(src, dest);
    return 0;
}