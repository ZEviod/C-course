#include<stdio.h>
typedef struct complex{
    int real;
    int complex;
}comp;

void display(comp c){
    printf("The value of real part is %d\n", c.real);
    printf("The value of imaginary part is %d\n", c.complex);
}
int main(){
    comp comnums[5];
    for(int i=0;i<5;i++){
        printf("Enter the real value for %d num\n", i+1);
        scanf("%d", &comnums[i].real);

        printf("Enter the complex value for %d num\n", i+1);
        scanf("%d", &comnums[i].complex);

    }    
    for(int i=0;i<5;i++){
        display(comnums[i]);
    }
    return 0;
}