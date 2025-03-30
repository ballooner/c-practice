#include <stdio.h>

/**
 * Modify the sum2.c program of Section 7.1 to sum a series of double values.
 */

int main(void)
{
    double n;
    printf("Enter doubles (0 to terminate): ");

    double sum = 0;
    scanf("%lf", &n);

    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    
    printf("%lf\n", sum);

    return 0;
}