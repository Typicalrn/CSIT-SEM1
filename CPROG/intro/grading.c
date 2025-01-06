#include<stdio.h>
/*grade of student
percent>= 85 A
percent 75-85 B
percent65 -75 C or else fail
*/

int main(){
    float sub_per1,sub_per2,sub_per3,sub_per4,total;

    printf("Enter the perentage for Maths,Physics,Dl Cprogramming");
    scanf("%f,%f,%f,%f",&sub_per1,&sub_per2,&sub_per3,&sub_per4);
    total=(sub_per1+sub_per2+sub_per3+sub_per4)/4;

    if(total>=85){
        printf("You got A");
    }
    else if(total>=75 && total<85){
        printf("You got B");
    }
    else if(total>=65 && total<75){
        printf("You got C");
    } 
    else if(total< 65){
        printf("You failed");
    }

    return 0;
}