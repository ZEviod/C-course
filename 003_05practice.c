#include<stdio.h>

int main(){
    //97-122 = a-z
    char ch;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    if (ch<=122 && ch>=97){
        printf("It is a lowercase character");
    }
    else{
        printf("It is not a lowercase character");
    }
    return 0;
}