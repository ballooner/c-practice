#include <stdio.h>
#include <math.h>

/**
 * Write a program that uses Newton's method to compute teh square rot of a positive floating-point number.
 */

int main(void)
{
    float number;
    printf("Enter a positive number: ");
    scanf("%f", &number);

    double oldY;
    double y = 1;

    do 
    {
        oldY = y;
        y = (y + number / y) / 2;
    } while (fabs(y - oldY) > .00001);

    printf("Square root: %lf\n", y);

    return 0;
}