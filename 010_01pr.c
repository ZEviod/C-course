#include<stdio.h>

int main(){
    int a, b, c;
    FILE *ptr;
    ptr = fopen("pr_10_01.txt","r");
    fscanf(ptr,"%d %d %d",&a ,&b,&c);
    printf("The value of a b and c is %d %d %d",a ,b ,c);
    return 0;
}