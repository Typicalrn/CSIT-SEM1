/*1.Create a structure called "Student" with members name, age, and total marks. 
Write a C program to input data for two students, display their information, and find the average of total marks.*/
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
}students[2];

void main() {
    float avg;
    // Input data for two students
    for (int i = 0; i < 2; i++) {
        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Total Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }
    // Display information of students
    printf("Student Information:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Total Marks: %.2f\n\n", students[i].marks);
    }
    // Calculate avg of total marks
    avg = (students[0].marks + students[1].marks) / 2;
    // Display avg
    printf("Average of total marks: %.2f\n", avg);
}