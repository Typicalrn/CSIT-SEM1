// 5.WAP to find the sum of the digit of the inputted number.

#include <stdio.h>

void main()
{
    int num, rem, ori, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    ori = num;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("The sum of digits of %d is:%d", ori, sum);
}