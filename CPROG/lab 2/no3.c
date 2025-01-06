//accept number in decimal and convert to hex
#include<stdio.h>

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("In Decimal= %d",num);
    printf("\nIn Octal= %o",num);
    printf("\nIn Hexadecimal= %X",num);

    return 0;
}