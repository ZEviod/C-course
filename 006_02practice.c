#include<stdio.h>

void prind(int a){
    printf("address of variable a is %u\n", &a);
}

int main(){
    int i=90;
    printf("value of variable i is %u\n", i);
    prind(i);
    printf("address of variable i is %u\n", &i); 
    return 0;
}