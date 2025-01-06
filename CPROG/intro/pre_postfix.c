#include<stdio.h>
int main(){
    int x=8;
    //prefix increment and decrement
    printf("x=%d\n",x);
    printf("x=%d\n",++x);
    printf("x=%d\n",x);
    printf("x=%d\n",--x);
    printf("x=%d\n",x);
    //postfix increment and decrement
    printf("x=%d\n",x);
    printf("x=%d\n",x++);
    printf("x=%d\n",x);
    printf("x=%d\n",x--);
    printf("x=%d\n",x);

    return 0;
}