#include <stdio.h>

/**
 * Write a functin that computes the value of the following polynomial:
 * 3x^5+2x^4-5x^3-x^2+7x-6
 *
 * Write a program that asks the user to enter a value for x, 
 * calls the function to compute the value of the polynomial,
 * and then displays the value returned by the function.
 */

long computePolynomial(long x);
long power(long x, int n);

int main(void)
{
    long input;
    printf("Enter a number: ");
    scanf("%ld", &input);

    printf("%ld\n", computePolynomial(input));

    return 0;
}

long computePolynomial(long x)
{
    long value = 3 * (power(x, 5));
    value += 2 * (power(x, 4));
    value -= 5 * (power(x, 3));
    value -= power(x, 2);
    value += 7 * x;
    value -= 6;

    return value;
}

long power(long x, int n)
{
    long value = x;

    for (int i = 2; i <= n; i++)
    {
        value *= x;
    }

    return value;
}
