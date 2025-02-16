//WAP to find the reverse of a number and check whether it is a palindrome or not.
#include <stdio.h>

int main() 
{
    int n,rev = 0,ori,rem;

    printf("Enter a number: ");
    scanf("%d", &n);
    ori=n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("The reverse of the number is %d\n",rev);

    if(ori==rev)
    {
    	printf("It is a palindrome number");
	}
	else
	{
		printf("%It is not a palindrome number");
	}

    return 0;
}

