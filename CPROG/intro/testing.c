#include<stdio.h>
//void greet();
int main(){
    int x,a,sum;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&a);

    sum= a+x;
    printf("The sum of %d and %d is %d\n",a,x,sum);
    //greet();
    return 0;
}
/*void greet(){
    printf("Hello User!%d",x);
}*/