#include<stdio.h>

int main(){
    int num,n1=1,n2=1,n;
    printf("Enter the numebr of terms you want to find the Fibonacci series of:");
    scanf("%d",&num);
    printf("%d,%d",n1,n2);

    for (int i =3; i <=num; i++)
    {
        n=n1+n2;
        printf(",%d",n);
        n1=n2;
        n2=n;
        
        
    }
    return 0;
}