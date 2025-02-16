// 2.WAP to find whether the number is prime or not.

#include <stdio.h>

void main()
{
    int num, i, c = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            c++;
        }
    }
    if (c == 0)
    {
        printf("%d is prime.", num);
    }
    else
    {
        printf("%d is not prime.", num);
    }
}