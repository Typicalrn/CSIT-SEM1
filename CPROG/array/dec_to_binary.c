#include<stdio.h>

int main(){
    int num,rem,a=0,i;
    int binary[50];

    printf("Enter a number:");
    scanf("%d",&num);
    int ori=num;

    while(num!=0){
        rem=num%2;
        binary[a]=rem;
        num/=2;
        a++;
    }
    
    printf("binary of %d is:",ori);
    for (i = a-1; i >=0; i--)
    {
        printf("%d",binary[i]);
    }

    return 0;
}