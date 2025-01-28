#include<stdio.h>

int main(){
    char str[20],cpy[20],ch='y';
    int i=0;

    printf("Enter name:");
    while (ch!='\n'){
        ch=getchar();
        str[i]=ch;
        i++;
    }

    str[i]='\0';
    int j=0;
    printf("Your name is:");
    while (str[j]!='\0'){
        printf("%c",str[j]);
        cpy[j]=str[j];
        j++;
    }
    printf("%d\n%d",i,j);

    //printf("Your name is %d characters long.",i-1);
    cpy[i]='\0';
    printf("in cpy:");
    printf("%s",cpy);
    
    

    return 0;
}