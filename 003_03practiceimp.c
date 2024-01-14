#include <stdio.h>

int main() {
    float income, tax = 0.0;
    
    // get income from user
    printf("Enter the income: \n");
    scanf("%f", &income);
    
    // calculate tax based on income slab
    if (income >= 250000 && income < 500000) {
        tax = (income - 250000) * 0.05;
    } 
    else if (income >= 500000 && income < 1000000) 
    {
        tax = 12500 + (income - 500000) * 0.2;
    }
     else if (income >= 1000000) 
     {
        tax = 112500 + (income - 1000000) * 0.3;
    }
    
    // display the tax
    printf("The income tax payable is: %.2f\n", tax);
    
    return 0;
}
