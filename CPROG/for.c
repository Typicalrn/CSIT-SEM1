#include<stdio.h>

int main(){
    int sum=0,term=1,num;
    printf("Enter the number of terms you want to add:");
    scanf("%d",&num);
    for (int i=1;i<=num; i++)
    {
       sum+=term;
       term+=i;
    }
    printf("The sum of terms of terms will be %d",sum);

    return 0;
}