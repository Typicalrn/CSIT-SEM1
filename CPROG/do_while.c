#include<stdio.h>

int main(){
    int n=12345,count=0;

    while (n!=0)
    {
        n/=10;
        count++;
    }
    printf("%d",count);
    printf("\n");

    n=12345,count=0;
    do
    {
        n/=10;
        count++;
    } while (n!=0);
    printf("%d",count);
    
    

    return 0;
}