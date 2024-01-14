#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter first numbers (a):");
    scanf("%d", &a);
    printf("Enter first numbers (b):");
    scanf("%d", &b);
    printf("Enter first numbers (c):");
    scanf("%d", &c);
    printf("Enter first numbers (d):");
    scanf("%d", &d);

    if(a>b && a>c && a>d)
    {
        printf("a-%d is the greatest number", a);
    }
    else if(b>c && b>d)
    {
        printf("b-%d is the greatest number", b);
    }
     else if(c>d)
    {
        printf("c-%d is the greatest number", c);
    }
    else{
        printf("d-%d is the greatest number", d);
    }
    return 0;
}