#include <stdio.h>

/**
 * Write a program that asks the user to enter a three-digit number, then prints the number with its digits reversed.
 */

int main(void)
{
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    printf("The reversal is: %d%d%d\n", number % 100 % 10, number % 100 / 10, number / 100);

    return 0;
}