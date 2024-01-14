#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int *ptr2;

    ptr = (int *)malloc(600*sizeof(int));
    for(int i=0;i<600;i++){
    ptr2 = (int *)malloc(600000*sizeof(int));
        printf("Enter the value of %d element :\n",i+1);
        scanf("%d",&ptr[i]);
        free(ptr2);//iske bina memory bdti jaa rhi thi ab iske baad memory consumption nhi bdega
    }
    for(int i=0;i<600;i++){
        printf("The value of %d element is : %d\n",i+1,ptr[i]);
    }
    return 0;
}