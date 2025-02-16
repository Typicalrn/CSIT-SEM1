/*6.Define a structure named "Date" with members day, month, and year. 
Write a C program to input two dates and find the difference in days between them*/
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
}date1, date2;
// Function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
// Function to calculate the number of days in a month
int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}
// Function to convert a date to the number of days since 1/1/0001
long convertToDays(struct Date date) {
    long totalDays = 0;
    // Count the days for the years
    for (int y = 1; y < date.year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    // Count the days for the months of the current year
    for (int m = 1; m < date.month; m++) {
        totalDays += daysInMonth(m, date.year);
    }
    // Add the days of the current month
    totalDays += date.day;

    return totalDays;
}
void main() {
    // Input two dates
    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    // Convert both dates to days
    long days1 = convertToDays(date1);
    long days2 = convertToDays(date2);
    // Calculate the difference in days
    long difference = days2 - days1;
    // Output the result
    printf("Difference in days: %ld\n", difference < 0 ? -difference : difference);
}