#include <stdio.h>
#include <ctype.h>

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0; // If space is encountered, we're not in a word
        } else if (!inWord) {
            inWord = 1; // Transitioning into a word
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[] = "Hello, this is a test string.";
    printf("Number of words: %d\n", countWords(str));
    return 0;
}
