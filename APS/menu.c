#include<stdio.h>


int main(){
    int choice,num1,num2;
    char ch;

    printf("Welcome to operation land.\n");
    do{    
        printf(" Choose one of the following\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n");
        printf("Enter your choice(1-5):");
        scanf("%d",&choice);
        printf("Enter first number:");
        scanf("%d",&num1);
        printf("Enter second number:");
        scanf("%d",&num2);

        switch (choice){
        case 1:
            result=num1+num2;
            break;
        case 2:
            result=num1-num2;
            break;
        case 3:
            result=num1*num2;
            break;
        case 4:
            result=num1/num2;
            break; 
        case 5:
            result=num1%num2;
            break;
        
        default:
            printf("Invalid Choice!!!\n");
            break;
        }
        printf("The result is %d",result);
        printf("Do you want to try another operation?(y/n):");
        scanf(" %c",&ch);
    } while (ch=='y' || ch=='Y');

    return 0;
}