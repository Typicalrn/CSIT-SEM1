#include<stdio.h>

int main(){
    int m,n,i,j;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
    int a[m][n],b[m][n],sum[m][n];
    

    printf("Enter elements of matrix a:");
    for (i = 0; i <m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter elements of matrix b:");
    for (i = 0; i <m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    for (i = 0; i <m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");    
    }
    
    return 0;
}