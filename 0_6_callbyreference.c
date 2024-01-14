#include<stdio.h>
void swap(int *a, int *b);
void wrong_swap(int a, int b);

int main(){
    int x=3,y=4;
    printf("The value of a and b before swap is %d and %d\n",x,y);
   ///wrong_swap(a,b);  //will not work due to call by value
   swap(&x,&y);
    printf("The value of a and b after swap is %d and %d\n",x,y);
    
    return 0;
}

void wrong_swap(int a,int b){
int temp;
temp = a;
a=b;

}
void swap(int *a,int *b){
int temp;
temp = *a;
*a=*b;
*b = temp;
}