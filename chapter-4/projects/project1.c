#include <stdio.h>

/**
 * Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.
 */

int main(void) 
{
    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    printf("The reversal is %d%d\n", number % 10, number / 10);

    return 0;
}