//WAP to find sum of digits of number given by the user
#include<stdio.h>
 int main(){
    int sum=0,num,rem=0;
    
    printf("Enter the number you want to add the digis of?:");
    scanf("%d",&num);
    
    while (num!=0){
      rem=num%10;
      sum+=rem;
      num/=10;
    }
    printf("%d is the sum of digits",sum);

    return 0;
 }