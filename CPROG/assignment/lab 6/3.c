/*3.Create a structure named Book to store book details like title, author, and price. 
Write a C program to input details for three books, find the most expensive and the lowest priced books, 
and display their information.*/
#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
}books[3],expensive, cheap;

void main() {
    // Input details for three books
    for (int i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title); // Use %[^\n] to read string with spaces
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("\n");
    }

    // Initialize the first book as the most expensive and the lowest priced
    expensive=cheap = books[0];

    // Find the most expensive and the lowest priced books
    for (int i = 1; i < 3; i++) {
        if (books[i].price > expensive.price) {
            expensive = books[i];
        }
        if (books[i].price < cheap.price) {
            cheap = books[i];
        }
    }

    // Display the most expensive book
    printf("Most Expensive Book:\n");
    printf("Title: %s\n", expensive.title);
    printf("Author: %s\n", expensive.author);
    printf("Price: %.2f\n\n", expensive.price);

    // Display the lowest priced book
    printf("Lowest Priced Book:\n");
    printf("Title: %s\n", cheap.title);
    printf("Author: %s\n", cheap.author);
    printf("Price: %.2f\n", cheap.price);
}