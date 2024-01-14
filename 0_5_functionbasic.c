#include<stdio.h>
void display(); //function prototype

int main(){
    int a;
    printf("Vo aane wala hai\n");
    display();//function call
    printf("It has been done/intialized\n");
    return 0;
}


//function definition
void display(){
    printf("Function aa gya\n");
}