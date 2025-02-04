/*binary searching
    elements must be in order
    divdes the array in half every time
*/
#include<stdio.h>
#define N 5

int binarySearch(int item , int a[]){
    int i,j,first=0,last=N-1,temp=0;
    int mid=(first+last)/2;
    for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

    while (first<=last)
    {
        if (item==a[mid])
        {
           return mid;
        }
        else if (item<a[mid])
        {
            last= mid-1;
            mid=(first+last)/2;
        }
        else if(item>a[mid])
        {
            first= mid+1;
            mid=(first+last)/2;
        }
        
    }
    return -1;
    

}

int main(){ 
    int searchItem,a[]={2,1,4,3,5};
    int index;

    printf("Enter the element you are searching for:");
    scanf("%d",&searchItem);
    
    index=binarySearch(searchItem,a);
    if (index==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("The element is found at %d index",index);
    }
    
    


    return 0;
}