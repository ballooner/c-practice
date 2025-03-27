#include <stdio.h>

/**
 * Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms.
 */

 int main(void)
 {
    int numerator, denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    int remainder;

    int num1 = numerator;
    int num2 = denominator;
    while (num1 % num2 > 0)
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    printf("In lowest terms: %d/%d\n", numerator / num2, denominator / num2);

    return 0;
 }