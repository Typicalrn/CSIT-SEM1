#include<stdio.h>

// void nrna();
int oddEvenChecker(int a);

int main(){
    int num;

    printf("Enter an integer:");
    scanf("%d",&num);
    // printf("calling function nrna\n");
    // nrna();
    int res=oddEvenChecker(num);
    if (res==1){
        printf("It is even");
    }
    else{
        printf("It is odd");
    }
    
    return 0;
}

// void nrna(){
//     int a;

//     printf("Enter number:");
//     scanf("%d",&a);
//     printf("%d\n This function doesn't take arguement nor give any return type",a);
// }

void oddEvenChecker(int a){
    if (a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}