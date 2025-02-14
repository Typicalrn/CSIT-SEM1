#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int age;
    float marks[3];
};

void func(struct student a[]){
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        printf("The name,age and marks of student 1 is %s,%d\n",a[i].name,a[i].age);
        for (j = 0; j < 3; j++)
        {
            printf("Subject %d:%.2f\n",i+1,a[i].marks[j]);
        }
    }

}

int main(){
    struct student std[3];
    
    //inputing the value in the structure variables
    for(int i=0;i<3;i++){
        printf("Enter the name,age and marks of student %d :",i+1);
        scanf("%s%d",std[i].name,&std[i].age);
        for (int j = 0; j < 3; j++)
        {
            printf("Subject %d:",j+1);
            scanf("%f",&std[i].marks[j]);
        }
        
    }
    func(std);


    return 0;
}