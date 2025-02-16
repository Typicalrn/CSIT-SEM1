//Implement a program to search for a specific element in an array and display its index.

#include<stdio.h>
#define N 5

int linearSearch(int a,int arr[]){
    int i;
    for(i=0;i<N;i++){
        if (a==arr[i]){
            return i;
        }        
    }
    if (i==N){
        return -1;
    }
}

int main(){
    int arr[N];
    int searchItem,result,i;

    printf("Enter 5 elements in the array:");
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);       
    }

    printf("\nEnter the element that need to be searched:");
    scanf("%d",&searchItem);
    
    result=linearSearch(searchItem,arr);
    if(result==-1){
        printf("Sorry! Element not found.");
    }
    else {
        printf("Element is found at %d",result);
    }
    
    return 0;
}