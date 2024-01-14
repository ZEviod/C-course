#include<stdio.h>

int main(){
    int i=0,n=7, fact=1;
    for(i=1;i<=n;i++){
    fact*=i;
    }
    printf("The value of factorial %d is %d",n,fact);
    return 0;
}

#include<stdio.h>

/*
doing by while loop


int main(){
    int i=1,n=4, fact=1;
    while(i<=n){
    fact*=i;
    i++;
    }
    printf("The value of factorial %d is %d",n,fact);
    return 0;
}    


*/