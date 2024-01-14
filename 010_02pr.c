#include<stdio.h>

int main(){
    int num;
    FILE *ptr;
    printf("Enter the integer you need the trable of:\n");
    scanf("%d",&num);
    ptr = fopen("table.txt","w");
    for(int i=0; i<10;i++){
        fprintf(ptr, "%d x %d = %d\n",num,i+1,num*(i+1));
    }
    printf("Successfully generated table of %d\n",num);
    return 0;
}