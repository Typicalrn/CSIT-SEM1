// 7.Write a function reverseString(char str[]) to reverse a given string.

#include <stdio.h>
void reverseString(char str[]);

void main()
{
    char string[30];
    int i;
    printf("Enter a string:");
    gets(string);
    reverseString(string);
}

void reverseString(char str[])
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("The reverse of string is:");
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}