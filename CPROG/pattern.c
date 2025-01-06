#include<stdio.h>

int main(){
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    printf("\n------------------------------------------------------------------------------------\n");
    for (int i=1; i<=5; i++)
    {
        for (int j=5; j>=i; j--)
        {
            printf("\t");
        }
        for (int k=1; k<=(2*i-1); k++)
        {
            printf("\t*");
        }
        printf("\n");
    }
    printf("\n------------------------------------------------------------------------------------\n");
    int n=0;
    for (int i=1; i<=5; i++)
    {
        for (int j=4; j>=i; j--)
        {
            printf("\t!");
        }
        for (int k=1; k<=(2*i-1); k++)
        {
            n++;
            printf("\t%d",n);
        }
        printf("\n");
    }
    

    return 0;
}