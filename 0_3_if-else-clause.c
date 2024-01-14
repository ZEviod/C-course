#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    if(a==1)
    {
        printf("Your number is 1");
    }
    else if(a==2)
    {
        printf("Your number is 2");
    }
     else if(a==3)
    {
        printf("Your number is 3");
    }
     else
    {
        printf("Your number is not 1,2,3!");
    }
    //if last else not there then blank output/nothing shows
    return 0;
}