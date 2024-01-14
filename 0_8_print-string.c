#include<stdio.h>

int main(){
     char str[] = "IDK";
     char *ptr = str;
     while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
     }
    return 0;
}