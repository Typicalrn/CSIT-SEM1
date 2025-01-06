/*WAP to check whether a triangle is valid or notl,when the three angles of the triangle are entered through
the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees*/
#include<stdio.h>

int main(){
    float angle1,angle2,angle3,sum;
    printf("Enter the three angles:");
    scanf("%f,%f,%f",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if (sum==180)
    {
        printf("The triangle is valid");
    }
    

    return 0;
}