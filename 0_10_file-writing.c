#include<stdio.h>

int main(){
    FILE *pt;
    int num = 45;
    pt = fopen("generated.txt","w");
    fprintf(pt,"The number is %d\n",  num);
    fprintf(pt,"Thankssss\n");
    fclose(pt);
    return 0;
}