#include<stdio.h>

int main(){
    int num=-1,factorial=1,ori;
    
    while (num<0){
        printf("Enter any number");
        scanf("%d",&num);
        ori=num;

        if(num>0){
            while (num!=0){
                factorial=factorial*num;
                num--;
            }
            printf("the factorial of %d is %d",ori,factorial);
        }
        else{
            printf("Factorial is not possile for negative numbers");
        }
    }

    return 0;
}