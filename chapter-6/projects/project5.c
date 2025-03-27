#include <stdio.h>

/**
 * Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit number with its digits reverse.
 * Generalize the program so the number can have any number of digits.
 */

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Number in reverse is: ");
    while (number > 0)
    {
        printf("%d", number % 10);
        number /= 10;
    }

    printf("\n");

    return 0;
}