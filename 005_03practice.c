#include<stdio.h>
float force(float mass);

int main(){
    float m;
    printf("Enter the value of m:\n");
        scanf("%f",&m);

        printf("The value of force is %0.3f\n", force(m));//for decimal points
    return 0;
}

float force(float mass){

   float result = mass * 9.8;
   return result;
}