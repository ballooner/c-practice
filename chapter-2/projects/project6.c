#include <stdio.h>

/**
 * Project 6:
 * Modify the program of project 5 so that the polynomial is evaluated using the following formula:
 * ((((3x+2)x-5)x-1)x+7)x-6
 */

int main(void)
{
    float x;
    printf("Enter a value for x: ");
    scanf("%f", &x);

    float answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Answer: %f\n", answer);

    return 0;
}