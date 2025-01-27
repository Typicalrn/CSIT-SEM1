#include<stdio.h>
# define N 5
    
int Sum(int no[]){
    int sum=0,i;
    for (i = 0; i <N; i++)
    {
        sum+=no[i];
    }   
    // printf("The sum is %d",sum);
    return sum;
}

int  great(int no[]){
    int t=no[0],i;

    for (i = 1; i <N; i++)
    {
        if (t<no[i]){
            t=no[i];
        }        
    } 
    // printf("The largest number is %d\n",t);
    return t;
}

int small(int no[]){
    int s=no[0],i;

    for (i = 1; i <N; i++)
    {
        if (no[i]<s){
            s=no[i];
        }
        
    } 
    // printf("The smallest number is %d",s);
    return s;
}

int main(){
    int choice;
    int no[N],i;
    char again;
    list:
    printf("Enter %d numbers:",N);
    for ( i = 0; i <N; i++){
        scanf("%d",&no[i]);
    }

    printf("1.Sum of numbers in array\n2.Greatest\n3.Smallest\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("The sum of numbers in the array is: %d",Sum(no));
        break;
    case 2:
        printf("The largest number is %d\n",great(no));
        break;
    case 3:
        printf("The largest number is %d\n",small(no));
        break;
    default:
    printf("Invalid choice");
        break;
    }
    
    printf("\nTry Again?(y/n)");
    scanf(" %c",&again);
    if (again=='y' || again=='Y')
    {
        goto list;
    }
    
    return 0;
}