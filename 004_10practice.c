#include<stdio.h>

int main(){
    int n=2,prime=0;
    for(int i=2;i<n;i++){
    if(n%i==0){
       prime=1;
        break;
    }
    }
    if(prime==1){
    printf("This is not a prime no");
    }
    else{
    printf("This is a prime no");
    }
    return 0;
}