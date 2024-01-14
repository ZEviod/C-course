#include<stdio.h>

int main(){
    int i =34;
    int *j = &i;
    printf("value of i is %d\n",i);
    printf("value of i is %d\n", *j);
    printf("address of i is %u\n", &i);
    printf("address of i is %u\n", j);
    printf("address of j is %u\n", &j);
    printf("value of j is %u\n", *(&j));
    return 0;
}