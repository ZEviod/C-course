#include<stdio.h>

int main(){
    int age,vipass=0;
    //vipass=1;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if((age <= 70 && age>=18) || vipass==1)
    {
        printf("You are above 18 and below 70 so you can drive");
    
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}