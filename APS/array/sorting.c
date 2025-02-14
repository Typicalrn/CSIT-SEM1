//bubble sorting
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define N 6

int* ascending(int a[]);
int* descending(int a[]);

int main(){
    int arr[N]={2,7,4,1,5,3};
    int i,choice;
    char try;
    
    lb:
    printf("Enter the way of sorting:\n1)Bubble Sorting(Ascending)\n2)Bubble Sorting(Descending)\nChoice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        ascending(arr);
        break;
    case 2:
        descending(arr);
        break;
    
    default:
        printf("Invalid Choice");
        break;
    }
    

    for ( i = 0; i < N; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    printf("Do you want to try again(y/n):");
    scanf(" %c",&try);
    system("cls");
    try =tolower(try);
    if (try=='y')
    {
        goto lb;
    }
    

    return 0;
}
int* ascending(int a[]){
    int t,i,j;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if (a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
        
    }
    return a;
}
int* descending(int a[]){
    int t,i,j;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
        
    }
    return a;
}