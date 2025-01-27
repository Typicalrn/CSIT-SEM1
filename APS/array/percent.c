//5 subjects output %
#include<stdio.h>
#define N 5

int main(){
    float subjects[N],percent,sum=0,total,full;
    int i;

    printf("Enter full marks of the subject:");
    scanf("%f",&full);
    total=full*5;

    printf("Enter your marks in different subjects:");
    for ( i = 0; i < N; i++)
    {
        scanf("%f",&subjects[i]);
    }
    for ( i = 0; i < N; i++)
    {
        sum=sum+subjects[i];
    }
    percent=(sum/total)*100;
    printf("You got %.2f ",percent);

    return 0;
}