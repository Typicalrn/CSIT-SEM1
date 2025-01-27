#include<stdio.h>

int main(){
    int num,i,j,check;
    printf("Enter:");
    scanf("%d",&num);

    for(i=2;i<=num/2;i++){
        check=1;
        for(j=2;j<=i;j++){
            if(i%j==0){
                check=0;
                break;
            }
        }
        if(check==1){
            printf("%d",i);
        }
    }

    return 0;
}