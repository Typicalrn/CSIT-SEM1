#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


void ascending(int a[],int N){
    int i,temp,hole;
    for ( i = 1; i < N; i++)
    {
        temp=a[i];
        hole=i;
        while (hole>0 && a[hole-1]> temp)
        {
            a[hole]=a[hole-1];
            hole=hole-1;
            
        }
        a[hole]=temp; 
    }
}

void descending(int a[],int N){
    int i,temp,hole;
    for ( i = 1; i < N; i++)
    {
        temp=a[i];
        hole=i;
        while (hole>0 && a[hole-1]< temp)
        {
            a[hole]=a[hole-1];
            hole=hole-1;
            
        }
        a[hole]=temp; 
    }
}


int main(){
    int j,choice,N;
    char try;
    
    lb:
    printf("Enter the size of array:");
    scanf("%d",&N);
    int arr[N];
    for (j = 0; j < N; j++)
    {
        printf("Enter element %d:",j);
        scanf("%d",&arr[j]);
    }

    printf("Enter the way of sorting:\n1)Selection Sorting(Ascending)\n2)Selection Sorting(Descending)\nChoice:");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        ascending(arr,N);
        break;
    case 2:
        descending(arr,N);
        break;
    
    default:
        printf("Invalid Choice\n");
        exit(0);
        break;
    }
    
    for ( j = 0; j < N; j++)
    {
        printf("%d \t",arr[j]);
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