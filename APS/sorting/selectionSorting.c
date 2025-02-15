#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 6

void ascending(int a[]){
    int t,i,j,min;
    for ( i = 0; i < N; i++)
    {
        min=i;
        for ( j = i+1; j < N; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
            
        }
        t=a[min];
        a[min]=a[i];
        a[i]=t;
        
    }
}
void descending(int a[]){
    int t,i,j,min;
    for ( i = 0; i < N; i++)
    {
        min=i;
        for ( j = i+1; j < N; j++)
        {
            if (a[j]>a[min])
            {
                min=j;
            }
            
        }
        t=a[min];
        a[min]=a[i];
        a[i]=t;
        
    }
}

int main(){
    int i,choice;
    char try;
    
    lb:
    printf("Enter the size of array:");
    scanf("%d",&N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        printf("Enter element %d",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the way of sorting:\n1)Selection Sorting(Ascending)\n2)Selection Sorting(Descending)\nChoice:");
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
        printf("Invalid Choice\n");
        exit(0);
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