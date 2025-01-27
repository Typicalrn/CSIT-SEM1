#include<stdio.h>

int main(){
    int m,n,i,j,k;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
    int a[m][n],b[m][n],mul[m][n];
    for (i = 0; i <m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mul[i][j]=0;
        }
        
    }

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
            for ( k = 0; k < m; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d\t",mul[i][j]);
        }
        printf("\n");    
    }
    
    return 0;
}