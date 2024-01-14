#include<stdio.h>

int main(){
    int i=1;
    do{
    printf("%d\n",i);
    
    i++;
    if(i==5){
        break;
    }
    // agar ye pahale likha hota toh 5 tak print hota but ab 4 tak hua
    }while(i<10);
    return 0;
}