#include<stdio.h>

int main(){
    FILE *ptrr;
    ptrr = fopen("getcdemo.txt","r");
    char c = fgetc(ptrr);
    while(c!=EOF){
        printf("%c",c);
        c = fgetc(ptrr);
    }
    return 0;
}