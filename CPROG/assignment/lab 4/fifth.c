//5. Create a program to reverse the elements of an array.
#include <stdio.h>

int main(){

    int num,i;
    printf("Enter the size of array:");
    scanf("%d",&num);

    int arr[num];
    printf("Enter the elements:");
    for (i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Original order:");
    for (i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }


    printf("\nReversed order of elements:");
    for (i = num-1; i >=0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
