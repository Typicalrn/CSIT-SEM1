#include<stdio.h>

int main(){
    int x=10,y=260,z=30;

    if(x>y){
        if (x>z){
           printf("x is largest");
        }
    }
    else{//y is greater than x
        if (y>z){
            printf("y is greater");
        }
        else{
        printf("z is greater.");
        }
    }
    return 0;
}