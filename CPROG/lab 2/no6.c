//write a proggram to accept the principal,rate, and numberof years and find out the simple interest.
#include<stdio.h>

int main()
{
	int P,T,SI;
	float R;
	
	printf("Enter Principal: Rs.");
	scanf("%d",&P);
	
	printf("Enter Time:");
	scanf("%d",&T);
	
	printf("Enter Rate:");
	scanf("%f",&R);
	
	SI=(float) (P*T*R)/100;
	
	printf("The simple interest is Rs.%d",SI);
	
	return 0;
}