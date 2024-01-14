#include<stdio.h>

int main(){
    int x=2,
     y=3;
    printf("the value of 3*x-8*y is %d\n", 3*x-8*y );
     printf("the value of 8*y/3*x is %d\n", 8*y/3*x );
     // here answer to be 4 but come 16 as same priority then goes as written
    return 0;
}