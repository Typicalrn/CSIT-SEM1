//6. Find and display duplicate elements in an array.
#include<stdio.h>

int main(){
    int i,j,check=0;
    int num;
    printf("Enter the size of array:");
    scanf("%d",&num);

    int arr[num];
    printf("Enter the elements:");
    for (i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i <num; i++)
    {
        for (j = i+1; j < num; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("There are duplicates of %d\n",arr[i]);
                check=1;
            }
            
        }

    }
    if (check==0)
    {
        printf("No Duplicates elements were found");
    }
    
    return 0;
}