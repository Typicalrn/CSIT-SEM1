#include<stdio.h>

int main(){
    int num=100;
    int *ptr=&num;
    int* *ptr2=&ptr;
    printf("show numerical value:%d",*ptr);
    printf("\naddress of num:%d",ptr);
    printf("\nshow address of num:%d",*ptr2);
    printf("\nshow numerical value:%d",**ptr2);    
    printf("\nshow address of ptr:%d",ptr2);



    return 0;
}