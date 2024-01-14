#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee fb[100];

    fb[0].code = 100;
    fb[0].salary = 60.60;
    strcpy(fb[0].name , "marry");

    fb[1].code = 101;
    fb[1].salary = 70.60;
    strcpy(fb[1].name , "sararry");
    
    printf("Done");

    return 0;
}