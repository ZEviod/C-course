#include<stdio.h>

int main(){
        int a=90;
        int *p;
        p= &a;
    printf("value of variable a is %u\n", a);
    printf("value of variable a is %u\n", *p);
    printf("address of variable a is %u\n", p);
    return 0;
}