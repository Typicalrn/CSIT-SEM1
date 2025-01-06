//accept 5 digit number and print the value of remainder after dividing by 3
#include<stdio.h>

int main(){
    int num,rem;
    printf("Enter a 5 digit number:");
    scanf("%5d",&num);

    rem=num%3;
    printf("The remainder of %d divided by 3 is %d",num,rem);

    return 0;
}