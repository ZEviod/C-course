#include<stdio.h>

int main(){
    
    //char ptr[] = "haa bhai\n";--->>this will not doo nut the written below will do
    char *ptr = "haa bhai\n";
    ptr = "boloo";
    printf("%s", ptr);

    return 0;
}