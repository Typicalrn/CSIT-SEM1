#include<stdio.h>

int main(){
    float height,breadth,area;
    printf("Enter height of triangle:");
    scanf("%f",&height);
    printf("Enter breadth of triangle:");
    scanf("%f",&breadth);

    //area = 0.5*height*breadth;
    area = (float)1/2*height*breadth;
    printf("The area of triangle is %.3f",area);
    return 0;
}