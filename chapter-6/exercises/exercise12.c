#include <stdio.h>

/**
 * Modify the loop to check primes in Section 6.4 to take advantage of the fact you only need to check up to the square root of n.
 */

int main(void)
{
    int n = 17;

    for (int d = 2; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            printf("%d is divisible by %d\n", n, d);
            break;
        }
    }
}