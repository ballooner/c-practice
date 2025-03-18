#include <stdio.h>

/**
 * Project 5:
 * Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
 * 3x^5+2x^4-5x^3-x^2+7x-6
 */

int main(void)
{
    float x;
    printf("Enter a value for x: ");
    scanf("%f", &x);

    float answer = (3 * x * x * x * x * x) + 
                   (2 * x * x * x * x) -
                   (5 * x * x * x) -
                   (x * x) +
                   (7 * x) -
                   6;

    printf("Answer: %f\n", answer);

    return 0;
}