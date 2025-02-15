#include<stdio.h>

int main(){
    int n,check=0;

    printf("Enter a positive number: ");
	scanf("%d",&n);

    if(n==0 || n==1){
		check=1;
	}
	
	for(i=2;i<n;++i)
	{
		if(n%i==0 ){
			check=1;
            break;1
		}
	}
	
	if(check==0)
	{
		printf("%d is a prime number.",n);
	}
	else 
	{
		printf("%d is a composite number.",n);
	}

	return 0;
}