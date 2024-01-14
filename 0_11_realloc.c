#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;

    ptr = (int *)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("Enter the value of %d element :\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("The value of %d element is : %d\n",i+1,ptr[i]);
    }

//reallocate ptr toc change memory
ptr = realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("Enter the value of %d element :\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("The value of %d element is : %d\n",i+1,ptr[i]);
    }

    return 0;
}