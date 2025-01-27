#include<stdio.h>
# define N 5

int main(){
    int no[N],i;
    printf("Enter %d numbers:",N);
    for ( i = 0; i <N; i++)
    {
        scanf("%d",&no[i]);
    }
    int t=no[0],s=no[0];

    for (i = 1; i <N; i++)
    {
        if (t<no[i]){
            t=no[i];
        }

        if (no[i]<s){
            s=no[i];
        }
        
    } 
    printf("The largest number is %d\n",t);
    printf("The smallest number is %d",s);

    return 0;  
}