#include<stdio.h>

int main(){
    int x;

    try_again:
    printf("Enter a number for day (1-7):");
    scanf("%d",&x);

    switch (x){
        case 1:
            printf("It is Sunday");
            break;
        case 2:
            printf("It is Monday");
            break;
        case 3:
            printf("It is Tuesday");
            break;
        case 4:
            printf("It is Wednesday");
            break;
        case 5:
            printf("It is Thursday");
            break;
        case 6:
            printf("It is Friday");
            break;
        case 7:
            printf("It is Saturday");
            break; 
        
        default:
            printf("Invalid!!!!!!\n Try Again");
            goto try_again;
            break;
    }


    return 0;
}