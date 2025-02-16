// 4.WAP to convert decimal number to binary number

#include <stdio.h>

void main()
{
    int dec, mul = 1, rem, bin = 0, ori_dec;
    printf("Enter a number in decimal:");
    scanf("%d", &dec);
    ori_dec = dec;
    while (dec > 0)
    {
        rem = dec % 2;
        bin += rem * mul;
        dec = dec / 2;
        mul *= 10;
    }
    printf("The binary equivalent of %d is:%d", ori_dec, bin);
}