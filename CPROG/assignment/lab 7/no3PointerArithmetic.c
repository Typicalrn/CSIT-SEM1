 //3.Write a program to demonstrate pointer arithmetic by incrementing and decrementing a pointer.
 #include <stdio.h>

 int main() {
 // Declare and initialize an array of integers
 int arr[] = {10, 20, 30, 40, 50};
 int *ptr = arr; // Pointer pointing to the first element of the array
 int i;
 
 printf("Array elements are:\n");
 
 // Displaying array elements using pointer arithmetic
 for (i = 0; i < 5; i++) {
 printf("Value at arr[%d] = %d\n", i, *(ptr + i));
 }
 
 // Increment the pointer to point to the next element
 ptr++; // Pointing to second element
 printf("After incrementing the pointer:\n");
 printf("Value at ptr (now pointing to arr[1]) = %d\n", *ptr);

 // Decrement the pointer to point back to the first element
 ptr--; // Pointing back to first element
 printf("After decrementing the pointer back:\n");
 printf("Value at ptr (now pointing back to arr[0]) = %d\n", *ptr);
 
 return 0;
 }