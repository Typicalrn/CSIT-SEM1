#include<stdio.h>

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if( num%3==0 && num%5==0){
        printf("Fizz Buzz");
    }
    else if (num%5==0){
        printf("Buzz");
    }
    else if (num%3==0 ){
        printf("Fizz");
    }
    else{
        printf("Invalid Number");
    }
    
    return 0;
}