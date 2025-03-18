#include <stdio.h>

/**
 * Project 4:
 * Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added
 */

 int main(void)
 {
    float moneyAmount;
    printf("Enter an amount: ");
    scanf("%f", &moneyAmount);

    printf("With tax added: %f\n", moneyAmount * 1.05);

    return 0;
 }