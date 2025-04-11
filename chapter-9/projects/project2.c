#include <stdio.h>

/**
 * Write a program that asks the user to enter the amount of taxable income, 
 * then displays the tax due with the table provided.
 * Use a function to calculate the tax.
 */

float calculateTax(int income);

int main(void)
{
    int income;
    printf("Enter taxable income: ");
    scanf("%d", &income);
    
    printf("Tax due: %.2f\n", calculateTax(income));
    
    return 0;
}

float calculateTax(int income)
{
    float taxValue;
    if (income < 750)
        taxValue = income * .01f;
    else if (income < 2250)
        taxValue = 7.5f + (income - 750) * .02f;
    else if (income < 3750)
        taxValue = 37.5f + (income - 2250) * .03f;
    else if (income < 5250)
        taxValue = 82.5f + (income - 3750) * .04f;
    else if (income < 7000)
        taxValue = 142.5f + (income - 5250) * .05f;
    else
        taxValue = 230.0f + (income - 7000) * .06f;

    return taxValue;
}
