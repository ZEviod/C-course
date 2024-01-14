#include<stdio.h>
#include<math.h>
int main(){
    int a =4;
    int b =2,z;
    z=b*a;
    //b*a=z; //illegal
    printf("z=%d\n",z);
    printf("a-b= %d\n", a-b);
    printf("a+b= %d\n", a+b);
    printf("a*b= %d\n", a*b);
    printf("a/b= %d\n", a/b);
    printf("remainder when 5 by 2 id %d\n", 5%2);

    //to multiply use * not direct as ()() better ()*()
    printf("the value of 2^5 is %f", pow(2,5));
    return 0;
}