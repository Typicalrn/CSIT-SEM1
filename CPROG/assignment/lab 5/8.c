// 8. Implement a function isArmstrong(int num) that returns 1 if the number is an Armstrong number and 0 otherwise.

#include <stdio.h>
int isArmstrong(int num);

void main()
{
    int num, is_armstrong;
    printf("Enter a number:");
    scanf("%d", &num);
    is_armstrong = isArmstrong(num);
    if (is_armstrong == 1)
    {
        printf("The number is armstrong.");
    }
    else
    {
        printf("The number is not armstrong.");
    }
}

int isArmstrong(int num)
{
    int ori, rem, count = 0, mul, i, val = 0;
    ori = num;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    num = ori;
    while (num > 0)
    {
        rem = num % 10;
        mul = 1;
        for (i = 1; i <= count; i++)
        {
            mul = mul * rem;
        }
        val += mul;
        num /= 10;
    }

    if (val == ori)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}