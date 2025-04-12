#include <stdio.h>

/**
 * Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms.
 *
 * Modify project 3 from Chapter 6 so that it includes this function:
 * void reduce(int numerator, int denominator,
 *             int *reduced_numerator,
 *             int *reduced_denominator);
 */

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

 int main(void)
 {
    int numerator, denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    int reduced_numerator;
    int reduced_denominator;

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int remainder;

    *reduced_numerator = numerator;
    *reduced_denominator = denominator;
    while (*reduced_numerator % *reduced_denominator > 0)
    {
        remainder = *reduced_numerator % *reduced_denominator;
        *reduced_numerator = *reduced_denominator;
        *reduced_denominator = remainder;
    }

    *reduced_numerator = numerator / *reduced_denominator;
    *reduced_denominator = denominator / *reduced_denominator;
}
