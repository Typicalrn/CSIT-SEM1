/*2.Define a structure named Time with members hours, minutes, and seconds.
Write a C program to input two times, add them, and display the result in proper time format.*/
#include <stdio.h>

struct Time {
    int hours,minutes,seconds;
}t[2], result;

void main() {
    // Input first time
    for (int i = 0; i < 2; i++)
    {
        printf("Enter %d st time:\n",i+1);
        printf("Hours: ");
        scanf("%d", &t[i].hours);
        printf("Minutes: ");
        scanf("%d", &t[i].minutes);
        printf("Seconds: ");
        scanf("%d", &t[i].seconds);
    }
    // Adding the times
    result.seconds = t[0].seconds + t[1].seconds;
    result.minutes = t[0].minutes + t[1].minutes + (result.seconds / 60);
    result.seconds %= 60; // Keep seconds less than 60

    result.hours = t[0].hours + t[1].hours + (result.minutes / 60);
    result.minutes %= 60; // Keep minutes less than 60

    // Display the result
    printf("Resulting time: %d hours, %d minutes, %d seconds\n", 
           result.hours, result.minutes, result.seconds);
}