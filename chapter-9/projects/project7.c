#include <stdio.h>

/**
 * Improve the power function of Section 9.6.
 */

long power(long x, int exponent);

int main(void)
{
    long x;
    int n;

    printf("Enter a value for x: ");
    scanf("%ld", &x);
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("%ld^%d = %ld\n", x, n, power(x, n));

    return 0;
}

long power(long x, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    if (exponent % 2 == 0)
    {
        return x * x * power(x, exponent - 2);
    } else 
    {
        return x * power(x, exponent - 1);
    }
}
