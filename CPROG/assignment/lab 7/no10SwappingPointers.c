//10.Create a C program that swaps two pointers instead of swapping values.
#include <stdio.h>

void swapPointers(int **ptr1, int **ptr2) {
    int *temp = *ptr1; // Temporary pointer to hold the address of the first pointer
    *ptr1 = *ptr2;     // Swap the pointers
    *ptr2 = temp;      // Assign the temporary pointer to the second pointer
}

int main() {
    int a = 10,b = 20;

    // Create pointers to the variables
    int *ptrA = &a,*ptrB = &b;

    // Print original pointers and their values
    printf("Before swapping:\n");
    printf("ptrA points to value: %d\n", *ptrA);
    printf("ptrB points to value: %d\n", *ptrB);

    // Swap the pointers
    swapPointers(&ptrA, &ptrB);

    // Print pointers and their values after swapping
    printf("\nAfter swapping:\n");
    printf("ptrA points to value: %d\n", *ptrA);
    printf("ptrB points to value: %d\n", *ptrB);

    return 0;
}