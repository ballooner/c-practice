#include <stdbool.h> 
#include <stdio.h>

/**
 * Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated.
 */

int main(void)
{
    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            digit_repeated[digit] = true;
            n /= 10;
            continue;
        }

        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Digits repeated: ");

    for (int i = 0; i < 10; i++)
    {
        if (digit_repeated[i])
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}