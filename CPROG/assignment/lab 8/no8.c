//8.Implement a program that reads student details (name, roll number, marks) from a file and displays them in a formatted way.
#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int rollNumber;
    float marks;
} Student;

void readStudentsFromFile(const char *filename, Student students[], int *count) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    *count = 0;
    while (fscanf(file, "%49s %d %f", students[*count].name, &students[*count].rollNumber, &students[*count].marks) == 3) {
        (*count)++;
        if (*count >= MAX_STUDENTS) {
            break; // Prevent overflow
        }
    }

    fclose(file);
}

void displayStudents(const Student students[], int count) {
    printf("\n%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-20s %-15d %-10.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }
}

int main() {
    const char *filename = "students.txt"; // Specify the file name
    Student students[MAX_STUDENTS];
    int count;

    readStudentsFromFile(filename, students, &count);
    displayStudents(students, count);

    return EXIT_SUCCESS;
}