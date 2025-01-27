#include<stdio.h>

// void main(){
//     int arr[5],i;

//     printf("Enter 5 numbers:");
//     for (i = 0; i <5; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The values are:\n");
//     for (i = 0; i <5; i++)
//     {
//         printf("%d ",arr[i]);
//     }

    
// }
// void main(){
//     //add the elements
//     int arr[5],i,sum=0;

//     printf("Enter 5 numbers:");
//     for (i = 0; i <5; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     for (i = 0; i <5; i++)
//     {
//         sum+=arr[i];
//     }
//     printf("The sum is: %d",sum);

// }

void main(){
    int i,no,even=0;
    printf("Enter size of array:");
    scanf("%d",&no);
    int arr[no];

    printf("Enter 5 numbers:");
    for (i = 0; i <no; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i <no; i++)
    {
        if (arr[i]%2==0)
        {
            even++;
        }
        
    }

    printf("%d even numbers \n %d odd numbers",even,no-even);


}