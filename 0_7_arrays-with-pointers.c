#include<stdio.h>

int main(){
    int m[4];
    int *pt;
    //pt =  &m[0];
    pt = m;
    for(int i=0;i<4;i++){
        printf("Enter the marks of student %d:\n", i+1);
        scanf("%d", pt);
        pt++;
    }
    for(int i=0;i<4;i++){
        printf("Marks of student %d is:%d\n", i+1, m[i]);
    }
    return 0;
}