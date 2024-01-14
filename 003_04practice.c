#include <stdio.h>

int main() {
    int year;
    
    // get year from user
    printf("Enter a year: \n");
    scanf("%d", &year);
    
    // check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}
