//Obejective of the program:Swapping two numbers using comma operator
#include<stdio.h>

int main(){
    int a=10,b=20,t;
    printf("a=%d,b=%d\n",a,b);
    t=a,a=b,b=t;
    printf("a=%d,b=%d",a,b);

    return 0;
}