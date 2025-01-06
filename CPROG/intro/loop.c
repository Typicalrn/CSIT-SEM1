#include<stdio.h>

int main(){
    int i =1;
    printf("Done using whle loop\n");
    while(i<=10){
        printf("%d\t",i);
        i+=1;
    }
    printf("\nDone using do while loop\n");
    i=10;
    do
    {
        printf("%d\t",i);
        i-=1;
    } while (i>=1);

    return 0;
}