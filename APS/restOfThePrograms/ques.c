/*if cost price and selling price of an item is input through the keyboard, 
WAP  to determine whether the seller has made a profit or incured loss. 
also determine how much profit he made or loss incured*/
#include<stdio.h>

int main(){
    float cost_price,selling_price,diff;

    printf("Enter the cost price of the item:Rs.");
    scanf("%f",&cost_price);
    printf("Enter the selling price of the item:Rs.");
    scanf("%f",&selling_price);

    diff=selling_price-cost_price;

    if (diff>0)
    {
        printf("You have made a profit of Rs.%.2f",diff);
    }
    else{
        printf("You have incurred a loss of Rs.%.2f",diff);
    }
    

    return 0;
}