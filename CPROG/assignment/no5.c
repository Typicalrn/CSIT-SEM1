//accept 2 numbers,if 1st num is greater than 2nd then print sum of these two numbers,otherwise print their difference. write this program using ternary operator
#include<stdio.h>

    int main(){
    int n1,n2, sum, diff;
    printf("Enetr first number then second number:");
    scanf("%d %d", &n1, &n2);
    sum = n1 + n2;
    diff = n1 - n2;
    (n1 > n2)? printf("sum of two nuumber:%d",sum):printf("difference of two number:%d", diff);

    return 0;
}