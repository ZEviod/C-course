#include<stdio.h>
//sum take input in a and b and give integer output
int sum(int a, int b);

int main(){
    int c;
    c = sum(2,5);//function call
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a,int b){
    int c;//this c independent of that other c, can name result or smth instead of this c
    c = a+b;
    return c;
}