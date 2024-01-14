#include<stdio.h>

int main(){
    FILE *PTR;
    PTR = fopen("putcdemo.txt","w");
    putc('c',PTR);
    putc('c',PTR);
    putc('c',PTR);
    fclose(PTR);
    return 0;
}