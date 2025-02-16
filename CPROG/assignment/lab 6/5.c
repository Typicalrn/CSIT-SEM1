/*5.Create a structure named "Employee" to store employee details such as employee ID, name, and salary. 
Write a program to input data for three employees, find the highest salary employee, and display their information.*/
#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    float salary;
}emps[3],rich;

void main() {
    // Input data for three employees
    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emps[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emps[i].name); // Use %[^\n] to read string with spaces
        printf("Salary: ");
        scanf("%f", &emps[i].salary);
        printf("\n");
    }
    // Initialize the first employee as the highest salary employee
    rich = emps[0];
    // Find the employee with the highest salary
    for (int i = 1; i < 3; i++) {
        if (emps[i].salary > rich.salary) {
            rich = emps[i];
        }
    }

    // Display the employee with the highest salary
    printf("Employee with the Highest Salary:\n");
    printf("Employee ID: %d\n", rich.id);
    printf("Name: %s\n", rich.name);
    printf("Salary: %.2f\n", rich.salary);
}