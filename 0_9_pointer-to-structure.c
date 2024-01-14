#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr->code= 102;
    //(*ptr).code = 101; it also works
    printf("%d\n", e1.code);
    printf("%d\n", (*ptr).code);
    return 0;
}