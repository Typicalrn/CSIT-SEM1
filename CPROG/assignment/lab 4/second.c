//Write a program to find the sum and average of elements in an array.
#include<stdio.h>

int main(){
    int n,i,j,sum=0;
    float avg=0;
    
    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of an array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    for (i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("The sum of elements of the array is %d",sum);

    avg=(float)sum/n;
    printf("The average of elements of the array is %.2f",avg);
    

    return 0;
}