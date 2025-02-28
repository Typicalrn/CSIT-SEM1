#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *ptr;
    char data[100], name[]="Shahil Ansari is apple fan boy";
    int roll=1425;
    char gender='m';
    float marks=30.10;
    ptr=fopen("hello.txt","w");
    if (ptr==NULL)
    {
        printf("Error!");
    }
    fprintf(ptr,"roll:%d name:%s marks:%f gender:%c",roll,name,marks,gender);
    fclose(ptr);

    ptr=fopen("hello.txt","r");
    while (!feof(ptr))
    {
        fgets(data,6,ptr);
        printf("%s",data);
    }
    
    return 0;
}