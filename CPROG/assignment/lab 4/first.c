//Write a program to input and display elements of a 1D array.
#include<stdio.h>

int main(){
    int n,i,j;
    
    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of an array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The elements of an array are");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}