#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee naam = {100,30.30,"marry"};

    printf("code is %d:\n", naam.code);
    printf("salary is %f:\n", naam.salary);
    printf("name is %s:\n", naam.name);
    return 0;
}