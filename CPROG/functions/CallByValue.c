#include<stdio.h>
void swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("Inside called function;\n x=%d , y=%d",x,y);
}
int main(){
    int a=10,b=20;
    printf("Inside main function before function call;\n a=%d , b=%d",a,b);
    swap(a,b);
    printf("Inside main function after function call;\n a=%d , b=%d",a,b);

    return 0;
}