#include<stdio.h>

int main(){
    char name[10];
    int a=256;
    printf("a= %4d\n",a);
    printf("enter your name:");
    scanf("%[a-zA-Z0-9!# ]",name);
    printf("The output is: %s",name);

    return 0;
}