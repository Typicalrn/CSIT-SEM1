#include<stdio.h>

float sum(float a,float b);
float sub(float a,float b);
float multiply(float a,float b);
float div(float a,float b);

int main(){
    int choice;
    float num1,num2;
    char ch;

    printf("Welcome to operation land.\n");
    do{ 
        printf("Enter any two number:");
        scanf("%f %f",&num1,&num2);   
        printf(" Choose one of the following operations\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
        printf("Enter your choice(1-4):");
        scanf("%d",&choice);
        

        switch (choice){
            case 1:
                printf("The sum of  %.2f and %.2f is %.2f\n",num1,num2,sum(num1,num2));
                break;
            case 2:
                printf("The difference of  %.2f and %.2f is %.2f\n",num1,num2,sub(num1,num2));
                break;
            case 3:
                printf("The product of  %.2f and %.2f is %.2f\n",num1,num2,multiply(num1,num2));
                break;
            case 4:
                printf("The divsion of  %.2f and %.2f is %.2f\n",num1,num2,div(num1,num2));
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


float sum( float a, float b){
    return a+b;
}

float sub(float a,float b){
    return a-b;
}

float div(float a, float b){
    return a/b;
    }

float multiply(float a, float b){
    return a*b;
}