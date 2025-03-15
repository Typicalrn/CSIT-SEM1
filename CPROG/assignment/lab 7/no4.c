//4.Declare a pointer to a character and assign it a string. Print the string using the pointer.
#include<stdio.h>

int main(){
    char str[]="Hello World!";
    int size =sizeof(str)/sizeof(char);
    char *ptr=str;
    for (int i = 0; i < size; i++)
    {
        printf("%c",*(ptr+i));
    }
    return 0;
}