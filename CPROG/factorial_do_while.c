#include<stdio.h>

int main(){
    int num,fact=1;

    do
    {
        printf("Enter a positive number:");
        scanf("%d",&num);
    } while (num<=0);
    if (num>0)
    {
        do
        {
            fact*=num;
            num--;
        } while (num!=0);
        printf("%d",fact);
        
    }
    
    

    return 0;
}