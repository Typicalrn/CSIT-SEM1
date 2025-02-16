//Write a program to find the largest and smallest elements in an array.
/*binary searching
    elements must be in order
    divdes the array in half every time
*/
#include<stdio.h>

int main(){ 
    int N,temp,i,j;

    printf("Enter the number of elements in array:");
    scanf("%d",&N);
    int a[N];

    printf("Enter %d elements in the array:",N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);       
    }

    for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(a[i]>a[j]){
				temp=a[i],a[i]=a[j],a[j]=temp;
			}
		}
	}
    printf("The smallest element is %d",a[0]);
    printf("\nThe largest element is %d",a[N-1]);
    
    return 0;
}