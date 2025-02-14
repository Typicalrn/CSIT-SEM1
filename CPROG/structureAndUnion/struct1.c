#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int age;
    float marks;
};

int main(){
    struct student s2,s3;
     struct student s1={"Aryan",18,40.4};
     strcpy(s2.name,"Hardik");
     s2.age=19;
     s2.marks=30.3;
     printf("Enter the name,age and marks of student 3:");
     scanf("%s%d%f",s3.name,&s3.age,&s3.marks);

    printf("The name,age and marks of student 1 is %s,%d and %f\n",s1.name,s1.age,s1.marks);
    printf("The name,age and marks of student 1 is %s,%d and %f\n",s2.name,s2.age,s2.marks);
    printf("The name,age and marks of student 1 is %s,%d and %f\n",s3.name,s3.age,s3.marks);

    return 0;
}