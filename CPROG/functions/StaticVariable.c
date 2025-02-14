#include<stdio.h>

void Static(){
    static int value=0;
    printf("%d\t",value);
    value++;
}
int main(){
    Static();
    Static();
    Static();
    Static();
    Static();
    Static();
    Static();
    Static();
    Static();

    return 0;
}