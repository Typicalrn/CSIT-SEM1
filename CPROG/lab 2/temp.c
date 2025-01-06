/*
Title:Celcius to Fahrenheit
Programmer: Aryan Maharjan
*/
#include<stdio.h>

int main ()
{
	float C,F;

    printf("\nEnter temperature in Celsius:");
	scanf("%f",&C);		
	F=C*9/5+32;
	printf("The temperature in Fahrenheit is %.3f",F);
	
	
	
	return 0;
}