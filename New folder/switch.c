#include<stdio.h>
int main(){
    int choice;
    printf("Enter a number(1-3):");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("You chose 1");
        break;
    case 2:
        printf("You chose 2");
        break;
    case 3:
        printf("You chose 3");
        break;
    
    default:
        break;
    }

    return 0;
}