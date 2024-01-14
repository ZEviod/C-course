#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp){
    printf("The code of employee is:%d \n", emp.code);
    printf("The salary of employee is:%f \n", emp.salary);
    printf("The name of employee is:%s \n", emp.name);
    emp.code = 34;//it will not change emp code...
}

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code = 102;
    ptr->salary = 96.69;
    strcpy(ptr->name, "hola");

    show(e1);
    printf("The code of employee is:%d \n", e1.code);

    return 0;
}