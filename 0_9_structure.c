#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.code = 56;    
    e1.salary = 31.342;    
    //e1.name = "harry";-->>won't work    
    strcpy(e1.name,"harry");

    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}