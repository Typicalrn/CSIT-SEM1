//7.Create a function that takes a pointer to an integer and modifies its value inside the function.
#include <stdio.h>

// Function that modifies the value of an integer using a pointer
void modifyValue(int *ptr) {
    *ptr = 42; // Change the value to 42
}

int main() {
    int number = 10; // Initial value
    printf("Before modification: %d\n", number);

    // Call the function and pass the address of the variable
    modifyValue(&number);

    // Print the modified value
    printf("After modification: %d\n", number);

    return 0;
}