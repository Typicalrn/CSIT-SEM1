#include<stdio.h>
#include<string.h>


struct Student{
    char name[20];
    int age;
    struct address{
        char cityname[20];
        int zipcode;
    }ad;
};

void func(struct Student a){
    printf("Name:%s\nAge:%d\nAddress:%s,%d",a.name,a.age,a.ad.cityname,a.ad.zipcode);
}


int main(){
    struct Student s[2];
    strcpy(s.name,"Ram");
    s.age=18;
    strcpy(s.ad.cityname,"Kathmandu");
    s.ad.zipcode=12345;
    func(s);

    

    return 0;
}