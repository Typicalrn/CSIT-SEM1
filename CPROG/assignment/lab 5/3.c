// 3.Program to print all prime numbers less than 100.

#include <stdio.h>

void main()
{
    int i, j, c;
    printf("Prime numbers upto 100 are:\n");
    for (i = 2; i <= 100; i++)
    {
        c = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 0)
        {
            printf("%d\t", i);
        }
    }
}