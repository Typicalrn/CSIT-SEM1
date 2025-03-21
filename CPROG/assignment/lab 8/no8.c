//8.Implement a program that reads student details (name, roll number, marks) from a file and displays them in a formatted way.
#include <stdio.h>
#include <stdlib.h>

#define MAX_STDS 100
#define NAME_LENGTH 50

// Define a struct to represent a student
struct Student {
char name[NAME_LENGTH];
int roll;
float marks;
};

// Function to read student details from a file
void read(const char *filename, struct Student students[], int *count) {
FILE *file = fopen(filename, "r");
if (file == NULL) {
perror("Error opening file");
exit(EXIT_FAILURE);
}

*count = 0;
while (fscanf(file, "%49s %d %f", students[*count].name, &students[*count].roll, &students[*count].marks) == 3) {
(*count)++;
if (*count >= MAX_STDS) {
break; // Prevent overflow
}
}

fclose(file);
}

// Function to display student details
void display(const struct Student students[], int count) {
printf("\n%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
printf("---------------------------------------------------\n");
for (int i = 0; i < count; i++) {
]
}
}

int main() {
const char *filename = "students.txt"; // Specify the file name
struct Student students[MAX_STDS];
int count;

// Read student details from the file
read(filename, students, &count);

// Display student details
display(students, count);

return EXIT_SUCCESS;
}