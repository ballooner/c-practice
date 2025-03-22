#include <stdio.h>

/**
 * Rewrite the program in project 2 so that it prints the reversal without using arithmetic to split the number.
 */

int main(void)
{
    int digit1, digit2, digit3;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}