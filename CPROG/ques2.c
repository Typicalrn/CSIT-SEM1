//WAP to check if given number is armstrong or not
#include<stdio.h>
#include<math.h>

int main(){
    int num,rem=0,sum=0,count=0,v=1,i;
    printf("Enter a positive number:");
    scanf("%d",&num);
    int ori=num;

    while (num!=0)
    {
        num=num/10;
        count++;
    }
    num=ori;
    while(num!=0){
        v=1;
        rem=num%10;
        printf("\n rem = %d",rem);
        for(i=1;i<=count;i++){
            v= v*rem;
        }
        sum=sum + v;
        num=num/10;
    }

    if(sum!=ori){
        printf("\nThe given number is not an Armstrong Number.");
    }
    else if(sum==ori){
        printf("\nThe given number is an Armstrong Number.");
    }

    return 0;
}