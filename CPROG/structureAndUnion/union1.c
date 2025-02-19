#include<stdio.h>
union school{
    char name[13];
    int year;
}un;


int main(){
    printf("\nsize of union: %u",sizeof(un));
    printf("\nsize of union: %u",&un.name);
    printf("\nsize of union: %u",sizeof(un));
}