#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    /* size of operators
    printf("The size of int on my pc is %d\n", sizeof(int));
    printf("The size of float on my pc is %d\n", sizeof(float));
    printf("The size of char on my pc is %d\n", sizeof(char)); */

    ptr = (int *)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter the value of %d element :\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value of %d element is : %d\n",i+1,ptr[i]);
    }
    return 0;
}