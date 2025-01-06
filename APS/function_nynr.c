#include<stdio.h>
void sum();
void sub();
void multiply();
void div();

float num1,num2,result;

int main(){
    int choice;
    char ch;

    printf("Welcome to operation land.\n");
    do{   
        printf(" Choose one of the following operations\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
        printf("Enter your choice(1-4):");
        scanf("%d",&choice);
        

        switch (choice){
            case 1:
                sum();
                break;
            case 2:
                sub();
                break;
            case 3:
                multiply();
                break;
            case 4:
                div();
                break;         
            default:
                printf("Invalid Choice!!!\n");
                break;
        }
        printf("Do you want to try another operation?(y/n):");
        scanf(" %c",&ch);
    } while (ch=='y' || ch=='Y');

    return 0; 
}


void sum(){
    printf("Enter any two number:");
    scanf("%f %f",&num1,&num2);
    result=num1+num2; 
    printf("The sum of  %.2f and %.2f is %.2f\n",num1,num2,result);
}

void sub(){
    printf("Enter any two number:");
    scanf("%f %f",&num1,&num2); 
    result=num1-num2; 
    printf("The difference of  %.2f and %.2f is %.2f\n",num1,num2,result);
}

void div(){
    printf("Enter any two number:");
    scanf("%f %f",&num1,&num2); 
    result=num1/num2; 
    printf("The division of  %.2f and %.2f is %.2f\n",num1,num2,result);
    }

void multiply(){
    printf("Enter any two number:");
    scanf("%f %f",&num1,&num2); 
    result=num1*num2; 
    printf("The product of  %.2f and %.2f is %.2f\n",num1,num2,result);
}