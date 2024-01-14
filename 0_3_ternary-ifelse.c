#include<stdio.h>

int main(){
    int a;
     printf("Enter a number:\n");
    scanf("%d", &a);
//one liner if else
    (a<5)? printf("a is less than 5"):printf("a is not less than 5");
    return 0;
}