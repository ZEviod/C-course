#include<stdio.h>

int main(){
    int table[10];
    for(int i=0;i<10;i++){
        table[i] = 5*(i+1);
    }

    for(int i=0;i<10;i++){
        printf("5 x %d = %d\n", i+1,table[i]);
    }

    return 0;
}