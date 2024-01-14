#include<stdio.h>

int main(){
    FILE *ptr;
    //ptr = fopen("sample.txt","r");//-->>for reading the file
    ptr = fopen("sample.txt","w");//-->>for writing the file
    return 0;
}