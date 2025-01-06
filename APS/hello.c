//take input from user
#include <stdio.h>
 int main(){
   int num;
   char ch;
   float f;

   printf("Enter any number:");  
   scanf("%d",&num);
   while ((getchar()) != '\n');
   printf("Enter the first character of your name:");
   scanf("%c",&ch);
   printf("Enter any decimal value:");
   scanf("%f",&f);
    
    return 0;
 }