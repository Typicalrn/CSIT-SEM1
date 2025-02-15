//bubble sorting
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

void ascending(int a[],N);
void descending(int a[],N);

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
void ascending(int a[],N){
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
    
}
void descending(int a[],N){
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
    
}