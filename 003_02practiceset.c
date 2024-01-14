#include<stdio.h>

int main(){
    int p,c,m;
    float total;
    printf("Enter physics marks:\n");
    scanf("%d", &p);
    
    printf("Enter chemistry marks:\n");
    scanf("%d", &c);

    printf("Enter maths marks:\n");
    scanf("%d", &m);
    total=(p+c+m)/3;
    if((total<40)||p<33||c<33||m<33){
        printf("Your total percentage is %f and you are FAIL\n",total);
    }
    else{
        printf("Your total percentage is %f and you are PASS\n",total);
    }
    return 0;
}