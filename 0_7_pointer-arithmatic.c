#include<stdio.h>

int main(){
    int i=88;
    int *p=&i;
    printf("value of ptr is %u\n", p);
    p++;
    printf("value of ptr is %u\n", p);
    p = p+1;//add 4 bit as it is int //int take 4 bit
    printf("value of ptr is %u\n", p);
    p=p+2;
    printf("value of ptr is %u\n", p);
    return 0;
}