#include<stdio.h>

int main(){
    /*int a=4000,b=200,c=15;
    printf("a=%d\nb=%d\nc=%d",a,b,c);
    printf("\n..........\n");
    printf("a=%5d\nb=%5d\nc=%5d",a,b,c);*/
    float x,y;
    printf("Enter three decimal numbers:");
    scanf("%3f %4f",&x,&y);
    printf("x=%3.1f\ny=%4.3f",x,y);

    return 0;
}