#include<stdio.h>

int main(){
    int arr[10];
    //int *ptr = &arr[0];
    int *ptr = arr;
    ptr=ptr+2;
    if (ptr==&arr[2]){
        printf("this point to same locarion\n");
    }
    else{
        printf("this do not point to same locarion\n");
    }
    return 0;
}