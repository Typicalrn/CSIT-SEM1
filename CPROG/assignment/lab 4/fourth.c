//Write a program to find the largest and smallest elements in an array.
/*binary searching
    elements must be in order
    divdes the array in half every time
*/
#include<stdio.h>


int main(){ 
    int searchItem,arr[],N,a,temp;

    printf("Enter the number of elements in array:");
    scanf("%d",&N);

    printf("Enter 5 elements in the array:");
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);       
    }

    printf("Enter the element you are searching for:");
    scanf("%d",&searchItem);

    for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
    printf("The smallest element is %d",arr[0]);
    printf("\nThe largest element is %d",arr[N-1]);
    
    return 0;
}