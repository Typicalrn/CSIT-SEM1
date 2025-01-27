#include<stdio.h>

int main(){
    int m,n;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
    int a[m][n];
    int i,j;

    printf("Enter numbers:");
    for (i = 0; i <m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    for (i = 0; i <m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");    
    }
    
    return 0;
}