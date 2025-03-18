#include <stdio.h>

/**
 * Project 7:
 * Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount
 * using the smallest number of $20, $10, $5 and $1 bills.
 */

int main(void)
{
    int dollarAmount;
    printf("Enter a dollar amount:");
    scanf("%d", &dollarAmount);

    printf("$20 bills: %d\n", dollarAmount / 20);
    dollarAmount -= (dollarAmount / 20) * 20;

    printf("$10 bills: %d\n", dollarAmount / 10);
    dollarAmount -= (dollarAmount / 10) * 10;

    printf("$5 bills: %d\n", dollarAmount / 5);
    dollarAmount -= (dollarAmount / 5) * 5;

    printf("$1 bills: %d\n", dollarAmount);

    return 0;
}