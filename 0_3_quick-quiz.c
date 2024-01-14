#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks(0-100):\n");
    scanf("%d", &marks);
    switch(marks/10){
        case 10:
        case 9:
        printf("A grade");
        break;

        case 8:
        printf("B grade");
        break;

        case 7:
        printf("C grade");
        break;

        case 6:
        printf("D grade");
        break;

        default :
        printf("F grade");
    }
    return 0;
}