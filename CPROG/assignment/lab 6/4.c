/*4.Define a structure named Circle to represent a circle with a radius.
 Write a C program to calculate the area and perimeter of two circles and display the results.*/
#include <stdio.h>
#define PI 3.14

struct Circle {
    float radius;
};

void main() {
    float area, perimeter;
    // Input data for two circles
    for (int i = 0; i < 2; i++) {
        printf("Enter the radius of circle %d: ", i + 1);
        scanf("%f", &circles[i].radius);
    }
    // Calculate and display area and perimeter for each circle
    for (int i = 0; i < 2; i++) {
        area = PI * circles[i].radius * circles[i].radius; // Area = π * r^2
        perimeter = 2 * PI * circles[i].radius;           // Perimeter (Circumference) = 2 * π * r   
        
        printf("\nCircle %d:\n", i + 1);
        printf("Radius: %.2f\n", circles[i].radius);
        printf("Area: %.2f\n", area);
        printf("Perimeter: %.2f\n", perimeter);
    }
}