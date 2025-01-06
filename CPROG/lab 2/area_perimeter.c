#include<stdio.h>

int main(){
    const float pi=22/7;
    float radius,area,perimeter;

    printf("Enter the radius of circle:");
    scanf("%f",&radius);

    area=pi*radius*radius;
    perimeter=2*pi*radius;
    printf("\nThe area of circle is %.2f",area);
    printf("\nThe perimeter of circle is %.2f",perimeter);

    return 0;
}