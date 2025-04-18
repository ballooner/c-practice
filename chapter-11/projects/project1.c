#include <stdio.h>

/**
 * Project 7:
 * Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount
 * using the smallest number of $20, $10, $5 and $1 bills.
 *
 * Modify the program so it includes the following function:
 * void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
 */

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int dollars, twenties, tens, fives, ones;
    printf("Enter a dollar amount:");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);

    printf("$10 bills: %d\n", tens);

    printf("$5 bills: %d\n", fives);

    printf("$1 bills: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars -= *twenties * 20;
    *tens = dollars / 10;
    dollars -= *tens * 10;
    *fives = dollars / 5;
    dollars -= *fives * 5;
    *ones = dollars;
}
